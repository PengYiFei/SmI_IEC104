/*
 *  iso_server.c
 *
 *  Copyright 2013, 2014 Michael Zillgith
 *
 *  This file is part of libIEC61850.
 *
 *  libIEC61850 is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  libIEC61850 is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with libIEC61850.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  See COPYING file for the complete license text.
 */

#include "libiec61850_platform_includes.h"

#include "stack_config.h"

#include "main.h"

#ifndef DEBUG_ISO_SERVER
#ifdef DEBUG
#define DEBUG_ISO_SERVER 1
#else
#define DEBUG_ISO_SERVER 0
#endif /*DEBUG */
#endif /* DEBUG_ISO_SERVER */

#include "mms_server_connection.h"

#include "hal_thread.h"

#include "iso_server.h"

#include "iso_server_private.h"

#ifndef CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS
#define CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS 5
#endif

#define TCP_PORT 			102
#define SECURE_TCP_PORT 	3782
#define BACKLOG 			5			// ��������� �����������.

struct sIsoServer {
    IsoServerState state;
    ConnectionIndicationHandler connectionHandler;
    void* connectionHandlerParameter;

    AcseAuthenticator authenticator;
    void* authenticatorParameter;

#if (CONFIG_MMS_THREADLESS_STACK != 1)
    Thread serverThread;
#endif

    Socket serverSocket;
    int tcpPort;
    char* localIpAddress;
    char* netMask;
    char* gateway;

#if (CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS == -1)
    LinkedList openClientConnections;
#else
    IsoConnection* openClientConnections;
#endif /* (CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS == -1) */

#if (CONFIG_MMS_THREADLESS_STACK != 1)
    Semaphore userLock;
#endif

#if (CONFIG_MMS_THREADLESS_STACK != 1) && (CONFIG_MMS_SINGLE_THREADED == 0)
    Semaphore openClientConnectionsMutex; /* mutex for openClientConnections list */
    Semaphore connectionCounterMutex;
#endif

    int connectionCounter;
};

#if (CONFIG_MMS_THREADLESS_STACK != 1) && (CONFIG_MMS_SINGLE_THREADED == 0)
static inline void
lockClientConnections(IsoServer self)
{
    Semaphore_wait(self->openClientConnectionsMutex);
}

static inline void
unlockClientConnections(IsoServer self)
{
    Semaphore_post(self->openClientConnectionsMutex);
}
#endif /* (CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS == -1) */

static void
addClientConnection(IsoServer self, IsoConnection connection)
{

#if (CONFIG_MMS_THREADLESS_STACK != 1) && (CONFIG_MMS_SINGLE_THREADED == 0)
    Semaphore_wait(self->connectionCounterMutex);
#endif

    self->connectionCounter++;
    if (DEBUG_ISO_SERVER) {
    	USART_TRACE_GREEN("IsoServer: ����������� ������� �������� �� %i!\n", self->connectionCounter);
    }

#if (CONFIG_MMS_THREADLESS_STACK != 1) && (CONFIG_MMS_SINGLE_THREADED == 0)
    lockClientConnections(self);
#endif

#if (CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS == -1)
    LinkedList_add(self->openClientConnections, connection);
#else
    int i;

    for (i = 0; i < CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS; i++) {
        if (self->openClientConnections[i] == NULL) {
            self->openClientConnections[i] = connection;

            if (DEBUG_ISO_SERVER){
            	USART_TRACE_GREEN("ISO_SERVER: �������� ���������� (%p) self->openClientConnections[%i]\n", connection, i);
            }

            break;
        }
    }
#endif

#if (CONFIG_MMS_THREADLESS_STACK != 1) && (CONFIG_MMS_SINGLE_THREADED == 0)
    unlockClientConnections(self);
#endif

#if (CONFIG_MMS_THREADLESS_STACK != 1) && (CONFIG_MMS_SINGLE_THREADED == 0)
    Semaphore_post(self->connectionCounterMutex);
#endif

}

static void
removeClientConnection(IsoServer self, IsoConnection connection)
{

#if (CONFIG_MMS_THREADLESS_STACK != 1) && (CONFIG_MMS_SINGLE_THREADED == 0)
    lockClientConnections(self);
#endif

#if (CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS == -1)


#if (CONFIG_MMS_SINGLE_THREADED == 0)

    LinkedList_remove(self->openClientConnections, connection);

#endif /* (CONFIG_MMS_SINGLE_THREADED == 0) */


#else

    int i;

    for (i = 0; i < CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS; i++) {
        if (self->openClientConnections[i] == connection) {

            if (DEBUG_ISO_SERVER){
            	USART_TRACE_BLUE("ISO_SERVER: removed connection (%p) index:%i\n", connection, i);
            }

            self->openClientConnections[i] = NULL;
            break;
        }
    }
#endif /* (CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS == -1) */

#if (CONFIG_MMS_THREADLESS_STACK != 1) && (CONFIG_MMS_SINGLE_THREADED == 0)
    unlockClientConnections(self);
#endif
}

static void
closeAllOpenClientConnections(IsoServer self)
{

#if (CONFIG_MMS_THREADLESS_STACK != 1) && (CONFIG_MMS_SINGLE_THREADED == 0)
    lockClientConnections(self);
#endif

#if (CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS == -1)

    LinkedList openConnection = LinkedList_getNext(self->openClientConnections);
    while (openConnection != NULL) {
        IsoConnection isoConnection = (IsoConnection) openConnection->data;

        IsoConnection_close(isoConnection);

#if (CONFIG_MMS_SINGLE_THREADED == 1)
            /* if CONFIG_MMS_SINGLE_THREADED == 0 connection instance will be destroyed by connection thread. */
        IsoConnection_destroy(isoConnection);
#endif

        openConnection = LinkedList_getNext(openConnection);
    }

#if (CONFIG_MMS_SINGLE_THREADED == 1)
    LinkedList_destroyStatic(self->openClientConnections);
    self->openClientConnections = NULL;
#endif

#else
    int i;

    for (i = 0; i < CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS; i++) {
        if (self->openClientConnections[i] != NULL) {

            IsoConnection_close(self->openClientConnections[i]);

#if (CONFIG_MMS_SINGLE_THREADED == 1)
            /* if CONFIG_MMS_SINGLE_THREADED == 0 connection instance will be destroyed by connection thread. */
            IsoConnection_destroy(self->openClientConnections[i]);
#endif

        }
    }
#endif /* (CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS == -1) */

#if (CONFIG_MMS_THREADLESS_STACK != 1) && (CONFIG_MMS_SINGLE_THREADED == 0)
    unlockClientConnections(self);
#endif

}

static void
handleClientConnections(IsoServer self)
{
#if (CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS == -1)

#if (CONFIG_MMS_THREADLESS_STACK != 1) && (CONFIG_MMS_SINGLE_THREADED == 0)
    lockClientConnections(self);
#endif

    LinkedList openConnection = LinkedList_getNext(self->openClientConnections);
    LinkedList lastConnection = self->openClientConnections;

    while (openConnection != NULL) {
        IsoConnection isoConnection = (IsoConnection) openConnection->data;

        if (IsoConnection_isRunning(isoConnection))
            IsoConnection_handleTcpConnection(isoConnection);
        else {
            IsoConnection_destroy(isoConnection);

            lastConnection->next = openConnection->next;

            GLOBAL_FREEMEM(openConnection);
        }

        openConnection = LinkedList_getNext(openConnection);
    }

#if (CONFIG_MMS_THREADLESS_STACK != 1) && (CONFIG_MMS_SINGLE_THREADED == 0)
    unlockClientConnections(self);
#endif

#else

#if (CONFIG_MMS_THREADLESS_STACK != 1) && (CONFIG_MMS_SINGLE_THREADED == 0)
    lockClientConnections(self);
#endif

    int i;

    for (i = 0; i < CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS; i++) {
        if (self->openClientConnections[i] != NULL) {
            if (IsoConnection_isRunning(self->openClientConnections[i])) {

                IsoConnection_handleTcpConnection(self->openClientConnections[i]);			// ���� ��� ���������� ��� �������, �� ������ � ��������. ���� ���� �������� �� ������ ����� ����������� ����� ������.
            }
            else {
            	USART_TRACE_RED("handleClientConnections:IsoConnection_destroy: %u\n",i);
                IsoConnection_destroy(self->openClientConnections[i]);						// ����� ���������
                self->openClientConnections[i] = NULL;
            }

        }
    }

#if (CONFIG_MMS_THREADLESS_STACK != 1) && (CONFIG_MMS_SINGLE_THREADED == 0)
    unlockClientConnections(self);
#endif

#endif /* (CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS == -1) */
}
/*****************************************************************************************************
 * setupIsoServer
 * ��������� � ������ �������
 *****************************************************************************************************/
static bool		setupIsoServer(IsoServer self)
{
    bool success = true;

    self->serverSocket = (Socket) TcpServerSocket_create(self->localIpAddress, self->tcpPort);			// ������� TCP ����� ��������� IP � ������� ����

    if (DEBUG_ISO_SERVER){
    	USART_TRACE_GREEN("ISO_SERVER: localIpAddress: %s tcpPort: %u\n", self->localIpAddress,(int)self->tcpPort);
    }

    if (self->serverSocket == NULL) {
        self->state = ISO_SVR_STATE_ERROR;
        success = false;

        goto exit_function;
    }

    ServerSocket_setBacklog((ServerSocket) self->serverSocket, BACKLOG);			// ��������� ������� ���������
    ServerSocket_listen((ServerSocket) self->serverSocket);							// �������� ������� �������� �����������

    self->state = ISO_SVR_STATE_RUNNING;

#if (CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS != -1)
    if (DEBUG_ISO_SERVER){
    	USART_TRACE_BLUE("ISO_SERVER: server is limited to %i client connections.\n", (int) CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS);
    }
#endif

exit_function:
    return success;
}


#if (CONFIG_MMS_THREADLESS_STACK == 0)
// used by single and multi-threaded versions
static void
handleIsoConnections(IsoServer self)
{
    Socket connectionSocket;

    if ((connectionSocket = ServerSocket_accept((ServerSocket) self->serverSocket)) != NULL) {

#if (CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS != -1)
        if (private_IsoServer_getConnectionCounter(self) >= CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS) {
            if (DEBUG_ISO_SERVER)
                printf("ISO_SERVER: maximum number of connections reached -> reject connection attempt.\n");

            Socket_destroy(connectionSocket);

#if (CONFIG_MMS_SINGLE_THREADED == 1)
            handleClientConnections(self);
#endif

            return;
        }
#endif

        IsoConnection isoConnection = IsoConnection_create(connectionSocket, self);

        addClientConnection(self, isoConnection);

        self->connectionHandler(ISO_CONNECTION_OPENED, self->connectionHandlerParameter,
                isoConnection);

    }

#if (CONFIG_MMS_SINGLE_THREADED == 1)
    handleClientConnections(self);
#endif
}
#endif /* (CONFIG_MMS_THREADLESS_STACK == 0) */

// used by non-threaded version
static void
handleIsoConnectionsThreadless(IsoServer self)
{
    Socket connectionSocket;

    if ((connectionSocket = ServerSocket_accept((ServerSocket) self->serverSocket)) != NULL) {				// ���� �� ����������� � �������? ���� �� �� ������ ����� ��� �������� �����������

#if (CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS != -1)
        if (private_IsoServer_getConnectionCounter(self) >= CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS) {		// ���� ����� �������� ���������. �� ������� ���������� �����.
            if (DEBUG_ISO_SERVER){
            	USART_TRACE_RED("ISO_SERVER: �������� ��������� ��������, ��������� ���.\n");
            }

            Socket_destroy(connectionSocket);
            handleClientConnections(self);
            return;
        }
#endif

        USART_TRACE("�������� ����������. ������� ������ ��� ����.\n");
        IsoConnection isoConnection = IsoConnection_create(connectionSocket, self);							// ������� Iso ���������� � �������.
        addClientConnection(self, isoConnection);															// ����������� ������� ����������� self->connectionCounter++;

        self->connectionHandler(ISO_CONNECTION_OPENED, self->connectionHandlerParameter, isoConnection);	// �������� isoConnectionIndicationHandler(); ��� Iso ����������
        																									// isoConnectionIndicationHandler(IsoConnectionIndication indication, void* parameter, IsoConnection connection);
    }
//	USART_TRACE_RED("handleClientConnections....\n");
    handleClientConnections(self);				// ������ ���� �������. ��� �� ��� ����� � ����, ���� ���� �� ������ �� � ������ �� �����.
}

#if (CONFIG_MMS_THREADLESS_STACK != 1)
// only required for multi-threaded server!
static void
isoServerThread(void* isoServerParam)
{
    IsoServer self = (IsoServer) isoServerParam;

    if (!setupIsoServer(self)) {
        if (DEBUG_ISO_SERVER)
            printf("ISO_SERVER: starting server failed!\n");

        goto cleanUp;
    }

    if (DEBUG_ISO_SERVER)
        printf("ISO_SERVER: isoServerThread %p started\n", &isoServerParam);

    while (self->state == ISO_SVR_STATE_RUNNING)
    {
        handleIsoConnections(self);

        Thread_sleep(1);
    }

    self->state = ISO_SVR_STATE_STOPPED;

    cleanUp:
    self->serverSocket = NULL;

    if (DEBUG_ISO_SERVER)
           printf("ISO_SERVER: isoServerThread %p stopped\n", &isoServerParam);

}
#endif

IsoServer
IsoServer_create()
{
    IsoServer self = (IsoServer) GLOBAL_CALLOC(1, sizeof(struct sIsoServer));

    self->state = ISO_SVR_STATE_IDLE;
    self->tcpPort = TCP_PORT;

#if (CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS == -1)
    self->openClientConnections = LinkedList_create();
#else
    self->openClientConnections = (IsoConnection*)
            GLOBAL_CALLOC(CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS, sizeof(IsoConnection));
#endif

#if (CONFIG_MMS_THREADLESS_STACK != 1) && (CONFIG_MMS_SINGLE_THREADED == 0)
    self->connectionCounterMutex = Semaphore_create(1);
    self->openClientConnectionsMutex = Semaphore_create(1);
#endif /* (CONFIG_MMS_THREADLESS_STACK != 1) */

    self->connectionCounter = 0;

    return self;
}

void
IsoServer_setTcpPort(IsoServer self, int port)
{
    self->tcpPort = port;
}

void
IsoServer_setEthernetParam(IsoServer self, char* ipAddress, char* mask, char* gateway)
{

	static	uint8_t	IPBuffer[16];
	static	uint8_t	MaskPBuffer[16];
	static	uint8_t	GWBuffer[16];


	sprintf((char *)IPBuffer,"%u.%u.%u.%u",ipAddress[0], ipAddress[1], ipAddress[2], ipAddress[3]);
	sprintf((char *)MaskPBuffer,"%u.%u.%u.%u",mask[0], mask[1], mask[2], mask[3]);
	sprintf((char *)GWBuffer,"%u.%u.%u.%u",gateway[0], gateway[1], gateway[2], gateway[3]);

	self->localIpAddress = (char *)IPBuffer;
	self->netMask = (char *)MaskPBuffer;
	self->gateway = (char *)GWBuffer;
}

void
IsoServer_setLocalIpAddress(IsoServer self, char* ipAddress)
{
	self->localIpAddress = ipAddress;
}
char*
IsoServer_getLocalIpAddress(IsoServer self)
{
	return self->localIpAddress;
}
void
IsoServer_setGatewayAddress(IsoServer self, char* gateway)
{
	self->gateway = gateway;
}
char*
IsoServer_getGatewayAddress(IsoServer self)
{
	return self->gateway;
}
void
IsoServer_setMaskAddress(IsoServer self, char* mask)
{
	self->netMask = mask;
}
char*
IsoServer_getMaskAddress(IsoServer self)
{
	return self->netMask;
}


IsoServerState
IsoServer_getState(IsoServer self)
{
    return self->state;
}

void
IsoServer_setAuthenticator(IsoServer self, AcseAuthenticator authenticator, void* authenticatorParameter)
{
    self->authenticator = authenticator;
    self->authenticatorParameter = authenticatorParameter;
}

AcseAuthenticator
IsoServer_getAuthenticator(IsoServer self)
{
    return self->authenticator;
}

void*
IsoServer_getAuthenticatorParameter(IsoServer self)
{
    return self->authenticatorParameter;
}

#if (CONFIG_MMS_THREADLESS_STACK != 1)
void
IsoServer_startListening(IsoServer self)
{
    if (self->state == ISO_SVR_STATE_RUNNING) {
        if (DEBUG_ISO_SERVER)
                printf("ISO_SERVER: server already in RUNNING state!\n");

        goto exit_function;
    }

    self->state = ISO_SVR_STATE_IDLE;

    self->serverThread = Thread_create((ThreadExecutionFunction) isoServerThread, self, false);				// ������� � ���������

    Thread_start(self->serverThread);

    /* wait until server is up */
    while (self->state == ISO_SVR_STATE_IDLE)
        Thread_sleep(1);

    if (DEBUG_ISO_SERVER)
        printf("ISO_SERVER: new iso server thread started\n");

exit_function:
    return;
}
#endif /* (CONFIG_MMS_THREADLESS_STACK != 1) */

/*****************************************************************************************************
 * IsoServer_startListeningThreadless
 * ��������� � ����� ������������� ������.
 *****************************************************************************************************/
void
IsoServer_startListeningThreadless(IsoServer self)
{
    if (!setupIsoServer(self)) {
        if (DEBUG_ISO_SERVER){
        	USART_TRACE_RED("ISO_SERVER: starting server failed!\n");
        }
        self->serverSocket = NULL;
    }
    else {
        self->state = ISO_SVR_STATE_RUNNING;

        if (DEBUG_ISO_SERVER){
        	USART_TRACE_GREEN("ISO_SERVER: new iso server (threadless) started\n");
        }
    }
}

/*****************************************************************************************************
 * IsoServer_waitReady
 * ��������� ��������� �������
 *****************************************************************************************************/
int
IsoServer_waitReady(IsoServer self, unsigned int timeoutMs)
{
   int result;

   if (self->state == ISO_SVR_STATE_RUNNING) {
       HandleSet handles;

       handles = Handleset_new();
       if (handles != NULL) {

#if (CONFIG_MMS_THREADLESS_STACK != 1) && (CONFIG_MMS_SINGLE_THREADED == 0)
           lockClientConnections(self);
#endif

#if (CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS == -1)

           LinkedList openConnection = LinkedList_getNext(self->openClientConnections);
           LinkedList lastConnection = self->openClientConnections;

           while (openConnection != NULL) {
               IsoConnection isoConnection = (IsoConnection) openConnection->data;

               if (IsoConnection_isRunning(isoConnection)) {
                   IsoConnection_addHandleSet(isoConnection, handles);
                   openConnection = LinkedList_getNext(openConnection);
               } else {
                   IsoConnection_destroy(isoConnection);
                   lastConnection->next = openConnection->next;
                   GLOBAL_FREEMEM(openConnection);
                   openConnection = lastConnection->next;
               }

               lastConnection = lastConnection->next;
           }

#else
           int i;

           for (i = 0; i < CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS; i++) {
               if (self->openClientConnections[i] != NULL) {
                   if (IsoConnection_isRunning(self->openClientConnections[i])) {
                       IsoConnection_addHandleSet(self->openClientConnections[i], handles);
                   }
                   else {
#if ((CONFIG_MMS_SINGLE_THREADED == 1) || (CONFIG_MMS_THREADLESS_STACK == 1))
                	   USART_TRACE_RED("waitReady:IsoConnection_destroy: %u\n",i);
                       IsoConnection_destroy(self->openClientConnections[i]);
#endif
                       self->openClientConnections[i] = NULL;
                   }
               }
           }

#if (CONFIG_MMS_THREADLESS_STACK != 1) && (CONFIG_MMS_SINGLE_THREADED == 0)
           unlockClientConnections(self);
#endif

#endif /* (CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS == -1) */
           Handleset_addSocket(handles, self->serverSocket);
           result = Handleset_waitReady(handles, timeoutMs);			// �������� ��������� �������
           Handleset_destroy(handles);
       } else {
           result = -1;
       }
   } else {
       result = -1;
   }

   return result;
}


void
IsoServer_processIncomingMessages(IsoServer self)
{
    if (self->state == ISO_SVR_STATE_RUNNING)
        handleIsoConnectionsThreadless(self);
}

static void
stopListening(IsoServer self)
{
    self->state = ISO_SVR_STATE_STOPPED;
    if (self->serverSocket != NULL) {
        ServerSocket_destroy((ServerSocket) self->serverSocket);
        self->serverSocket = NULL;
    }
}

void
IsoServer_stopListeningThreadless(IsoServer self)
{
    stopListening(self);

    closeAllOpenClientConnections(self);

    if (DEBUG_ISO_SERVER)
        printf("ISO_SERVER: IsoServer_stopListeningThreadless finished!\n");
}

#if (CONFIG_MMS_THREADLESS_STACK != 1)
void
IsoServer_stopListening(IsoServer self)
{
    stopListening(self);

    if (self->serverThread != NULL)
        Thread_destroy(self->serverThread);

    closeAllOpenClientConnections(self);

    /* Wait for connection threads to finish */
    while (private_IsoServer_getConnectionCounter(self) > 0)
        Thread_sleep(10);

    if (DEBUG_ISO_SERVER)
        printf("ISO_SERVER: IsoServer_stopListening finished!\n");
}
#endif

void
IsoServer_closeConnection(IsoServer self, IsoConnection isoConnection)
{
    if (self->state != ISO_SVR_STATE_IDLE) {
        self->connectionHandler(ISO_CONNECTION_CLOSED, self->connectionHandlerParameter,
                isoConnection);
    }

    removeClientConnection(self, isoConnection);
}

void
IsoServer_setConnectionHandler(IsoServer self, ConnectionIndicationHandler handler,
        void* parameter)
{
    self->connectionHandler = handler;
    self->connectionHandlerParameter = parameter;
}

void
IsoServer_destroy(IsoServer self)
{

#if (CONFIG_MMS_THREADLESS_STACK != 1)
    if (self->state == ISO_SVR_STATE_RUNNING)
        IsoServer_stopListening(self);
#endif

#if (CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS == -1)

#if (CONFIG_MMS_SINGLE_THREADED == 1)
    if (self->openClientConnections != NULL)
        LinkedList_destroy(self->openClientConnections);
#else
    if (self->openClientConnections != NULL)
        LinkedList_destroyStatic(self->openClientConnections);
#endif /* (CONFIG_MMS_SINGLE_THREADED == 1) */

#if (CONFIG_MMS_THREADLESS_STACK != 1) && (CONFIG_MMS_SINGLE_THREADED == 0)
    lockClientConnections(self);
#endif

#else
    GLOBAL_FREEMEM(self->openClientConnections);
#endif /* (CONFIG_MAXIMUM_TCP_CLIENT_CONNECTIONS == -1) */

#if (CONFIG_MMS_THREADLESS_STACK != 1) && (CONFIG_MMS_SINGLE_THREADED == 0)
    Semaphore_destroy(self->connectionCounterMutex);
    Semaphore_destroy(self->openClientConnectionsMutex);
#endif

    GLOBAL_FREEMEM(self);
}

void
private_IsoServer_decreaseConnectionCounter(IsoServer self)
{
#if (CONFIG_MMS_THREADLESS_STACK != 1) && (CONFIG_MMS_SINGLE_THREADED == 0)
    Semaphore_wait(self->connectionCounterMutex);
#endif

    self->connectionCounter--;

    if (DEBUG_ISO_SERVER)
        printf("IsoServer: decrease connection counter to %i!\n", self->connectionCounter);

#if (CONFIG_MMS_THREADLESS_STACK != 1) && (CONFIG_MMS_SINGLE_THREADED == 0)
    Semaphore_post(self->connectionCounterMutex);
#endif
}

int
private_IsoServer_getConnectionCounter(IsoServer self)
{
    int connectionCounter;

#if (CONFIG_MMS_THREADLESS_STACK != 1) && (CONFIG_MMS_SINGLE_THREADED == 0)
    Semaphore_wait(self->connectionCounterMutex);
#endif

    connectionCounter = self->connectionCounter;

#if (CONFIG_MMS_THREADLESS_STACK != 1) && (CONFIG_MMS_SINGLE_THREADED == 0)
    Semaphore_post(self->connectionCounterMutex);
#endif

    return connectionCounter;
}

#if (CONFIG_MMS_THREADLESS_STACK != 1)
void
IsoServer_setUserLock(IsoServer self, Semaphore userLock)
{
    self->userLock = userLock;
}

void
IsoServer_userLock(IsoServer self)
{
    if (self->userLock != NULL)
        Semaphore_wait(self->userLock);
}

void
IsoServer_userUnlock(IsoServer self)
{
    if (self->userLock != NULL)
        Semaphore_post(self->userLock);
}
#endif
