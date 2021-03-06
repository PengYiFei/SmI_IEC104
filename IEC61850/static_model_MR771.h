/*
 * static_model.h
 *
 * automatically generated from simpleIO_direct_control.scd
 *
 * ������ ������ ��� ������� �� ��������� ������� � ����� ��� 61850-7-3.
 *
 * ����� ���������� ��� ���������� ����� (����������� �� ������ Common Logical Node Class)
 * Mod			INC			�����											������������ ��������
 * Beh			INS			���������										������������ ��������
 * Health		INS			���������										������������ ��������
 * NamPlt		LPL			���������� ������								������������ ��������
 * OpCntRs		INC			������������ ������� ������������				������������ ��������
 *
 * ���������� � ���������
 * Str			ACD			����											������������ ��������
 * Op			ACT			������������									������������ ��������
 * TmASt		CSD			�������� �����-������� ��������������			�������������� ��������
 *
 * �������
 * TmACrv		CURVE		��� �����-������� ��������������				�������������� ��������
 * StrVal		ASG			������� �� ����
 * TmMult					�������������� ������� �� �������
 * MinOpTmms	ING			����������� ����� ������������
 * MaxOpTmms	ING			������������ ����� ������������
 * OpDlTmms		ING			������� �� �������
 * TypRsCrv		ING			��� �������������� ��������
 * RsDlTmms		ING			������� ������� ��������
 * DirMod		ING			������������ �����
 *
 *
 *
 *
 *
 *
 */

#ifndef STATIC_MODEL_MR771_H_
#define STATIC_MODEL_MR771_H_

#include <stdlib.h>
#include "model.h"
#include "iec61850_server.h"
#include "iec61850_common.h"

extern IedServer iedServer;

extern IedModel 	iedModel;
extern LogicalDevice iedModel_Generic_LD0;
extern LogicalDevice iedModel_Generic_PROT;
extern LogicalDevice iedModel_Generic_CTRL;
extern LogicalDevice iedModel_Generic_MES;
extern LogicalDevice iedModel_Generic_GGIO;

// -----------------------------------------------------------------------------
// LN LLN0 - ���������� ���� ����. ��. 61850-7-4 �.5.3.4
// -----------------------------------------------------------------------------
extern LogicalNode   iedModel_GenericIO_LLN0;

// Mod ��. 61850-7-3 �.7.5.4
extern DataObject    iedModel_GenericIO_LLN0_Mod;					// �����
extern DataAttribute iedModel_GenericIO_LLN0_Mod_q;					// 		�������� ��������
extern DataAttribute iedModel_GenericIO_LLN0_Mod_t;					// 		����� �������
extern DataAttribute iedModel_GenericIO_LLN0_Mod_stVal;				// 		�������� ��������� ������ INT32
extern DataAttribute iedModel_GenericIO_LLN0_Mod_ctlModel;			//		������ ����������

// Beh ��. 61850-7-3 �.7.3.4
extern DataObject    iedModel_GenericIO_LLN0_Beh;					// ����� ������
extern DataAttribute iedModel_GenericIO_LLN0_Beh_stVal;				// 		�������� ��������� ������ INT32
extern DataAttribute iedModel_GenericIO_LLN0_Beh_q;					// 		�������� ��������
extern DataAttribute iedModel_GenericIO_LLN0_Beh_t;					// 		����� �������

// Health ��. 61850-7-3 �.7.3.4
extern DataObject    iedModel_GenericIO_LLN0_Health;				// ��������� �����������������
extern DataAttribute iedModel_GenericIO_LLN0_Health_stVal;			// 		�������� ��������� ������ INT32
extern DataAttribute iedModel_GenericIO_LLN0_Health_q;				// 		�������� ��������
extern DataAttribute iedModel_GenericIO_LLN0_Health_t;				// 		����� �������

// NamPlt ��. 61850-7-3 �.7.9.3
extern DataObject    iedModel_GenericIO_LLN0_NamPlt;				// ���������� ��������
extern DataAttribute iedModel_GenericIO_LLN0_NamPlt_vendor;			// 		��� ����������
extern DataAttribute iedModel_GenericIO_LLN0_NamPlt_swRev;			// 		������� ����������� �����
extern DataAttribute iedModel_GenericIO_LLN0_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN.
extern DataAttribute iedModel_GenericIO_LLN0_NamPlt_configRev;		//		���������� ���������� ������������ ���������� ����������� ���������� LD. (������ ������� ��� ����� ��������� ��������� ������ LD)
extern DataAttribute iedModel_GenericIO_LLN0_NamPlt_ldNs;			//		������������ ���� ����������� ����������. ��. 61850-7-1

extern DataObject    iedModel_GenericIO_LLN0_SGCB;							// SGCB - ���������� �������� �������
extern DataAttribute iedModel_GenericIO_LLN0_SGCB_ActSG;
extern DataAttribute iedModel_GenericIO_LLN0_SGCB_q;
extern DataAttribute iedModel_GenericIO_LLN0_SGCB_t;
// -----------------------------------------------------------------------------
// LN LPHD1 - ���������� � ���������� ����������. ��. 61850-7-4 �.5.3.2
// -----------------------------------------------------------------------------
extern LogicalNode   iedModel_GenericIO_LPHD1;

// PhyNam ��. 61850-7-3 �.7.9.2
extern DataObject    iedModel_GenericIO_LPHD1_PhyNam;				// ���������� �������� ����������� ����������
extern DataAttribute iedModel_GenericIO_LPHD1_PhyNam_vendor;		// 		��� ����������

// PhyHealth ��. 61850-7-3 �.7.3.4
extern DataObject    iedModel_GenericIO_LPHD1_PhyHealth;			// ��������� ����������������� ����������� ����������
extern DataAttribute iedModel_GenericIO_LPHD1_PhyHealth_stVal;		// 		�������� ��������� ������ INT32
extern DataAttribute iedModel_GenericIO_LPHD1_PhyHealth_q;			// 		�������� ��������
extern DataAttribute iedModel_GenericIO_LPHD1_PhyHealth_t;			// 		����� �������

// Proxy ��. 61850-7-3 �.7.3.2
extern DataObject    iedModel_GenericIO_LPHD1_Proxy;				// ������ �� ������ ���� �����������
extern DataAttribute iedModel_GenericIO_LPHD1_Proxy_stVal;			// 		�������� ��������� ������ Boolean (��/���)
extern DataAttribute iedModel_GenericIO_LPHD1_Proxy_q;				// 		�������� ��������
extern DataAttribute iedModel_GenericIO_LPHD1_Proxy_t;				// 		����� �������

// -----------------------------------------------------------------------------
// LN GGIO1 - ����/����� ��� ����� ��������� ��. 61850-7-4 �.5.7.2
// -----------------------------------------------------------------------------
extern LogicalNode   iedModel_GenericIO_GGIO1;

// Mod																// ������������ �������� -------------------------------------
extern DataObject    iedModel_GenericIO_GGIO1_Mod;					// �����
extern DataAttribute iedModel_GenericIO_GGIO1_Mod_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Mod_t;
extern DataAttribute iedModel_GenericIO_GGIO1_Mod_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Mod_ctlModel;

// Beh
extern DataObject    iedModel_GenericIO_GGIO1_Beh;					// ����� ������
extern DataAttribute iedModel_GenericIO_GGIO1_Beh_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Beh_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Beh_t;

// Health
extern DataObject    iedModel_GenericIO_GGIO1_Health;				// ��������� �����������������
extern DataAttribute iedModel_GenericIO_GGIO1_Health_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Health_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Health_t;

// NamPlt
extern DataObject    iedModel_GenericIO_GGIO1_NamPlt;				// ���������� ��������
extern DataAttribute iedModel_GenericIO_GGIO1_NamPlt_vendor;		// 		��� ����������
extern DataAttribute iedModel_GenericIO_GGIO1_NamPlt_swRev;			// 		������� ����������� �����
extern DataAttribute iedModel_GenericIO_GGIO1_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN GGIO1.
																	// -----------------------------------------------------------
// ---------------------------------

// AnIn1 ��. 61850-7-3 �.7.4.2
extern DataObject    iedModel_GenericIO_GGIO1_AnIn1;				// ���������� ����				(�� ������������ ������)
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn1_mag;			// 		���������� �������� (�����������)
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn1_mag_f;			// 		->		���������� �������� Float32
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn1_q;				// 		�������� ��������
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn1_t;				// 		����� �������

// SPCSO1 ��. 61850-7-3 �.7.5.2
extern DataObject    iedModel_GenericIO_GGIO1_SPCSO1;						// �������������� ����� ������� ���������������� ����������				(�� ������������ ������)
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_stVal;					// 		�������� ��������� ������
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_q;						// 		�������� ��������

extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper;					// 		����� ���������� ������� (�����������)
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_ctlVal;			// 		->		�������� off/on -  Boolean
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin;			// 				��������� ���������� ��������� (�����������)
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin_orCat;		//		 		->		ENUMERATED
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin_orIdent;	//						OCTET_STRING_64
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_ctlNum;			//				����� �����������.
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_T;				// 				����� �������.
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_Test;				//				BOOLEAN
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_Check;			//				��. ��� ���

extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_ctlModel;				//		������ ����������
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_t;						// 		����� �������.

extern DataObject    iedModel_GenericIO_GGIO1_SPCSO2;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_q;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper_ctlVal;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper_origin;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper_origin_orCat;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper_origin_orIdent;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper_ctlNum;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper_T;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper_Test;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper_Check;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_ctlModel;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_t;

extern DataObject    iedModel_GenericIO_GGIO1_SPCSO3;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_q;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper_ctlVal;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper_origin;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper_origin_orCat;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper_origin_orIdent;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper_ctlNum;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper_T;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper_Test;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper_Check;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_ctlModel;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_t;

extern DataObject    iedModel_GenericIO_GGIO1_SPCSO4;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_q;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper_ctlVal;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper_origin;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper_origin_orCat;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper_origin_orIdent;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper_ctlNum;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper_T;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper_Test;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper_Check;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_ctlModel;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_t;

extern DataObject    iedModel_GenericIO_GGIO1_SPCSO5;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO5_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO5_q;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO5_t;

extern DataObject    iedModel_GenericIO_GGIO1_SPCSO6;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO6_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO6_q;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO6_t;

extern DataObject    iedModel_GenericIO_GGIO1_SPCSO7;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO7_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO7_q;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO7_t;

extern DataObject    iedModel_GenericIO_GGIO1_SPCSO8;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO8_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO8_q;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO8_t;


// ------------- ���������� ����� ------------------------------
// Ind1 ��. 61850-7-3 �.7.3.2
extern DataObject    iedModel_GenericIO_GGIO1_Ind1;								// ����� ���������(���� �������� ��������)				(�� ������������ ������)
extern DataAttribute iedModel_GenericIO_GGIO1_Ind1_stVal;						// 			�������� ��������� ������ BOOLEAN
extern DataAttribute iedModel_GenericIO_GGIO1_Ind1_q;							// 			�������� ��������
extern DataAttribute iedModel_GenericIO_GGIO1_Ind1_t;							// 			����� �������.

extern DataObject    iedModel_GenericIO_GGIO1_Ind2;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind2_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind2_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind2_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind3;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind3_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind3_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind3_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind4;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind4_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind4_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind4_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind5;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind5_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind5_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind5_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind6;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind6_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind6_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind6_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind7;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind7_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind7_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind7_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind8;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind8_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind8_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind8_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind9;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind9_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind9_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind9_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind10;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind10_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind10_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind10_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind11;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind11_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind11_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind11_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind12;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind12_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind12_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind12_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind13;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind13_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind13_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind13_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind14;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind14_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind14_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind14_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind15;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind15_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind15_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind15_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind16;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind16_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind16_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind16_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind17;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind17_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind17_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind17_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind18;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind18_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind18_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind18_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind19;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind19_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind19_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind19_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind20;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind20_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind20_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind20_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind21;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind21_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind21_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind21_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind22;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind22_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind22_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind22_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind23;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind23_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind23_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind23_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind24;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind24_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind24_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind24_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind25;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind25_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind25_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind25_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind26;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind26_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind26_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind26_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind27;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind27_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind27_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind27_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind28;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind28_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind28_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind28_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind29;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind29_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind29_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind29_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind30;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind30_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind30_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind30_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind31;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind31_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind31_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind31_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind32;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind32_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind32_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind32_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind33;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind33_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind33_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind33_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind34;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind34_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind34_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind34_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind35;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind35_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind35_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind35_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind36;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind36_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind36_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind36_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind37;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind37_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind37_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind37_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind38;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind38_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind38_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind38_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind39;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind39_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind39_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind39_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind40;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind40_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind40_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind40_t;

extern LogicalNode iedModel_GenericIO_GGIO2;

extern DataObject iedModel_GenericIO_GGIO2_Mod;
extern DataAttribute iedModel_GenericIO_GGIO2_Mod_q;
extern DataAttribute iedModel_GenericIO_GGIO2_Mod_t;
extern DataAttribute iedModel_GenericIO_GGIO2_Mod_stVal;
extern DataAttribute iedModel_GenericIO_GGIO2_Mod_ctlModel;
extern DataAttribute iedModel_GenericIO_GGIO2_Mod_Oper;
extern DataAttribute iedModel_GenericIO_GGIO2_Mod_Oper_ctlVal;
extern DataAttribute iedModel_GenericIO_GGIO2_Mod_Oper_origin;
extern DataAttribute iedModel_GenericIO_GGIO2_Mod_Oper_origin_orCat;
extern DataAttribute iedModel_GenericIO_GGIO2_Mod_Oper_origin_orIdent;
extern DataAttribute iedModel_GenericIO_GGIO2_Mod_Oper_ctlNum;
extern DataAttribute iedModel_GenericIO_GGIO2_Mod_Oper_T;
extern DataAttribute iedModel_GenericIO_GGIO2_Mod_Oper_Test;
extern DataAttribute iedModel_GenericIO_GGIO2_Mod_Oper_Check;
//Beh
extern DataObject iedModel_GenericIO_GGIO2_Beh;
extern DataAttribute iedModel_GenericIO_GGIO2_Beh_stVal;
extern DataAttribute iedModel_GenericIO_GGIO2_Beh_q;
extern DataAttribute iedModel_GenericIO_GGIO2_Beh_t;
//Health
extern DataObject iedModel_GenericIO_GGIO2_Health;
extern DataAttribute iedModel_GenericIO_GGIO2_Health_stVal;
extern DataAttribute iedModel_GenericIO_GGIO2_Health_q;
extern DataAttribute iedModel_GenericIO_GGIO2_Health_t;
//NamPlt
extern DataObject iedModel_GenericIO_GGIO2_NamPlt;
extern DataAttribute iedModel_GenericIO_GGIO2_NamPlt_vendor;
extern DataAttribute iedModel_GenericIO_GGIO2_NamPlt_swRev;
extern DataAttribute iedModel_GenericIO_GGIO2_NamPlt_d;

//SPCSO1
extern DataObject iedModel_GenericIO_GGIO2_SPCSO1;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO1_q;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO1_t;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO1_stVal;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO1_ctlModel;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO1_Oper;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO1_Oper_ctlVal;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO1_Oper_origin;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO1_Oper_origin_orCat;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO1_Oper_origin_orIdent;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO1_Oper_ctlNum;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO1_Oper_T;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO1_Oper_Test;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO1_Oper_Check;
//SPCSO2
extern DataObject iedModel_GenericIO_GGIO2_SPCSO2;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO2_q;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO2_t;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO2_stVal;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO2_ctlModel;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO2_Oper;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO2_Oper_ctlVal;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO2_Oper_origin;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO2_Oper_origin_orCat;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO2_Oper_origin_orIdent;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO2_Oper_ctlNum;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO2_Oper_T;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO2_Oper_Test;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO2_Oper_Check;
//SPCSO3
extern DataObject iedModel_GenericIO_GGIO2_SPCSO3;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO3_q;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO3_t;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO3_stVal;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO3_ctlModel;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO3_Oper;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO3_Oper_ctlVal;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO3_Oper_origin;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO3_Oper_origin_orCat;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO3_Oper_origin_orIdent;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO3_Oper_ctlNum;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO3_Oper_T;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO3_Oper_Test;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO3_Oper_Check;
//SPCSO4
extern DataObject iedModel_GenericIO_GGIO2_SPCSO4;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO4_q;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO4_t;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO4_stVal;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO4_ctlModel;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO4_Oper;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO4_Oper_ctlVal;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO4_Oper_origin;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO4_Oper_origin_orCat;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO4_Oper_origin_orIdent;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO4_Oper_ctlNum;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO4_Oper_T;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO4_Oper_Test;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO4_Oper_Check;
//SPCSO5
extern DataObject iedModel_GenericIO_GGIO2_SPCSO5;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO5_q;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO5_t;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO5_stVal;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO5_ctlModel;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO5_Oper;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO5_Oper_ctlVal;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO5_Oper_origin;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO5_Oper_origin_orCat;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO5_Oper_origin_orIdent;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO5_Oper_ctlNum;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO5_Oper_T;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO5_Oper_Test;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO5_Oper_Check;
//SPCSO6
extern DataObject iedModel_GenericIO_GGIO2_SPCSO6;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO6_q;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO6_t;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO6_stVal;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO6_ctlModel;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO6_Oper;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO6_Oper_ctlVal;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO6_Oper_origin;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO6_Oper_origin_orCat;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO6_Oper_origin_orIdent;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO6_Oper_ctlNum;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO6_Oper_T;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO6_Oper_Test;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO6_Oper_Check;
//SPCSO7
extern DataObject iedModel_GenericIO_GGIO2_SPCSO7;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO7_q;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO7_t;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO7_stVal;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO7_ctlModel;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO7_Oper;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO7_Oper_ctlVal;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO7_Oper_origin;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO7_Oper_origin_orCat;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO7_Oper_origin_orIdent;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO7_Oper_ctlNum;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO7_Oper_T;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO7_Oper_Test;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO7_Oper_Check;
//SPCSO8
extern DataObject iedModel_GenericIO_GGIO2_SPCSO8;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO8_q;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO8_t;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO8_stVal;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO8_ctlModel;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO8_Oper;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO8_Oper_ctlVal;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO8_Oper_origin;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO8_Oper_origin_orCat;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO8_Oper_origin_orIdent;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO8_Oper_ctlNum;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO8_Oper_T;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO8_Oper_Test;
extern DataAttribute iedModel_GenericIO_GGIO2_SPCSO8_Oper_Check;

// *****************************************************************************************************
// -----------------------------------------------------------------------------
// LN MMXU1
// -----------------------------------------------------------------------------
extern LogicalNode   iedModel_GenericIO_MMXU1;

// Mod																// ������������ �������� -------------------------------------
extern DataObject    iedModel_GenericIO_MMXU1_Mod;					// �����
extern DataAttribute iedModel_GenericIO_MMXU1_Mod_q;
extern DataAttribute iedModel_GenericIO_MMXU1_Mod_t;
extern DataAttribute iedModel_GenericIO_MMXU1_Mod_stVal;
extern DataAttribute iedModel_GenericIO_MMXU1_Mod_ctlModel;

// Beh
extern DataObject    iedModel_GenericIO_MMXU1_Beh;					// ����� ������
extern DataAttribute iedModel_GenericIO_MMXU1_Beh_stVal;
extern DataAttribute iedModel_GenericIO_MMXU1_Beh_q;
extern DataAttribute iedModel_GenericIO_MMXU1_Beh_t;

// Health
extern DataObject    iedModel_GenericIO_MMXU1_Health;				// ��������� �����������������
extern DataAttribute iedModel_GenericIO_MMXU1_Health_stVal;
extern DataAttribute iedModel_GenericIO_MMXU1_Health_q;
extern DataAttribute iedModel_GenericIO_MMXU1_Health_t;

// NamPlt
extern DataObject    iedModel_GenericIO_MMXU1_NamPlt;				// ���������� ��������
extern DataAttribute iedModel_GenericIO_MMXU1_NamPlt_vendor;		// 		��� ����������
extern DataAttribute iedModel_GenericIO_MMXU1_NamPlt_swRev;			// 		������� ����������� �����
extern DataAttribute iedModel_GenericIO_MMXU1_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN MMXU1.

extern DataObject iedModel_GenericIO_MMXU1_A;
extern DataObject iedModel_GenericIO_MMXU1_A_phsA;
extern DataAttribute iedModel_GenericIO_MMXU1_A_phsA_cVal;
extern DataAttribute iedModel_GenericIO_MMXU1_A_phsA_cVal_mag;
extern DataAttribute iedModel_GenericIO_MMXU1_A_phsA_cVal_mag_f;
//extern DataAttribute iedModel_GenericIO_MMXU1_A_phsA_cVal_mag_i;
extern DataAttribute iedModel_GenericIO_MMXU1_A_phsA_q;
extern DataAttribute iedModel_GenericIO_MMXU1_A_phsA_t;

extern DataObject iedModel_GenericIO_MMXU1_A_phsB;
extern DataAttribute iedModel_GenericIO_MMXU1_A_phsB_cVal;
extern DataAttribute iedModel_GenericIO_MMXU1_A_phsB_cVal_mag;
extern DataAttribute iedModel_GenericIO_MMXU1_A_phsB_cVal_mag_f;
//extern DataAttribute iedModel_GenericIO_MMXU1_A_phsB_cVal_mag_i;
extern DataAttribute iedModel_GenericIO_MMXU1_A_phsB_q;
extern DataAttribute iedModel_GenericIO_MMXU1_A_phsB_t;

extern DataObject iedModel_GenericIO_MMXU1_A_phsC;
extern DataAttribute iedModel_GenericIO_MMXU1_A_phsC_cVal;
extern DataAttribute iedModel_GenericIO_MMXU1_A_phsC_cVal_mag;
extern DataAttribute iedModel_GenericIO_MMXU1_A_phsC_cVal_mag_f;
//extern DataAttribute iedModel_GenericIO_MMXU1_A_phsC_cVal_mag_i;
extern DataAttribute iedModel_GenericIO_MMXU1_A_phsC_q;
extern DataAttribute iedModel_GenericIO_MMXU1_A_phsC_t;

extern DataObject iedModel_GenericIO_MMXU1_phV;
extern DataObject iedModel_GenericIO_MMXU1_phV_phsA;
extern DataAttribute iedModel_GenericIO_MMXU1_phV_phsA_cVal;
extern DataAttribute iedModel_GenericIO_MMXU1_phV_phsA_cVal_mag;
extern DataAttribute iedModel_GenericIO_MMXU1_phV_phsA_cVal_mag_f;
extern DataAttribute iedModel_GenericIO_MMXU1_phV_phsA_q;
extern DataAttribute iedModel_GenericIO_MMXU1_phV_phsA_t;
extern DataObject iedModel_GenericIO_MMXU1_phV_phsB;
extern DataAttribute iedModel_GenericIO_MMXU1_phV_phsB_cVal;
extern DataAttribute iedModel_GenericIO_MMXU1_phV_phsB_cVal_mag;
extern DataAttribute iedModel_GenericIO_MMXU1_phV_phsB_cVal_mag_f;
extern DataAttribute iedModel_GenericIO_MMXU1_phV_phsB_q;
extern DataAttribute iedModel_GenericIO_MMXU1_phV_phsB_t;
extern DataObject iedModel_GenericIO_MMXU1_phV_phsC;
extern DataAttribute iedModel_GenericIO_MMXU1_phV_phsC_cVal;
extern DataAttribute iedModel_GenericIO_MMXU1_phV_phsC_cVal_mag;
extern DataAttribute iedModel_GenericIO_MMXU1_phV_phsC_cVal_mag_f;
extern DataAttribute iedModel_GenericIO_MMXU1_phV_phsC_q;
extern DataAttribute iedModel_GenericIO_MMXU1_phV_phsC_t;
//
extern DataObject iedModel_GenericIO_MMXU1_PPV;
extern DataObject iedModel_GenericIO_MMXU1_PPV_phsA;
extern DataAttribute iedModel_GenericIO_MMXU1_PPV_phsA_cVal;
extern DataAttribute iedModel_GenericIO_MMXU1_PPV_phsA_cVal_mag;
extern DataAttribute iedModel_GenericIO_MMXU1_PPV_phsA_cVal_mag_f;
extern DataAttribute iedModel_GenericIO_MMXU1_PPV_phsA_q;
extern DataAttribute iedModel_GenericIO_MMXU1_PPV_phsA_t;
extern DataObject iedModel_GenericIO_MMXU1_PPV_phsB;
extern DataAttribute iedModel_GenericIO_MMXU1_PPV_phsB_cVal;
extern DataAttribute iedModel_GenericIO_MMXU1_PPV_phsB_cVal_mag;
extern DataAttribute iedModel_GenericIO_MMXU1_PPV_phsB_cVal_mag_f;
extern DataAttribute iedModel_GenericIO_MMXU1_PPV_phsB_q;
extern DataAttribute iedModel_GenericIO_MMXU1_PPV_phsB_t;
extern DataObject iedModel_GenericIO_MMXU1_PPV_phsC;
extern DataAttribute iedModel_GenericIO_MMXU1_PPV_phsC_cVal;
extern DataAttribute iedModel_GenericIO_MMXU1_PPV_phsC_cVal_mag;
extern DataAttribute iedModel_GenericIO_MMXU1_PPV_phsC_cVal_mag_f;
extern DataAttribute iedModel_GenericIO_MMXU1_PPV_phsC_q;
extern DataAttribute iedModel_GenericIO_MMXU1_PPV_phsC_t;

//
extern DataObject    iedModel_GenericIO_MMXU1_totW;
extern DataAttribute iedModel_GenericIO_MMXU1_totW_mag;
extern DataAttribute iedModel_GenericIO_MMXU1_totW_mag_f;
extern DataAttribute iedModel_GenericIO_MMXU1_totW_q;
extern DataAttribute iedModel_GenericIO_MMXU1_totW_t;
extern DataAttribute iedModel_GenericIO_MMXU1_totW_db;
extern DataAttribute iedModel_GenericIO_MMXU1_totW_zeroDb;

extern DataObject    iedModel_GenericIO_MMXU1_totVAr;
extern DataAttribute iedModel_GenericIO_MMXU1_totVAr_mag;
extern DataAttribute iedModel_GenericIO_MMXU1_totVAr_mag_f;
extern DataAttribute iedModel_GenericIO_MMXU1_totVAr_q;
extern DataAttribute iedModel_GenericIO_MMXU1_totVAr_t;
extern DataAttribute iedModel_GenericIO_MMXU1_totVAr_db;
extern DataAttribute iedModel_GenericIO_MMXU1_totVAr_zeroDb;

extern DataObject    iedModel_GenericIO_MMXU1_totPF;
extern DataAttribute iedModel_GenericIO_MMXU1_totPF_mag;
extern DataAttribute iedModel_GenericIO_MMXU1_totPF_mag_f;
extern DataAttribute iedModel_GenericIO_MMXU1_totPF_q;
extern DataAttribute iedModel_GenericIO_MMXU1_totPF_t;
extern DataAttribute iedModel_GenericIO_MMXU1_totPF_db;
extern DataAttribute iedModel_GenericIO_MMXU1_totPF_zeroDb;

extern DataObject    iedModel_GenericIO_MMXU1_Hz;
extern DataAttribute iedModel_GenericIO_MMXU1_Hz_mag;
extern DataAttribute iedModel_GenericIO_MMXU1_Hz_mag_f;
extern DataAttribute iedModel_GenericIO_MMXU1_Hz_q;
extern DataAttribute iedModel_GenericIO_MMXU1_Hz_t;
extern DataAttribute iedModel_GenericIO_MMXU1_Hz_db;
extern DataAttribute iedModel_GenericIO_MMXU1_Hz_zeroDb;

// -----------------------------------------------------------
// -----------------------------------------------------------------------------
// LN PTOC
// -----------------------------------------------------------------------------
extern LogicalNode   iedModel_GenericIO_PTOC1;

// Mod																// ������������ �������� -------------------------------------
extern DataObject    iedModel_GenericIO_PTOC1_Mod;					// �����
extern DataAttribute iedModel_GenericIO_PTOC1_Mod_q;
extern DataAttribute iedModel_GenericIO_PTOC1_Mod_t;
extern DataAttribute iedModel_GenericIO_PTOC1_Mod_stVal;
extern DataAttribute iedModel_GenericIO_PTOC1_Mod_ctlModel;

// Beh
extern DataObject    iedModel_GenericIO_PTOC1_Beh;					// ����� ������
extern DataAttribute iedModel_GenericIO_PTOC1_Beh_stVal;
extern DataAttribute iedModel_GenericIO_PTOC1_Beh_q;
extern DataAttribute iedModel_GenericIO_PTOC1_Beh_t;

// Health
extern DataObject    iedModel_GenericIO_PTOC1_Health;				// ��������� �����������������
extern DataAttribute iedModel_GenericIO_PTOC1_Health_stVal;
extern DataAttribute iedModel_GenericIO_PTOC1_Health_q;
extern DataAttribute iedModel_GenericIO_PTOC1_Health_t;

// NamPlt
extern DataObject    iedModel_GenericIO_PTOC1_NamPlt;				// ���������� ��������
extern DataAttribute iedModel_GenericIO_PTOC1_NamPlt_vendor;		// 		��� ����������
extern DataAttribute iedModel_GenericIO_PTOC1_NamPlt_swRev;			// 		������� ����������� �����
extern DataAttribute iedModel_GenericIO_PTOC1_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

// Str
extern DataObject    iedModel_GenericIO_PTOC1_Str;
extern DataAttribute iedModel_GenericIO_PTOC1_Str_general;
extern DataAttribute iedModel_GenericIO_PTOC1_Str_dirGeneral;
extern DataAttribute iedModel_GenericIO_PTOC1_Str_q;
extern DataAttribute iedModel_GenericIO_PTOC1_Str_t;

// Op
extern DataObject    iedModel_GenericIO_PTOC1_Op;
extern DataAttribute iedModel_GenericIO_PTOC1_Op_general;
extern DataAttribute iedModel_GenericIO_PTOC1_Op_q;
extern DataAttribute iedModel_GenericIO_PTOC1_Op_t;

// -----------------------------------------------------------------------------
// LN CSWI
// -----------------------------------------------------------------------------
extern LogicalNode   iedModel_GenericIO_CSWI1;

// Mod																// ������������ �������� -------------------------------------
extern DataObject    iedModel_GenericIO_CSWI1_Mod;					// �����
extern DataAttribute iedModel_GenericIO_CSWI1_Mod_q;
extern DataAttribute iedModel_GenericIO_CSWI1_Mod_t;
extern DataAttribute iedModel_GenericIO_CSWI1_Mod_stVal;
extern DataAttribute iedModel_GenericIO_CSWI1_Mod_ctlModel;
extern DataAttribute iedModel_GenericIO_CSWI1_Mod_Oper;
extern DataAttribute iedModel_GenericIO_CSWI1_Mod_Oper_ctlVal;
extern DataAttribute iedModel_GenericIO_CSWI1_Mod_Oper_origin;
extern DataAttribute iedModel_GenericIO_CSWI1_Mod_Oper_origin_orCat;
extern DataAttribute iedModel_GenericIO_CSWI1_Mod_Oper_origin_orIdent;
extern DataAttribute iedModel_GenericIO_CSWI1_Mod_Oper_ctlNum;
extern DataAttribute iedModel_GenericIO_CSWI1_Mod_Oper_T;
extern DataAttribute iedModel_GenericIO_CSWI1_Mod_Oper_Test;
extern DataAttribute iedModel_GenericIO_CSWI1_Mod_Oper_Check;

// Beh
extern DataObject    iedModel_GenericIO_CSWI1_Beh;					// ����� ������
extern DataAttribute iedModel_GenericIO_CSWI1_Beh_stVal;
extern DataAttribute iedModel_GenericIO_CSWI1_Beh_q;
extern DataAttribute iedModel_GenericIO_CSWI1_Beh_t;

// Health
extern DataObject    iedModel_GenericIO_CSWI1_Health;				// ��������� �����������������
extern DataAttribute iedModel_GenericIO_CSWI1_Health_stVal;
extern DataAttribute iedModel_GenericIO_CSWI1_Health_q;
extern DataAttribute iedModel_GenericIO_CSWI1_Health_t;

// NamPlt
extern DataObject    iedModel_GenericIO_CSWI1_NamPlt;				// ���������� ��������
extern DataAttribute iedModel_GenericIO_CSWI1_NamPlt_vendor;		// 		��� ����������
extern DataAttribute iedModel_GenericIO_CSWI1_NamPlt_swRev;			// 		������� ����������� �����
extern DataAttribute iedModel_GenericIO_CSWI1_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN CSWI1.

extern DataObject iedModel_GenericIO_CSWI1_Pos;
extern DataAttribute iedModel_GenericIO_CSWI1_Pos_stVal;
extern DataAttribute iedModel_GenericIO_CSWI1_Pos_q;
extern DataAttribute iedModel_GenericIO_CSWI1_Pos_t;
extern DataAttribute iedModel_GenericIO_CSWI1_Pos_ctlModel;
extern DataAttribute iedModel_GenericIO_CSWI1_Pos_Oper;
extern DataAttribute iedModel_GenericIO_CSWI1_Pos_Oper_ctlVal;
extern DataAttribute iedModel_GenericIO_CSWI1_Pos_Oper_origin;
extern DataAttribute iedModel_GenericIO_CSWI1_Pos_Oper_origin_orCat;
extern DataAttribute iedModel_GenericIO_CSWI1_Pos_Oper_origin_orIdent;
extern DataAttribute iedModel_GenericIO_CSWI1_Pos_Oper_ctlNum;
extern DataAttribute iedModel_GenericIO_CSWI1_Pos_Oper_T;
extern DataAttribute iedModel_GenericIO_CSWI1_Pos_Oper_Test;
extern DataAttribute iedModel_GenericIO_CSWI1_Pos_Oper_Check;
// -----------------------------------------------------------------------------
// LN XCBR1
// -----------------------------------------------------------------------------
extern LogicalNode iedModel_GenericIO_XCBR1;
extern DataObject iedModel_GenericIO_XCBR1_Mod;
extern DataAttribute iedModel_GenericIO_XCBR1_Mod_q;
extern DataAttribute iedModel_GenericIO_XCBR1_Mod_t;
extern DataAttribute iedModel_GenericIO_XCBR1_Mod_stVal;
extern DataAttribute iedModel_GenericIO_XCBR1_Mod_ctlModel;
extern DataAttribute iedModel_GenericIO_XCBR1_Mod_Oper;
extern DataAttribute iedModel_GenericIO_XCBR1_Mod_Oper_ctlVal;
extern DataAttribute iedModel_GenericIO_XCBR1_Mod_Oper_origin;
extern DataAttribute iedModel_GenericIO_XCBR1_Mod_Oper_origin_orCat;
extern DataAttribute iedModel_GenericIO_XCBR1_Mod_Oper_origin_orIdent;
extern DataAttribute iedModel_GenericIO_XCBR1_Mod_Oper_ctlNum;
extern DataAttribute iedModel_GenericIO_XCBR1_Mod_Oper_T;
extern DataAttribute iedModel_GenericIO_XCBR1_Mod_Oper_Test;
extern DataAttribute iedModel_GenericIO_XCBR1_Mod_Oper_Check;

extern DataObject iedModel_GenericIO_XCBR1_Beh;
extern DataAttribute iedModel_GenericIO_XCBR1_Beh_stVal;
extern DataAttribute iedModel_GenericIO_XCBR1_Beh_q;
extern DataAttribute iedModel_GenericIO_XCBR1_Beh_t;

extern DataObject iedModel_GenericIO_XCBR1_Health;
extern DataAttribute iedModel_GenericIO_XCBR1_Health_stVal;
extern DataAttribute iedModel_GenericIO_XCBR1_Health_q;
extern DataAttribute iedModel_GenericIO_XCBR1_Health_t;

extern DataObject iedModel_GenericIO_XCBR1_NamPlt;
extern DataAttribute iedModel_GenericIO_XCBR1_NamPlt_vendor;
extern DataAttribute iedModel_GenericIO_XCBR1_NamPlt_swRev;
extern DataAttribute iedModel_GenericIO_XCBR1_NamPlt_d;

extern DataObject iedModel_GenericIO_XCBR1_Pos;
extern DataAttribute iedModel_GenericIO_XCBR1_Pos_stVal;
extern DataAttribute iedModel_GenericIO_XCBR1_Pos_q;
extern DataAttribute iedModel_GenericIO_XCBR1_Pos_t;
extern DataAttribute iedModel_GenericIO_XCBR1_Pos_ctlModel;

extern DataObject iedModel_GenericIO_XCBR1_Loc;
extern DataAttribute iedModel_GenericIO_XCBR1_Loc_stVal;
extern DataAttribute iedModel_GenericIO_XCBR1_Loc_q;
extern DataAttribute iedModel_GenericIO_XCBR1_Loc_t;

extern DataObject iedModel_GenericIO_XCBR1_OpCnt;
extern DataAttribute iedModel_GenericIO_XCBR1_OpCnt_stVal;
extern DataAttribute iedModel_GenericIO_XCBR1_OpCnt_q;
extern DataAttribute iedModel_GenericIO_XCBR1_OpCnt_t;

extern DataObject iedModel_GenericIO_XCBR1_CBOpCap;
extern DataAttribute iedModel_GenericIO_XCBR1_CBOpCap_stVal;
extern DataAttribute iedModel_GenericIO_XCBR1_CBOpCap_q;
extern DataAttribute iedModel_GenericIO_XCBR1_CBOpCap_t;

extern DataObject iedModel_GenericIO_XCBR1_BlkOpn;
extern DataAttribute iedModel_GenericIO_XCBR1_BlkOpn_stVal;
extern DataAttribute iedModel_GenericIO_XCBR1_BlkOpn_q;
extern DataAttribute iedModel_GenericIO_XCBR1_BlkOpn_t;
extern DataAttribute iedModel_GenericIO_XCBR1_BlkOpn_ctlModel;
extern DataAttribute iedModel_GenericIO_XCBR1_BlkOpn_Oper;
extern DataAttribute iedModel_GenericIO_XCBR1_BlkOpn_Oper_ctlVal;
extern DataAttribute iedModel_GenericIO_XCBR1_BlkOpn_Oper_origin;
extern DataAttribute iedModel_GenericIO_XCBR1_BlkOpn_Oper_origin_orCat;
extern DataAttribute iedModel_GenericIO_XCBR1_BlkOpn_Oper_origin_orIdent;
extern DataAttribute iedModel_GenericIO_XCBR1_BlkOpn_Oper_ctlNum;
extern DataAttribute iedModel_GenericIO_XCBR1_BlkOpn_Oper_T;
extern DataAttribute iedModel_GenericIO_XCBR1_BlkOpn_Oper_Test;
extern DataAttribute iedModel_GenericIO_XCBR1_BlkOpn_Oper_Check;


extern DataObject iedModel_GenericIO_XCBR1_BlkCls;
extern DataAttribute iedModel_GenericIO_XCBR1_BlkCls_stVal;
extern DataAttribute iedModel_GenericIO_XCBR1_BlkCls_q;
extern DataAttribute iedModel_GenericIO_XCBR1_BlkCls_t;
extern DataAttribute iedModel_GenericIO_XCBR1_BlkCls_ctlModel;
extern DataAttribute iedModel_GenericIO_XCBR1_BlkCls_Oper;

//****************************************************************************
// LN PDIF1
// -----------------------------------------------------------------------------
extern LogicalNode iedModel_GenericIO_PDIF1;
extern DataObject iedModel_GenericIO_PDIF1_Mod;
extern DataAttribute iedModel_GenericIO_PDIF1_Mod_q;
extern DataAttribute iedModel_GenericIO_PDIF1_Mod_t;
extern DataAttribute iedModel_GenericIO_PDIF1_Mod_stVal;
extern DataAttribute iedModel_GenericIO_PDIF1_Mod_ctlModel;

extern DataObject iedModel_GenericIO_PDIF1_Beh;
extern DataAttribute iedModel_GenericIO_PDIF1_Beh_stVal;
extern DataAttribute iedModel_GenericIO_PDIF1_Beh_q;
extern DataAttribute iedModel_GenericIO_PDIF1_Beh_t;

extern DataObject iedModel_GenericIO_PDIF1_Health;
extern DataAttribute iedModel_GenericIO_PDIF1_Health_stVal;
extern DataAttribute iedModel_GenericIO_PDIF1_Health_q;
extern DataAttribute iedModel_GenericIO_PDIF1_Health_t;

extern DataObject iedModel_GenericIO_PDIF1_NamPlt;
extern DataAttribute iedModel_GenericIO_PDIF1_NamPlt_vendor;
extern DataAttribute iedModel_GenericIO_PDIF1_NamPlt_swRev;
extern DataAttribute iedModel_GenericIO_PDIF1_NamPlt_d;

extern DataObject iedModel_GenericIO_PDIF1_Op;
extern DataAttribute iedModel_GenericIO_PDIF1_Op_general;
extern DataAttribute iedModel_GenericIO_PDIF1_Op_q;
extern DataAttribute iedModel_GenericIO_PDIF1_Op_t;

extern DataObject iedModel_GenericIO_PDIF1_DifACIc;
extern DataObject iedModel_GenericIO_PDIF1_DifACIc_phsA;
extern DataAttribute iedModel_GenericIO_PDIF1_DifACIc_phsA_cVal;
extern DataAttribute iedModel_GenericIO_PDIF1_DifACIc_phsA_cVal_mag;
extern DataAttribute iedModel_GenericIO_PDIF1_DifACIc_phsA_cVal_mag_f;
extern DataAttribute iedModel_GenericIO_PDIF1_DifACIc_phsA_q;
extern DataAttribute iedModel_GenericIO_PDIF1_DifACIc_phsA_t;
extern DataAttribute iedModel_GenericIO_PDIF1_DifACIc_phsA_db;
extern DataAttribute iedModel_GenericIO_PDIF1_DifACIc_phsA_zeroDb;

extern DataObject iedModel_GenericIO_PDIF1_DifACIc_phsB;
extern DataAttribute iedModel_GenericIO_PDIF1_DifACIc_phsB_cVal;
extern DataAttribute iedModel_GenericIO_PDIF1_DifACIc_phsB_cVal_mag;
extern DataAttribute iedModel_GenericIO_PDIF1_DifACIc_phsB_cVal_mag_f;
extern DataAttribute iedModel_GenericIO_PDIF1_DifACIc_phsB_q;
extern DataAttribute iedModel_GenericIO_PDIF1_DifACIc_phsB_t;
extern DataAttribute iedModel_GenericIO_PDIF1_DifACIc_phsB_db;
extern DataAttribute iedModel_GenericIO_PDIF1_DifACIc_phsB_zeroDb;

extern DataObject iedModel_GenericIO_PDIF1_DifACIc_phsC;
extern DataAttribute iedModel_GenericIO_PDIF1_DifACIc_phsC_cVal;
extern DataAttribute iedModel_GenericIO_PDIF1_DifACIc_phsC_cVal_mag;
extern DataAttribute iedModel_GenericIO_PDIF1_DifACIc_phsC_cVal_mag_f;
extern DataAttribute iedModel_GenericIO_PDIF1_DifACIc_phsC_q;
extern DataAttribute iedModel_GenericIO_PDIF1_DifACIc_phsC_t;
extern DataAttribute iedModel_GenericIO_PDIF1_DifACIc_phsC_db;
extern DataAttribute iedModel_GenericIO_PDIF1_DifACIc_phsC_zeroDb;

extern DataObject iedModel_GenericIO_PDIF1_RstA;
extern DataObject iedModel_GenericIO_PDIF1_RstA_phsA;
extern DataAttribute iedModel_GenericIO_PDIF1_RstA_phsA_cVal;
extern DataAttribute iedModel_GenericIO_PDIF1_RstA_phsA_cVal_mag;
extern DataAttribute iedModel_GenericIO_PDIF1_RstA_phsA_cVal_mag_f;
extern DataAttribute iedModel_GenericIO_PDIF1_RstA_phsA_q;
extern DataAttribute iedModel_GenericIO_PDIF1_RstA_phsA_t;
extern DataAttribute iedModel_GenericIO_PDIF1_RstA_phsA_db;
extern DataAttribute iedModel_GenericIO_PDIF1_RstA_phsA_zeroDb;

extern DataObject iedModel_GenericIO_PDIF1_RstA_phsB;
extern DataAttribute iedModel_GenericIO_PDIF1_RstA_phsB_cVal;
extern DataAttribute iedModel_GenericIO_PDIF1_RstA_phsB_cVal_mag;
extern DataAttribute iedModel_GenericIO_PDIF1_RstA_phsB_cVal_mag_f;
extern DataAttribute iedModel_GenericIO_PDIF1_RstA_phsB_q;
extern DataAttribute iedModel_GenericIO_PDIF1_RstA_phsB_t;
extern DataAttribute iedModel_GenericIO_PDIF1_RstA_phsB_db;
extern DataAttribute iedModel_GenericIO_PDIF1_RstA_phsB_zeroDb;

extern DataObject iedModel_GenericIO_PDIF1_RstA_phsC;
extern DataAttribute iedModel_GenericIO_PDIF1_RstA_phsC_cVal;
extern DataAttribute iedModel_GenericIO_PDIF1_RstA_phsC_cVal_mag;
extern DataAttribute iedModel_GenericIO_PDIF1_RstA_phsC_cVal_mag_f;
extern DataAttribute iedModel_GenericIO_PDIF1_RstA_phsC_q;
extern DataAttribute iedModel_GenericIO_PDIF1_RstA_phsC_t;
extern DataAttribute iedModel_GenericIO_PDIF1_RstA_phsC_db;
extern DataAttribute iedModel_GenericIO_PDIF1_RstA_phsC_zeroDb;
//****************************************************************************
// LN PDIS1
// -----------------------------------------------------------------------------
extern LogicalNode iedModel_GenericIO_PDIS1;
extern DataObject iedModel_GenericIO_PDIS1_Mod;
extern DataAttribute iedModel_GenericIO_PDIS1_Mod_q;
extern DataAttribute iedModel_GenericIO_PDIS1_Mod_t;
extern DataAttribute iedModel_GenericIO_PDIS1_Mod_stVal;
extern DataAttribute iedModel_GenericIO_PDIS1_Mod_ctlModel;

extern DataObject iedModel_GenericIO_PDIS1_Beh;
extern DataAttribute iedModel_GenericIO_PDIS1_Beh_stVal;
extern DataAttribute iedModel_GenericIO_PDIS1_Beh_q;
extern DataAttribute iedModel_GenericIO_PDIS1_Beh_t;

extern DataObject iedModel_GenericIO_PDIS1_Health;
extern DataAttribute iedModel_GenericIO_PDIS1_Health_stVal;
extern DataAttribute iedModel_GenericIO_PDIS1_Health_q;
extern DataAttribute iedModel_GenericIO_PDIS1_Health_t;

extern DataObject iedModel_GenericIO_PDIS1_NamPlt;
extern DataAttribute iedModel_GenericIO_PDIS1_NamPlt_vendor;
extern DataAttribute iedModel_GenericIO_PDIS1_NamPlt_swRev;
extern DataAttribute iedModel_GenericIO_PDIS1_NamPlt_d;

extern DataObject iedModel_GenericIO_PDIS1_Str;
extern DataAttribute iedModel_GenericIO_PDIS1_Str_general;
extern DataAttribute iedModel_GenericIO_PDIS1_Str_dirGeneral;
extern DataAttribute iedModel_GenericIO_PDIS1_Str_q;
extern DataAttribute iedModel_GenericIO_PDIS1_Str_t;

extern DataObject iedModel_GenericIO_PDIS1_Op;
extern DataAttribute iedModel_GenericIO_PDIS1_Op_general;
extern DataAttribute iedModel_GenericIO_PDIS1_Op_q;
extern DataAttribute iedModel_GenericIO_PDIS1_Op_t;
//****************************************************************************
// LN PDIS2
// -----------------------------------------------------------------------------
extern LogicalNode iedModel_GenericIO_PDIS2;
extern DataObject iedModel_GenericIO_PDIS2_Mod;
extern DataAttribute iedModel_GenericIO_PDIS2_Mod_q;
extern DataAttribute iedModel_GenericIO_PDIS2_Mod_t;
extern DataAttribute iedModel_GenericIO_PDIS2_Mod_stVal;
extern DataAttribute iedModel_GenericIO_PDIS2_Mod_ctlModel;

extern DataObject iedModel_GenericIO_PDIS2_Beh;
extern DataAttribute iedModel_GenericIO_PDIS2_Beh_stVal;
extern DataAttribute iedModel_GenericIO_PDIS2_Beh_q;
extern DataAttribute iedModel_GenericIO_PDIS2_Beh_t;

extern DataObject iedModel_GenericIO_PDIS2_Health;
extern DataAttribute iedModel_GenericIO_PDIS2_Health_stVal;
extern DataAttribute iedModel_GenericIO_PDIS2_Health_q;
extern DataAttribute iedModel_GenericIO_PDIS2_Health_t;

extern DataObject iedModel_GenericIO_PDIS2_NamPlt;
extern DataAttribute iedModel_GenericIO_PDIS2_NamPlt_vendor;
extern DataAttribute iedModel_GenericIO_PDIS2_NamPlt_swRev;
extern DataAttribute iedModel_GenericIO_PDIS2_NamPlt_d;

extern DataObject iedModel_GenericIO_PDIS2_Str;
extern DataAttribute iedModel_GenericIO_PDIS2_Str_general;
extern DataAttribute iedModel_GenericIO_PDIS2_Str_dirGeneral;
extern DataAttribute iedModel_GenericIO_PDIS2_Str_q;
extern DataAttribute iedModel_GenericIO_PDIS2_Str_t;

extern DataObject iedModel_GenericIO_PDIS2_Op;
extern DataAttribute iedModel_GenericIO_PDIS2_Op_general;
extern DataAttribute iedModel_GenericIO_PDIS2_Op_q;
extern DataAttribute iedModel_GenericIO_PDIS2_Op_t;

//****************************************************************************
// LN PDIS3
// -----------------------------------------------------------------------------
extern LogicalNode iedModel_GenericIO_PDIS3;
extern DataObject iedModel_GenericIO_PDIS3_Mod;
extern DataAttribute iedModel_GenericIO_PDIS3_Mod_q;
extern DataAttribute iedModel_GenericIO_PDIS3_Mod_t;
extern DataAttribute iedModel_GenericIO_PDIS3_Mod_stVal;
extern DataAttribute iedModel_GenericIO_PDIS3_Mod_ctlModel;

extern DataObject iedModel_GenericIO_PDIS3_Beh;
extern DataAttribute iedModel_GenericIO_PDIS3_Beh_stVal;
extern DataAttribute iedModel_GenericIO_PDIS3_Beh_q;
extern DataAttribute iedModel_GenericIO_PDIS3_Beh_t;

extern DataObject iedModel_GenericIO_PDIS3_Health;
extern DataAttribute iedModel_GenericIO_PDIS3_Health_stVal;
extern DataAttribute iedModel_GenericIO_PDIS3_Health_q;
extern DataAttribute iedModel_GenericIO_PDIS3_Health_t;

extern DataObject iedModel_GenericIO_PDIS3_NamPlt;
extern DataAttribute iedModel_GenericIO_PDIS3_NamPlt_vendor;
extern DataAttribute iedModel_GenericIO_PDIS3_NamPlt_swRev;
extern DataAttribute iedModel_GenericIO_PDIS3_NamPlt_d;

extern DataObject iedModel_GenericIO_PDIS3_Str;
extern DataAttribute iedModel_GenericIO_PDIS3_Str_general;
extern DataAttribute iedModel_GenericIO_PDIS3_Str_dirGeneral;
extern DataAttribute iedModel_GenericIO_PDIS3_Str_q;
extern DataAttribute iedModel_GenericIO_PDIS3_Str_t;

extern DataObject iedModel_GenericIO_PDIS3_Op;
extern DataAttribute iedModel_GenericIO_PDIS3_Op_general;
extern DataAttribute iedModel_GenericIO_PDIS3_Op_q;
extern DataAttribute iedModel_GenericIO_PDIS3_Op_t;

// -----------------------------------------------------------

#define IEDMODEL_GenericIO (&iedModel_GenericIO)

#define IEDMODEL_GenericIO_LLN0 (&iedModel_GenericIO_LLN0)
#define IEDMODEL_GenericIO_LLN0_Mod (&iedModel_GenericIO_LLN0_Mod)
#define IEDMODEL_GenericIO_LLN0_Mod_q (&iedModel_GenericIO_LLN0_Mod_q)
#define IEDMODEL_GenericIO_LLN0_Mod_t (&iedModel_GenericIO_LLN0_Mod_t)
#define IEDMODEL_GenericIO_LLN0_Mod_ctlModel (&iedModel_GenericIO_LLN0_Mod_ctlModel)
#define IEDMODEL_GenericIO_LLN0_Beh (&iedModel_GenericIO_LLN0_Beh)
#define IEDMODEL_GenericIO_LLN0_Beh_stVal (&iedModel_GenericIO_LLN0_Beh_stVal)
#define IEDMODEL_GenericIO_LLN0_Beh_q (&iedModel_GenericIO_LLN0_Beh_q)
#define IEDMODEL_GenericIO_LLN0_Beh_t (&iedModel_GenericIO_LLN0_Beh_t)
#define IEDMODEL_GenericIO_LLN0_Health (&iedModel_GenericIO_LLN0_Health)
#define IEDMODEL_GenericIO_LLN0_Health_stVal (&iedModel_GenericIO_LLN0_Health_stVal)
#define IEDMODEL_GenericIO_LLN0_Health_q (&iedModel_GenericIO_LLN0_Health_q)
#define IEDMODEL_GenericIO_LLN0_Health_t (&iedModel_GenericIO_LLN0_Health_t)
#define IEDMODEL_GenericIO_LLN0_NamPlt (&iedModel_GenericIO_LLN0_NamPlt)
#define IEDMODEL_GenericIO_LLN0_NamPlt_vendor (&iedModel_GenericIO_LLN0_NamPlt_vendor)
#define IEDMODEL_GenericIO_LLN0_NamPlt_swRev (&iedModel_GenericIO_LLN0_NamPlt_swRev)
#define IEDMODEL_GenericIO_LLN0_NamPlt_d (&iedModel_GenericIO_LLN0_NamPlt_d)
#define IEDMODEL_GenericIO_LLN0_NamPlt_configRev (&iedModel_GenericIO_LLN0_NamPlt_configRev)
#define IEDMODEL_GenericIO_LLN0_NamPlt_ldNs (&iedModel_GenericIO_LLN0_NamPlt_ldNs)

#define IEDMODEL_GenericIO_LPHD1 (&iedModel_GenericIO_LPHD1)
#define IEDMODEL_GenericIO_LPHD1_PhyNam (&iedModel_GenericIO_LPHD1_PhyNam)
#define IEDMODEL_GenericIO_LPHD1_PhyNam_vendor (&iedModel_GenericIO_LPHD1_PhyNam_vendor)
#define IEDMODEL_GenericIO_LPHD1_PhyHealth (&iedModel_GenericIO_LPHD1_PhyHealth)
#define IEDMODEL_GenericIO_LPHD1_PhyHealth_stVal (&iedModel_GenericIO_LPHD1_PhyHealth_stVal)
#define IEDMODEL_GenericIO_LPHD1_PhyHealth_q (&iedModel_GenericIO_LPHD1_PhyHealth_q)
#define IEDMODEL_GenericIO_LPHD1_PhyHealth_t (&iedModel_GenericIO_LPHD1_PhyHealth_t)
#define IEDMODEL_GenericIO_LPHD1_Proxy (&iedModel_GenericIO_LPHD1_Proxy)
#define IEDMODEL_GenericIO_LPHD1_Proxy_stVal (&iedModel_GenericIO_LPHD1_Proxy_stVal)
#define IEDMODEL_GenericIO_LPHD1_Proxy_q (&iedModel_GenericIO_LPHD1_Proxy_q)
#define IEDMODEL_GenericIO_LPHD1_Proxy_t (&iedModel_GenericIO_LPHD1_Proxy_t)

#define IEDMODEL_GenericIO_GGIO1 (&iedModel_GenericIO_GGIO1)
#define IEDMODEL_GenericIO_GGIO1_Mod (&iedModel_GenericIO_GGIO1_Mod)
#define IEDMODEL_GenericIO_GGIO1_Mod_q (&iedModel_GenericIO_GGIO1_Mod_q)
#define IEDMODEL_GenericIO_GGIO1_Mod_t (&iedModel_GenericIO_GGIO1_Mod_t)
#define IEDMODEL_GenericIO_GGIO1_Mod_ctlModel (&iedModel_GenericIO_GGIO1_Mod_ctlModel)
#define IEDMODEL_GenericIO_GGIO1_Beh (&iedModel_GenericIO_GGIO1_Beh)
#define IEDMODEL_GenericIO_GGIO1_Beh_stVal (&iedModel_GenericIO_GGIO1_Beh_stVal)
#define IEDMODEL_GenericIO_GGIO1_Beh_q (&iedModel_GenericIO_GGIO1_Beh_q)
#define IEDMODEL_GenericIO_GGIO1_Beh_t (&iedModel_GenericIO_GGIO1_Beh_t)
#define IEDMODEL_GenericIO_GGIO1_Health (&iedModel_GenericIO_GGIO1_Health)
#define IEDMODEL_GenericIO_GGIO1_Health_stVal (&iedModel_GenericIO_GGIO1_Health_stVal)
#define IEDMODEL_GenericIO_GGIO1_Health_q (&iedModel_GenericIO_GGIO1_Health_q)
#define IEDMODEL_GenericIO_GGIO1_Health_t (&iedModel_GenericIO_GGIO1_Health_t)
#define IEDMODEL_GenericIO_GGIO1_NamPlt (&iedModel_GenericIO_GGIO1_NamPlt)
#define IEDMODEL_GenericIO_GGIO1_NamPlt_vendor (&iedModel_GenericIO_GGIO1_NamPlt_vendor)
#define IEDMODEL_GenericIO_GGIO1_NamPlt_swRev (&iedModel_GenericIO_GGIO1_NamPlt_swRev)
#define IEDMODEL_GenericIO_GGIO1_NamPlt_d (&iedModel_GenericIO_GGIO1_NamPlt_d)

#define IEDMODEL_GenericIO_GGIO1_AnIn1 (&iedModel_GenericIO_GGIO1_AnIn1)
#define IEDMODEL_GenericIO_GGIO1_AnIn1_mag (&iedModel_GenericIO_GGIO1_AnIn1_mag)
#define IEDMODEL_GenericIO_GGIO1_AnIn1_mag_f (&iedModel_GenericIO_GGIO1_AnIn1_mag_f)
#define IEDMODEL_GenericIO_GGIO1_AnIn1_q (&iedModel_GenericIO_GGIO1_AnIn1_q)
#define IEDMODEL_GenericIO_GGIO1_AnIn1_t (&iedModel_GenericIO_GGIO1_AnIn1_t)
#define IEDMODEL_GenericIO_GGIO1_AnIn2 (&iedModel_GenericIO_GGIO1_AnIn2)
#define IEDMODEL_GenericIO_GGIO1_AnIn2_mag (&iedModel_GenericIO_GGIO1_AnIn2_mag)
#define IEDMODEL_GenericIO_GGIO1_AnIn2_mag_f (&iedModel_GenericIO_GGIO1_AnIn2_mag_f)
#define IEDMODEL_GenericIO_GGIO1_AnIn2_q (&iedModel_GenericIO_GGIO1_AnIn2_q)
#define IEDMODEL_GenericIO_GGIO1_AnIn2_t (&iedModel_GenericIO_GGIO1_AnIn2_t)
#define IEDMODEL_GenericIO_GGIO1_AnIn3 (&iedModel_GenericIO_GGIO1_AnIn3)
#define IEDMODEL_GenericIO_GGIO1_AnIn3_mag (&iedModel_GenericIO_GGIO1_AnIn3_mag)
#define IEDMODEL_GenericIO_GGIO1_AnIn3_mag_f (&iedModel_GenericIO_GGIO1_AnIn3_mag_f)
#define IEDMODEL_GenericIO_GGIO1_AnIn3_q (&iedModel_GenericIO_GGIO1_AnIn3_q)
#define IEDMODEL_GenericIO_GGIO1_AnIn3_t (&iedModel_GenericIO_GGIO1_AnIn3_t)
#define IEDMODEL_GenericIO_GGIO1_AnIn4 (&iedModel_GenericIO_GGIO1_AnIn4)
#define IEDMODEL_GenericIO_GGIO1_AnIn4_mag (&iedModel_GenericIO_GGIO1_AnIn4_mag)
#define IEDMODEL_GenericIO_GGIO1_AnIn4_mag_f (&iedModel_GenericIO_GGIO1_AnIn4_mag_f)
#define IEDMODEL_GenericIO_GGIO1_AnIn4_q (&iedModel_GenericIO_GGIO1_AnIn4_q)
#define IEDMODEL_GenericIO_GGIO1_AnIn4_t (&iedModel_GenericIO_GGIO1_AnIn4_t)

#define IEDMODEL_GenericIO_GGIO1_SPCSO1 (&iedModel_GenericIO_GGIO1_SPCSO1)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_stVal (&iedModel_GenericIO_GGIO1_SPCSO1_stVal)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_q (&iedModel_GenericIO_GGIO1_SPCSO1_q)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_Oper (&iedModel_GenericIO_GGIO1_SPCSO1_Oper)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_Oper_ctlVal (&iedModel_GenericIO_GGIO1_SPCSO1_Oper_ctlVal)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_Oper_origin (&iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_Oper_origin_orCat (&iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin_orCat)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_Oper_origin_orIdent (&iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin_orIdent)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_Oper_ctlNum (&iedModel_GenericIO_GGIO1_SPCSO1_Oper_ctlNum)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_Oper_T (&iedModel_GenericIO_GGIO1_SPCSO1_Oper_T)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_Oper_Test (&iedModel_GenericIO_GGIO1_SPCSO1_Oper_Test)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_Oper_Check (&iedModel_GenericIO_GGIO1_SPCSO1_Oper_Check)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_ctlModel (&iedModel_GenericIO_GGIO1_SPCSO1_ctlModel)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_t (&iedModel_GenericIO_GGIO1_SPCSO1_t)

#define IEDMODEL_GenericIO_GGIO1_SPCSO2 (&iedModel_GenericIO_GGIO1_SPCSO2)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_stVal (&iedModel_GenericIO_GGIO1_SPCSO2_stVal)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_q (&iedModel_GenericIO_GGIO1_SPCSO2_q)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_Oper (&iedModel_GenericIO_GGIO1_SPCSO2_Oper)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_Oper_ctlVal (&iedModel_GenericIO_GGIO1_SPCSO2_Oper_ctlVal)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_Oper_origin (&iedModel_GenericIO_GGIO1_SPCSO2_Oper_origin)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_Oper_origin_orCat (&iedModel_GenericIO_GGIO1_SPCSO2_Oper_origin_orCat)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_Oper_origin_orIdent (&iedModel_GenericIO_GGIO1_SPCSO2_Oper_origin_orIdent)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_Oper_ctlNum (&iedModel_GenericIO_GGIO1_SPCSO2_Oper_ctlNum)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_Oper_T (&iedModel_GenericIO_GGIO1_SPCSO2_Oper_T)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_Oper_Test (&iedModel_GenericIO_GGIO1_SPCSO2_Oper_Test)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_Oper_Check (&iedModel_GenericIO_GGIO1_SPCSO2_Oper_Check)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_ctlModel (&iedModel_GenericIO_GGIO1_SPCSO2_ctlModel)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_t (&iedModel_GenericIO_GGIO1_SPCSO2_t)

#define IEDMODEL_GenericIO_GGIO1_SPCSO3 (&iedModel_GenericIO_GGIO1_SPCSO3)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_stVal (&iedModel_GenericIO_GGIO1_SPCSO3_stVal)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_q (&iedModel_GenericIO_GGIO1_SPCSO3_q)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_Oper (&iedModel_GenericIO_GGIO1_SPCSO3_Oper)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_Oper_ctlVal (&iedModel_GenericIO_GGIO1_SPCSO3_Oper_ctlVal)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_Oper_origin (&iedModel_GenericIO_GGIO1_SPCSO3_Oper_origin)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_Oper_origin_orCat (&iedModel_GenericIO_GGIO1_SPCSO3_Oper_origin_orCat)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_Oper_origin_orIdent (&iedModel_GenericIO_GGIO1_SPCSO3_Oper_origin_orIdent)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_Oper_ctlNum (&iedModel_GenericIO_GGIO1_SPCSO3_Oper_ctlNum)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_Oper_T (&iedModel_GenericIO_GGIO1_SPCSO3_Oper_T)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_Oper_Test (&iedModel_GenericIO_GGIO1_SPCSO3_Oper_Test)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_Oper_Check (&iedModel_GenericIO_GGIO1_SPCSO3_Oper_Check)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_ctlModel (&iedModel_GenericIO_GGIO1_SPCSO3_ctlModel)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_t (&iedModel_GenericIO_GGIO1_SPCSO3_t)

#define IEDMODEL_GenericIO_GGIO1_SPCSO4 (&iedModel_GenericIO_GGIO1_SPCSO4)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_stVal (&iedModel_GenericIO_GGIO1_SPCSO4_stVal)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_q (&iedModel_GenericIO_GGIO1_SPCSO4_q)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_Oper (&iedModel_GenericIO_GGIO1_SPCSO4_Oper)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_Oper_ctlVal (&iedModel_GenericIO_GGIO1_SPCSO4_Oper_ctlVal)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_Oper_origin (&iedModel_GenericIO_GGIO1_SPCSO4_Oper_origin)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_Oper_origin_orCat (&iedModel_GenericIO_GGIO1_SPCSO4_Oper_origin_orCat)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_Oper_origin_orIdent (&iedModel_GenericIO_GGIO1_SPCSO4_Oper_origin_orIdent)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_Oper_ctlNum (&iedModel_GenericIO_GGIO1_SPCSO4_Oper_ctlNum)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_Oper_T (&iedModel_GenericIO_GGIO1_SPCSO4_Oper_T)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_Oper_Test (&iedModel_GenericIO_GGIO1_SPCSO4_Oper_Test)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_Oper_Check (&iedModel_GenericIO_GGIO1_SPCSO4_Oper_Check)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_ctlModel (&iedModel_GenericIO_GGIO1_SPCSO4_ctlModel)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_t (&iedModel_GenericIO_GGIO1_SPCSO4_t)

#define IEDMODEL_GenericIO_GGIO1_SPCSO5 (&iedModel_GenericIO_GGIO1_SPCSO5)
#define IEDMODEL_GenericIO_GGIO1_SPCSO5_stVal (&iedModel_GenericIO_GGIO1_SPCSO5_stVal)
#define IEDMODEL_GenericIO_GGIO1_SPCSO5_q (&iedModel_GenericIO_GGIO1_SPCSO5_q)
#define IEDMODEL_GenericIO_GGIO1_SPCSO5_t (&iedModel_GenericIO_GGIO1_SPCSO5_t)

#define IEDMODEL_GenericIO_GGIO1_SPCSO6 (&iedModel_GenericIO_GGIO1_SPCSO6)
#define IEDMODEL_GenericIO_GGIO1_SPCSO6_stVal (&iedModel_GenericIO_GGIO1_SPCSO6_stVal)
#define IEDMODEL_GenericIO_GGIO1_SPCSO6_q (&iedModel_GenericIO_GGIO1_SPCSO6_q)
#define IEDMODEL_GenericIO_GGIO1_SPCSO6_t (&iedModel_GenericIO_GGIO1_SPCSO6_t)

#define IEDMODEL_GenericIO_GGIO1_SPCSO7 (&iedModel_GenericIO_GGIO1_SPCSO7)
#define IEDMODEL_GenericIO_GGIO1_SPCSO7_stVal (&iedModel_GenericIO_GGIO1_SPCSO7_stVal)
#define IEDMODEL_GenericIO_GGIO1_SPCSO7_q (&iedModel_GenericIO_GGIO1_SPCSO7_q)
#define IEDMODEL_GenericIO_GGIO1_SPCSO7_t (&iedModel_GenericIO_GGIO1_SPCSO7_t)

#define IEDMODEL_GenericIO_GGIO1_SPCSO8 (&iedModel_GenericIO_GGIO1_SPCSO8)
#define IEDMODEL_GenericIO_GGIO1_SPCSO8_stVal (&iedModel_GenericIO_GGIO1_SPCSO8_stVal)
#define IEDMODEL_GenericIO_GGIO1_SPCSO8_q (&iedModel_GenericIO_GGIO1_SPCSO8_q)
#define IEDMODEL_GenericIO_GGIO1_SPCSO8_t (&iedModel_GenericIO_GGIO1_SPCSO8_t)

//-- GGIO2_SPCSO1
#define IEDMODEL_GenericIO_GGIO2_SPCSO1 (&iedModel_GenericIO_GGIO2_SPCSO1)
#define IEDMODEL_GenericIO_GGIO2_SPCSO1_stVal (&iedModel_GenericIO_GGIO2_SPCSO1_stVal)
#define IEDMODEL_GenericIO_GGIO2_SPCSO1_q (&iedModel_GenericIO_GGIO2_SPCSO1_q)
#define IEDMODEL_GenericIO_GGIO2_SPCSO1_t (&iedModel_GenericIO_GGIO2_SPCSO1_t)
#define IEDMODEL_GenericIO_GGIO2_SPCSO1_Oper_ctlVal (&iedModel_GenericIO_GGIO2_SPCSO1_Oper_ctlVal)

#define IEDMODEL_GenericIO_GGIO2_SPCSO2 (&iedModel_GenericIO_GGIO2_SPCSO2)
#define IEDMODEL_GenericIO_GGIO2_SPCSO2_stVal (&iedModel_GenericIO_GGIO2_SPCSO2_stVal)
#define IEDMODEL_GenericIO_GGIO2_SPCSO2_q (&iedModel_GenericIO_GGIO2_SPCSO2_q)
#define IEDMODEL_GenericIO_GGIO2_SPCSO2_t (&iedModel_GenericIO_GGIO2_SPCSO2_t)
#define IEDMODEL_GenericIO_GGIO2_SPCSO2_Oper_ctlVal (&iedModel_GenericIO_GGIO2_SPCSO2_Oper_ctlVal)

#define IEDMODEL_GenericIO_GGIO2_SPCSO3 (&iedModel_GenericIO_GGIO2_SPCSO3)
#define IEDMODEL_GenericIO_GGIO2_SPCSO3_stVal (&iedModel_GenericIO_GGIO2_SPCSO3_stVal)
#define IEDMODEL_GenericIO_GGIO2_SPCSO3_q (&iedModel_GenericIO_GGIO2_SPCSO3_q)
#define IEDMODEL_GenericIO_GGIO2_SPCSO3_t (&iedModel_GenericIO_GGIO2_SPCSO3_t)
#define IEDMODEL_GenericIO_GGIO2_SPCSO3_Oper_ctlVal (&iedModel_GenericIO_GGIO2_SPCSO3_Oper_ctlVal)

#define IEDMODEL_GenericIO_GGIO2_SPCSO4 (&iedModel_GenericIO_GGIO2_SPCSO4)
#define IEDMODEL_GenericIO_GGIO2_SPCSO4_stVal (&iedModel_GenericIO_GGIO2_SPCSO4_stVal)
#define IEDMODEL_GenericIO_GGIO2_SPCSO4_q (&iedModel_GenericIO_GGIO2_SPCSO4_q)
#define IEDMODEL_GenericIO_GGIO2_SPCSO4_t (&iedModel_GenericIO_GGIO2_SPCSO4_t)
#define IEDMODEL_GenericIO_GGIO2_SPCSO4_Oper_ctlVal (&iedModel_GenericIO_GGIO2_SPCSO4_Oper_ctlVal)

#define IEDMODEL_GenericIO_GGIO2_SPCSO5_stVal (&iedModel_GenericIO_GGIO2_SPCSO5_stVal)
#define IEDMODEL_GenericIO_GGIO2_SPCSO5_q (&iedModel_GenericIO_GGIO2_SPCSO5_q)
#define IEDMODEL_GenericIO_GGIO2_SPCSO5_t (&iedModel_GenericIO_GGIO2_SPCSO5_t)
#define IEDMODEL_GenericIO_GGIO2_SPCSO5_Oper_ctlVal (&iedModel_GenericIO_GGIO2_SPCSO5_Oper_ctlVal)

#define IEDMODEL_GenericIO_GGIO2_SPCSO6_stVal (&iedModel_GenericIO_GGIO2_SPCSO6_stVal)
#define IEDMODEL_GenericIO_GGIO2_SPCSO6_q (&iedModel_GenericIO_GGIO2_SPCSO6_q)
#define IEDMODEL_GenericIO_GGIO2_SPCSO6_t (&iedModel_GenericIO_GGIO2_SPCSO6_t)
#define IEDMODEL_GenericIO_GGIO2_SPCSO6_Oper_ctlVal (&iedModel_GenericIO_GGIO2_SPCSO6_Oper_ctlVal)

#define IEDMODEL_GenericIO_GGIO2_SPCSO7_stVal (&iedModel_GenericIO_GGIO2_SPCSO7_stVal)
#define IEDMODEL_GenericIO_GGIO2_SPCSO7_q (&iedModel_GenericIO_GGIO2_SPCSO7_q)
#define IEDMODEL_GenericIO_GGIO2_SPCSO7_t (&iedModel_GenericIO_GGIO2_SPCSO7_t)
#define IEDMODEL_GenericIO_GGIO2_SPCSO7_Oper_ctlVal (&iedModel_GenericIO_GGIO2_SPCSO7_Oper_ctlVal)

#define IEDMODEL_GenericIO_GGIO2_SPCSO8_stVal (&iedModel_GenericIO_GGIO2_SPCSO8_stVal)
#define IEDMODEL_GenericIO_GGIO2_SPCSO8_q (&iedModel_GenericIO_GGIO2_SPCSO8_q)
#define IEDMODEL_GenericIO_GGIO2_SPCSO8_t (&iedModel_GenericIO_GGIO2_SPCSO8_t)
#define IEDMODEL_GenericIO_GGIO2_SPCSO8_Oper_ctlVal (&iedModel_GenericIO_GGIO2_SPCSO8_Oper_ctlVal)


/***********************************************************************************************************
 *
 *
 *
 ***********************************************************************************************************/
#define IEDMODEL_GenericIO_GGIO1_Ind1 (&iedModel_GenericIO_GGIO1_Ind1)
#define IEDMODEL_GenericIO_GGIO1_Ind1_stVal (&iedModel_GenericIO_GGIO1_Ind1_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind1_q (&iedModel_GenericIO_GGIO1_Ind1_q)
#define IEDMODEL_GenericIO_GGIO1_Ind1_t (&iedModel_GenericIO_GGIO1_Ind1_t)

#define IEDMODEL_GenericIO_GGIO1_Ind2 (&iedModel_GenericIO_GGIO1_Ind2)
#define IEDMODEL_GenericIO_GGIO1_Ind2_stVal (&iedModel_GenericIO_GGIO1_Ind2_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind2_q (&iedModel_GenericIO_GGIO1_Ind2_q)
#define IEDMODEL_GenericIO_GGIO1_Ind2_t (&iedModel_GenericIO_GGIO1_Ind2_t)

#define IEDMODEL_GenericIO_GGIO1_Ind3 (&iedModel_GenericIO_GGIO1_Ind3)
#define IEDMODEL_GenericIO_GGIO1_Ind3_stVal (&iedModel_GenericIO_GGIO1_Ind3_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind3_q (&iedModel_GenericIO_GGIO1_Ind3_q)
#define IEDMODEL_GenericIO_GGIO1_Ind3_t (&iedModel_GenericIO_GGIO1_Ind3_t)

#define IEDMODEL_GenericIO_GGIO1_Ind4 (&iedModel_GenericIO_GGIO1_Ind4)
#define IEDMODEL_GenericIO_GGIO1_Ind4_stVal (&iedModel_GenericIO_GGIO1_Ind4_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind4_q (&iedModel_GenericIO_GGIO1_Ind4_q)
#define IEDMODEL_GenericIO_GGIO1_Ind4_t (&iedModel_GenericIO_GGIO1_Ind4_t)

#define IEDMODEL_GenericIO_GGIO1_Ind5 (&iedModel_GenericIO_GGIO1_Ind5)
#define IEDMODEL_GenericIO_GGIO1_Ind5_stVal (&iedModel_GenericIO_GGIO1_Ind5_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind5_q (&iedModel_GenericIO_GGIO1_Ind5_q)
#define IEDMODEL_GenericIO_GGIO1_Ind5_t (&iedModel_GenericIO_GGIO1_Ind5_t)

#define IEDMODEL_GenericIO_GGIO1_Ind6 (&iedModel_GenericIO_GGIO1_Ind6)
#define IEDMODEL_GenericIO_GGIO1_Ind6_stVal (&iedModel_GenericIO_GGIO1_Ind6_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind6_q (&iedModel_GenericIO_GGIO1_Ind6_q)
#define IEDMODEL_GenericIO_GGIO1_Ind6_t (&iedModel_GenericIO_GGIO1_Ind6_t)

#define IEDMODEL_GenericIO_GGIO1_Ind7 (&iedModel_GenericIO_GGIO1_Ind7)
#define IEDMODEL_GenericIO_GGIO1_Ind7_stVal (&iedModel_GenericIO_GGIO1_Ind7_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind7_q (&iedModel_GenericIO_GGIO1_Ind7_q)
#define IEDMODEL_GenericIO_GGIO1_Ind7_t (&iedModel_GenericIO_GGIO1_Ind7_t)

#define IEDMODEL_GenericIO_GGIO1_Ind8 (&iedModel_GenericIO_GGIO1_Ind8)
#define IEDMODEL_GenericIO_GGIO1_Ind8_stVal (&iedModel_GenericIO_GGIO1_Ind8_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind8_q (&iedModel_GenericIO_GGIO1_Ind8_q)
#define IEDMODEL_GenericIO_GGIO1_Ind8_t (&iedModel_GenericIO_GGIO1_Ind8_t)

#define IEDMODEL_GenericIO_GGIO1_Ind9 (&iedModel_GenericIO_GGIO1_Ind9)
#define IEDMODEL_GenericIO_GGIO1_Ind9_stVal (&iedModel_GenericIO_GGIO1_Ind9_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind9_q (&iedModel_GenericIO_GGIO1_Ind9_q)
#define IEDMODEL_GenericIO_GGIO1_Ind9_t (&iedModel_GenericIO_GGIO1_Ind9_t)

#define IEDMODEL_GenericIO_GGIO1_Ind10 (&iedModel_GenericIO_GGIO1_Ind10)
#define IEDMODEL_GenericIO_GGIO1_Ind10_stVal (&iedModel_GenericIO_GGIO1_Ind10_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind10_q (&iedModel_GenericIO_GGIO1_Ind10_q)
#define IEDMODEL_GenericIO_GGIO1_Ind10_t (&iedModel_GenericIO_GGIO1_Ind10_t)

#define IEDMODEL_GenericIO_GGIO1_Ind11 (&iedModel_GenericIO_GGIO1_Ind11)
#define IEDMODEL_GenericIO_GGIO1_Ind11_stVal (&iedModel_GenericIO_GGIO1_Ind11_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind11_q (&iedModel_GenericIO_GGIO1_Ind11_q)
#define IEDMODEL_GenericIO_GGIO1_Ind11_t (&iedModel_GenericIO_GGIO1_Ind11_t)

#define IEDMODEL_GenericIO_GGIO1_Ind12 (&iedModel_GenericIO_GGIO1_Ind12)
#define IEDMODEL_GenericIO_GGIO1_Ind12_stVal (&iedModel_GenericIO_GGIO1_Ind12_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind12_q (&iedModel_GenericIO_GGIO1_Ind12_q)
#define IEDMODEL_GenericIO_GGIO1_Ind12_t (&iedModel_GenericIO_GGIO1_Ind12_t)

#define IEDMODEL_GenericIO_GGIO1_Ind13 (&iedModel_GenericIO_GGIO1_Ind13)
#define IEDMODEL_GenericIO_GGIO1_Ind13_stVal (&iedModel_GenericIO_GGIO1_Ind13_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind13_q (&iedModel_GenericIO_GGIO1_Ind13_q)
#define IEDMODEL_GenericIO_GGIO1_Ind13_t (&iedModel_GenericIO_GGIO1_Ind13_t)

#define IEDMODEL_GenericIO_GGIO1_Ind14 (&iedModel_GenericIO_GGIO1_Ind14)
#define IEDMODEL_GenericIO_GGIO1_Ind14_stVal (&iedModel_GenericIO_GGIO1_Ind14_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind14_q (&iedModel_GenericIO_GGIO1_Ind14_q)
#define IEDMODEL_GenericIO_GGIO1_Ind14_t (&iedModel_GenericIO_GGIO1_Ind14_t)

#define IEDMODEL_GenericIO_GGIO1_Ind15 (&iedModel_GenericIO_GGIO1_Ind15)
#define IEDMODEL_GenericIO_GGIO1_Ind15_stVal (&iedModel_GenericIO_GGIO1_Ind15_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind15_q (&iedModel_GenericIO_GGIO1_Ind15_q)
#define IEDMODEL_GenericIO_GGIO1_Ind15_t (&iedModel_GenericIO_GGIO1_Ind15_t)

#define IEDMODEL_GenericIO_GGIO1_Ind16 (&iedModel_GenericIO_GGIO1_Ind16)
#define IEDMODEL_GenericIO_GGIO1_Ind16_stVal (&iedModel_GenericIO_GGIO1_Ind16_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind16_q (&iedModel_GenericIO_GGIO1_Ind16_q)
#define IEDMODEL_GenericIO_GGIO1_Ind16_t (&iedModel_GenericIO_GGIO1_Ind16_t)

#define IEDMODEL_GenericIO_GGIO1_Ind17 (&iedModel_GenericIO_GGIO1_Ind17)
#define IEDMODEL_GenericIO_GGIO1_Ind17_stVal (&iedModel_GenericIO_GGIO1_Ind17_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind17_q (&iedModel_GenericIO_GGIO1_Ind17_q)
#define IEDMODEL_GenericIO_GGIO1_Ind17_t (&iedModel_GenericIO_GGIO1_Ind17_t)

#define IEDMODEL_GenericIO_GGIO1_Ind18 (&iedModel_GenericIO_GGIO1_Ind18)
#define IEDMODEL_GenericIO_GGIO1_Ind18_stVal (&iedModel_GenericIO_GGIO1_Ind18_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind18_q (&iedModel_GenericIO_GGIO1_Ind18_q)
#define IEDMODEL_GenericIO_GGIO1_Ind18_t (&iedModel_GenericIO_GGIO1_Ind18_t)

#define IEDMODEL_GenericIO_GGIO1_Ind19 (&iedModel_GenericIO_GGIO1_Ind19)
#define IEDMODEL_GenericIO_GGIO1_Ind19_stVal (&iedModel_GenericIO_GGIO1_Ind19_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind19_q (&iedModel_GenericIO_GGIO1_Ind19_q)
#define IEDMODEL_GenericIO_GGIO1_Ind19_t (&iedModel_GenericIO_GGIO1_Ind19_t)

#define IEDMODEL_GenericIO_GGIO1_Ind20 (&iedModel_GenericIO_GGIO1_Ind20)
#define IEDMODEL_GenericIO_GGIO1_Ind20_stVal (&iedModel_GenericIO_GGIO1_Ind20_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind20_q (&iedModel_GenericIO_GGIO1_Ind20_q)
#define IEDMODEL_GenericIO_GGIO1_Ind20_t (&iedModel_GenericIO_GGIO1_Ind20_t)

#define IEDMODEL_GenericIO_GGIO1_Ind21 (&iedModel_GenericIO_GGIO1_Ind21)
#define IEDMODEL_GenericIO_GGIO1_Ind21_stVal (&iedModel_GenericIO_GGIO1_Ind21_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind21_q (&iedModel_GenericIO_GGIO1_Ind21_q)
#define IEDMODEL_GenericIO_GGIO1_Ind21_t (&iedModel_GenericIO_GGIO1_Ind21_t)

#define IEDMODEL_GenericIO_GGIO1_Ind22 (&iedModel_GenericIO_GGIO1_Ind22)
#define IEDMODEL_GenericIO_GGIO1_Ind22_stVal (&iedModel_GenericIO_GGIO1_Ind22_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind22_q (&iedModel_GenericIO_GGIO1_Ind22_q)
#define IEDMODEL_GenericIO_GGIO1_Ind22_t (&iedModel_GenericIO_GGIO1_Ind22_t)

#define IEDMODEL_GenericIO_GGIO1_Ind23 (&iedModel_GenericIO_GGIO1_Ind23)
#define IEDMODEL_GenericIO_GGIO1_Ind23_stVal (&iedModel_GenericIO_GGIO1_Ind23_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind23_q (&iedModel_GenericIO_GGIO1_Ind23_q)
#define IEDMODEL_GenericIO_GGIO1_Ind23_t (&iedModel_GenericIO_GGIO1_Ind23_t)

#define IEDMODEL_GenericIO_GGIO1_Ind24 (&iedModel_GenericIO_GGIO1_Ind24)
#define IEDMODEL_GenericIO_GGIO1_Ind24_stVal (&iedModel_GenericIO_GGIO1_Ind24_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind24_q (&iedModel_GenericIO_GGIO1_Ind24_q)
#define IEDMODEL_GenericIO_GGIO1_Ind24_t (&iedModel_GenericIO_GGIO1_Ind24_t)

#define IEDMODEL_GenericIO_GGIO1_Ind25 (&iedModel_GenericIO_GGIO1_Ind25)
#define IEDMODEL_GenericIO_GGIO1_Ind25_stVal (&iedModel_GenericIO_GGIO1_Ind25_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind25_q (&iedModel_GenericIO_GGIO1_Ind25_q)
#define IEDMODEL_GenericIO_GGIO1_Ind25_t (&iedModel_GenericIO_GGIO1_Ind25_t)

#define IEDMODEL_GenericIO_GGIO1_Ind26 (&iedModel_GenericIO_GGIO1_Ind26)
#define IEDMODEL_GenericIO_GGIO1_Ind26_stVal (&iedModel_GenericIO_GGIO1_Ind26_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind26_q (&iedModel_GenericIO_GGIO1_Ind26_q)
#define IEDMODEL_GenericIO_GGIO1_Ind26_t (&iedModel_GenericIO_GGIO1_Ind26_t)

#define IEDMODEL_GenericIO_GGIO1_Ind27 (&iedModel_GenericIO_GGIO1_Ind27)
#define IEDMODEL_GenericIO_GGIO1_Ind27_stVal (&iedModel_GenericIO_GGIO1_Ind27_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind27_q (&iedModel_GenericIO_GGIO1_Ind27_q)
#define IEDMODEL_GenericIO_GGIO1_Ind27_t (&iedModel_GenericIO_GGIO1_Ind27_t)

#define IEDMODEL_GenericIO_GGIO1_Ind28 (&iedModel_GenericIO_GGIO1_Ind28)
#define IEDMODEL_GenericIO_GGIO1_Ind28_stVal (&iedModel_GenericIO_GGIO1_Ind28_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind28_q (&iedModel_GenericIO_GGIO1_Ind28_q)
#define IEDMODEL_GenericIO_GGIO1_Ind28_t (&iedModel_GenericIO_GGIO1_Ind28_t)

#define IEDMODEL_GenericIO_GGIO1_Ind29 (&iedModel_GenericIO_GGIO1_Ind29)
#define IEDMODEL_GenericIO_GGIO1_Ind29_stVal (&iedModel_GenericIO_GGIO1_Ind29_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind29_q (&iedModel_GenericIO_GGIO1_Ind29_q)
#define IEDMODEL_GenericIO_GGIO1_Ind29_t (&iedModel_GenericIO_GGIO1_Ind29_t)

#define IEDMODEL_GenericIO_GGIO1_Ind30 (&iedModel_GenericIO_GGIO1_Ind30)
#define IEDMODEL_GenericIO_GGIO1_Ind30_stVal (&iedModel_GenericIO_GGIO1_Ind30_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind30_q (&iedModel_GenericIO_GGIO1_Ind30_q)
#define IEDMODEL_GenericIO_GGIO1_Ind30_t (&iedModel_GenericIO_GGIO1_Ind30_t)

#define IEDMODEL_GenericIO_GGIO1_Ind31 (&iedModel_GenericIO_GGIO1_Ind31)
#define IEDMODEL_GenericIO_GGIO1_Ind31_stVal (&iedModel_GenericIO_GGIO1_Ind31_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind31_q (&iedModel_GenericIO_GGIO1_Ind31_q)
#define IEDMODEL_GenericIO_GGIO1_Ind31_t (&iedModel_GenericIO_GGIO1_Ind31_t)

#define IEDMODEL_GenericIO_GGIO1_Ind32 (&iedModel_GenericIO_GGIO1_Ind32)
#define IEDMODEL_GenericIO_GGIO1_Ind32_stVal (&iedModel_GenericIO_GGIO1_Ind32_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind32_q (&iedModel_GenericIO_GGIO1_Ind32_q)
#define IEDMODEL_GenericIO_GGIO1_Ind32_t (&iedModel_GenericIO_GGIO1_Ind32_t)

#define IEDMODEL_GenericIO_GGIO1_Ind33 (&iedModel_GenericIO_GGIO1_Ind33)
#define IEDMODEL_GenericIO_GGIO1_Ind33_stVal (&iedModel_GenericIO_GGIO1_Ind33_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind33_q (&iedModel_GenericIO_GGIO1_Ind33_q)
#define IEDMODEL_GenericIO_GGIO1_Ind33_t (&iedModel_GenericIO_GGIO1_Ind33_t)

#define IEDMODEL_GenericIO_GGIO1_Ind34 (&iedModel_GenericIO_GGIO1_Ind34)
#define IEDMODEL_GenericIO_GGIO1_Ind34_stVal (&iedModel_GenericIO_GGIO1_Ind34_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind34_q (&iedModel_GenericIO_GGIO1_Ind34_q)
#define IEDMODEL_GenericIO_GGIO1_Ind34_t (&iedModel_GenericIO_GGIO1_Ind34_t)

#define IEDMODEL_GenericIO_GGIO1_Ind35 (&iedModel_GenericIO_GGIO1_Ind35)
#define IEDMODEL_GenericIO_GGIO1_Ind35_stVal (&iedModel_GenericIO_GGIO1_Ind35_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind35_q (&iedModel_GenericIO_GGIO1_Ind35_q)
#define IEDMODEL_GenericIO_GGIO1_Ind35_t (&iedModel_GenericIO_GGIO1_Ind35_t)

#define IEDMODEL_GenericIO_GGIO1_Ind36 (&iedModel_GenericIO_GGIO1_Ind36)
#define IEDMODEL_GenericIO_GGIO1_Ind36_stVal (&iedModel_GenericIO_GGIO1_Ind36_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind36_q (&iedModel_GenericIO_GGIO1_Ind36_q)
#define IEDMODEL_GenericIO_GGIO1_Ind36_t (&iedModel_GenericIO_GGIO1_Ind36_t)

#define IEDMODEL_GenericIO_GGIO1_Ind37 (&iedModel_GenericIO_GGIO1_Ind37)
#define IEDMODEL_GenericIO_GGIO1_Ind37_stVal (&iedModel_GenericIO_GGIO1_Ind37_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind37_q (&iedModel_GenericIO_GGIO1_Ind37_q)
#define IEDMODEL_GenericIO_GGIO1_Ind37_t (&iedModel_GenericIO_GGIO1_Ind37_t)

#define IEDMODEL_GenericIO_GGIO1_Ind38 (&iedModel_GenericIO_GGIO1_Ind38)
#define IEDMODEL_GenericIO_GGIO1_Ind38_stVal (&iedModel_GenericIO_GGIO1_Ind38_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind38_q (&iedModel_GenericIO_GGIO1_Ind38_q)
#define IEDMODEL_GenericIO_GGIO1_Ind38_t (&iedModel_GenericIO_GGIO1_Ind38_t)

#define IEDMODEL_GenericIO_GGIO1_Ind39 (&iedModel_GenericIO_GGIO1_Ind39)
#define IEDMODEL_GenericIO_GGIO1_Ind39_stVal (&iedModel_GenericIO_GGIO1_Ind39_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind39_q (&iedModel_GenericIO_GGIO1_Ind39_q)
#define IEDMODEL_GenericIO_GGIO1_Ind39_t (&iedModel_GenericIO_GGIO1_Ind39_t)

#define IEDMODEL_GenericIO_GGIO1_Ind40 (&iedModel_GenericIO_GGIO1_Ind40)
#define IEDMODEL_GenericIO_GGIO1_Ind40_stVal (&iedModel_GenericIO_GGIO1_Ind40_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind40_q (&iedModel_GenericIO_GGIO1_Ind40_q)
#define IEDMODEL_GenericIO_GGIO1_Ind40_t (&iedModel_GenericIO_GGIO1_Ind40_t)

/****************************************************************************************************
 *
 ****************************************************************************************************/
#define IEDMODEL_GenericIO_MMXU1 (&iedModel_GenericIO_MMXU1)
#define IEDMODEL_GenericIO_MMXU1_Mod (&iedModel_GenericIO_MMXU1_Mod)
#define IEDMODEL_GenericIO_MMXU1_Mod_q (&iedModel_GenericIO_MMXU1_Mod_q)
#define IEDMODEL_GenericIO_MMXU1_Mod_t (&iedModel_GenericIO_MMXU1_Mod_t)
#define IEDMODEL_GenericIO_MMXU1_Mod_ctlModel (&iedModel_GenericIO_MMXU1_Mod_ctlModel)

#define IEDMODEL_GenericIO_MMXU1_Beh (&iedModel_GenericIO_MMXU1_Beh)
#define IEDMODEL_GenericIO_MMXU1_Beh_q (&iedModel_GenericIO_MMXU1_Beh_q)
#define IEDMODEL_GenericIO_MMXU1_Beh_t (&iedModel_GenericIO_MMXU1_Beh_t)
#define IEDMODEL_GenericIO_MMXU1_Beh_stVal (&iedModel_GenericIO_MMXU1_Beh_stVal)

#define IEDMODEL_GenericIO_MMXU1_Health (&iedModel_GenericIO_MMXU1_Health)
#define IEDMODEL_GenericIO_MMXU1_Health_q (&iedModel_GenericIO_MMXU1_Health_q)
#define IEDMODEL_GenericIO_MMXU1_Health_t (&iedModel_GenericIO_MMXU1_Health_t)
#define IEDMODEL_GenericIO_MMXU1_Health_stVal (&iedModel_GenericIO_MMXU1_Health_stVal)

#define IEDMODEL_GenericIO_MMXU1_NamPlt (&iedModel_GenericIO_MMXU1_NamPlt)
#define IEDMODEL_GenericIO_MMXU1_NamPlt_d (&iedModel_GenericIO_MMXU1_NamPlt_d)
#define IEDMODEL_GenericIO_MMXU1_NamPlt_swRev (&iedModel_GenericIO_MMXU1_NamPlt_swRev)
#define IEDMODEL_GenericIO_MMXU1_NamPlt_vendor (&iedModel_GenericIO_MMXU1_NamPlt_vendor)

#define IEDMODEL_GenericIO_MMXU1_A (&iedModel_GenericIO_MMXU1_A)
#define IEDMODEL_GenericIO_MMXU1_A_phsA (&iedModel_GenericIO_MMXU1_A_phsA)
#define IEDMODEL_GenericIO_MMXU1_A_phsA_cVal (&iedModel_GenericIO_MMXU1_A_phsA_cVal)
#define IEDMODEL_GenericIO_MMXU1_A_phsA_cVal_mag (&iedModel_GenericIO_MMXU1_A_phsA_cVal_mag)
#define IEDMODEL_GenericIO_MMXU1_A_phsA_cVal_mag_f (&iedModel_GenericIO_MMXU1_A_phsA_cVal_mag_f)
#define IEDMODEL_GenericIO_MMXU1_A_phsA_q (&iedModel_GenericIO_MMXU1_A_phsA_q)
#define IEDMODEL_GenericIO_MMXU1_A_phsA_t (&iedModel_GenericIO_MMXU1_A_phsA_t)

#define IEDMODEL_GenericIO_MMXU1_A (&iedModel_GenericIO_MMXU1_A)
#define IEDMODEL_GenericIO_MMXU1_A_phsB (&iedModel_GenericIO_MMXU1_A_phsB)
#define IEDMODEL_GenericIO_MMXU1_A_phsB_cVal (&iedModel_GenericIO_MMXU1_A_phsB_cVal)
#define IEDMODEL_GenericIO_MMXU1_A_phsB_cVal_mag (&iedModel_GenericIO_MMXU1_A_phsB_cVal_mag)
#define IEDMODEL_GenericIO_MMXU1_A_phsB_cVal_mag_f (&iedModel_GenericIO_MMXU1_A_phsB_cVal_mag_f)
#define IEDMODEL_GenericIO_MMXU1_A_phsB_q (&iedModel_GenericIO_MMXU1_A_phsB_q)
#define IEDMODEL_GenericIO_MMXU1_A_phsB_t (&iedModel_GenericIO_MMXU1_A_phsB_t)

#define IEDMODEL_GenericIO_MMXU1_A (&iedModel_GenericIO_MMXU1_A)
#define IEDMODEL_GenericIO_MMXU1_A_phsC (&iedModel_GenericIO_MMXU1_A_phsC)
#define IEDMODEL_GenericIO_MMXU1_A_phsC_cVal (&iedModel_GenericIO_MMXU1_A_phsC_cVal)
#define IEDMODEL_GenericIO_MMXU1_A_phsC_cVal_mag (&iedModel_GenericIO_MMXU1_A_phsC_cVal_mag)
#define IEDMODEL_GenericIO_MMXU1_A_phsC_cVal_mag_f (&iedModel_GenericIO_MMXU1_A_phsC_cVal_mag_f)
#define IEDMODEL_GenericIO_MMXU1_A_phsC_q (&iedModel_GenericIO_MMXU1_A_phsC_q)
#define IEDMODEL_GenericIO_MMXU1_A_phsC_t (&iedModel_GenericIO_MMXU1_A_phsC_t)


#define IEDMODEL_GenericIO_MMXU1_A1 (&iedModel_GenericIO_MMXU1_A1)
#define IEDMODEL_GenericIO_MMXU1_A1_phsA (&iedModel_GenericIO_MMXU1_A1_phsA)
#define IEDMODEL_GenericIO_MMXU1_A1_phsA_cVal (&iedModel_GenericIO_MMXU1_A1_phsA_cVal)
#define IEDMODEL_GenericIO_MMXU1_A1_phsA_cVal_mag (&iedModel_GenericIO_MMXU1_A1_phsA_cVal_mag)
#define IEDMODEL_GenericIO_MMXU1_A1_phsA_cVal_mag_i (&iedModel_GenericIO_MMXU1_A1_phsA_cVal_mag_i)
#define IEDMODEL_GenericIO_MMXU1_A1_phsA_q (&iedModel_GenericIO_MMXU1_A1_phsA_q)
#define IEDMODEL_GenericIO_MMXU1_A1_phsA_t (&iedModel_GenericIO_MMXU1_A1_phsA_t)

#define IEDMODEL_GenericIO_MMXU1_phV (&iedModel_GenericIO_MMXU1_phV)
#define IEDMODEL_GenericIO_MMXU1_phV_phsA (&iedModel_GenericIO_MMXU1_phV_phsA)
#define IEDMODEL_GenericIO_MMXU1_phV_phsA_cVal (&iedModel_GenericIO_MMXU1_phV_phsA_cVal)
#define IEDMODEL_GenericIO_MMXU1_phV_phsA_cVal_mag (&iedModel_GenericIO_MMXU1_phV_phsA_cVal_mag)
#define IEDMODEL_GenericIO_MMXU1_phV_phsA_cVal_mag_f (&iedModel_GenericIO_MMXU1_phV_phsA_cVal_mag_f)
#define IEDMODEL_GenericIO_MMXU1_phV_phsA_q (&iedModel_GenericIO_MMXU1_phV_phsA_q)
#define IEDMODEL_GenericIO_MMXU1_phV_phsA_t (&iedModel_GenericIO_MMXU1_phV_phsA_t)
#define IEDMODEL_GenericIO_MMXU1_phV_phsB (&iedModel_GenericIO_MMXU1_phV_phsB)
#define IEDMODEL_GenericIO_MMXU1_phV_phsB_cVal (&iedModel_GenericIO_MMXU1_phV_phsB_cVal)
#define IEDMODEL_GenericIO_MMXU1_phV_phsB_cVal_mag (&iedModel_GenericIO_MMXU1_phV_phsB_cVal_mag)
#define IEDMODEL_GenericIO_MMXU1_phV_phsB_cVal_mag_f (&iedModel_GenericIO_MMXU1_phV_phsB_cVal_mag_f)
#define IEDMODEL_GenericIO_MMXU1_phV_phsB_q (&iedModel_GenericIO_MMXU1_phV_phsB_q)
#define IEDMODEL_GenericIO_MMXU1_phV_phsB_t (&iedModel_GenericIO_MMXU1_phV_phsB_t)
#define IEDMODEL_GenericIO_MMXU1_phV_phsC (&iedModel_GenericIO_MMXU1_phV_phsC)
#define IEDMODEL_GenericIO_MMXU1_phV_phsC_cVal (&iedModel_GenericIO_MMXU1_phV_phsC_cVal)
#define IEDMODEL_GenericIO_MMXU1_phV_phsC_cVal_mag (&iedModel_GenericIO_MMXU1_phV_phsC_cVal_mag)
#define IEDMODEL_GenericIO_MMXU1_phV_phsC_cVal_mag_f (&iedModel_GenericIO_MMXU1_phV_phsC_cVal_mag_f)
#define IEDMODEL_GenericIO_MMXU1_phV_phsC_q (&iedModel_GenericIO_MMXU1_phV_phsC_q)
#define IEDMODEL_GenericIO_MMXU1_phV_phsC_t (&iedModel_GenericIO_MMXU1_phV_phsC_t)


#define IEDMODEL_GenericIO_MMXU1_PPV (&iedModel_GenericIO_MMXU1_PPV)
#define IEDMODEL_GenericIO_MMXU1_PPV_phsA (&iedModel_GenericIO_MMXU1_PPV_phsA)
#define IEDMODEL_GenericIO_MMXU1_PPV_phsA_cVal (&iedModel_GenericIO_MMXU1_PPV_phsA_cVal)
#define IEDMODEL_GenericIO_MMXU1_PPV_phsA_cVal_mag (&iedModel_GenericIO_MMXU1_PPV_phsA_cVal_mag)
#define IEDMODEL_GenericIO_MMXU1_PPV_phsA_cVal_mag_f (&iedModel_GenericIO_MMXU1_PPV_phsA_cVal_mag_f)
#define IEDMODEL_GenericIO_MMXU1_PPV_phsA_q (&iedModel_GenericIO_MMXU1_PPV_phsA_q)
#define IEDMODEL_GenericIO_MMXU1_PPV_phsA_t (&iedModel_GenericIO_MMXU1_PPV_phsA_t)
#define IEDMODEL_GenericIO_MMXU1_PPV_phsB (&iedModel_GenericIO_MMXU1_PPV_phsB)
#define IEDMODEL_GenericIO_MMXU1_PPV_phsB_cVal (&iedModel_GenericIO_MMXU1_PPV_phsB_cVal)
#define IEDMODEL_GenericIO_MMXU1_PPV_phsB_cVal_mag (&iedModel_GenericIO_MMXU1_PPV_phsB_cVal_mag)
#define IEDMODEL_GenericIO_MMXU1_PPV_phsB_cVal_mag_f (&iedModel_GenericIO_MMXU1_PPV_phsB_cVal_mag_f)
#define IEDMODEL_GenericIO_MMXU1_PPV_phsB_q (&iedModel_GenericIO_MMXU1_PPV_phsB_q)
#define IEDMODEL_GenericIO_MMXU1_PPV_phsB_t (&iedModel_GenericIO_MMXU1_PPV_phsB_t)
#define IEDMODEL_GenericIO_MMXU1_PPV_phsC (&iedModel_GenericIO_MMXU1_PPV_phsC)
#define IEDMODEL_GenericIO_MMXU1_PPV_phsC_cVal (&iedModel_GenericIO_MMXU1_PPV_phsC_cVal)
#define IEDMODEL_GenericIO_MMXU1_PPV_phsC_cVal_mag (&iedModel_GenericIO_MMXU1_PPV_phsC_cVal_mag)
#define IEDMODEL_GenericIO_MMXU1_PPV_phsC_cVal_mag_f (&iedModel_GenericIO_MMXU1_PPV_phsC_cVal_mag_f)
#define IEDMODEL_GenericIO_MMXU1_PPV_phsC_q (&iedModel_GenericIO_MMXU1_PPV_phsC_q)
#define IEDMODEL_GenericIO_MMXU1_PPV_phsC_t (&iedModel_GenericIO_MMXU1_PPV_phsC_t)

#define IEDMODEL_GenericIO_MMXU1_totW (&iedModel_GenericIO_MMXU1_totW)
#define IEDMODEL_GenericIO_MMXU1_totW_mag (&iedModel_GenericIO_MMXU1_totW_mag)
#define IEDMODEL_GenericIO_MMXU1_totW_mag_f (&iedModel_GenericIO_MMXU1_totW_mag_f)
#define IEDMODEL_GenericIO_MMXU1_totW_q (&iedModel_GenericIO_MMXU1_totW_q)
#define IEDMODEL_GenericIO_MMXU1_totW_t (&iedModel_GenericIO_MMXU1_totW_t)
#define IEDMODEL_GenericIO_MMXU1_totW_db (&iedModel_GenericIO_MMXU1_totW_db)
#define IEDMODEL_GenericIO_MMXU1_totW_zeroDb (&iedModel_GenericIO_MMXU1_totW_zeroDb)

#define IEDMODEL_GenericIO_MMXU1_totVAr (&iedModel_GenericIO_MMXU1_totVAr)
#define IEDMODEL_GenericIO_MMXU1_totVAr_mag (&iedModel_GenericIO_MMXU1_totVAr_mag)
#define IEDMODEL_GenericIO_MMXU1_totVAr_mag_f (&iedModel_GenericIO_MMXU1_totVAr_mag_f)
#define IEDMODEL_GenericIO_MMXU1_totVAr_q (&iedModel_GenericIO_MMXU1_totVAr_q)
#define IEDMODEL_GenericIO_MMXU1_totVAr_t (&iedModel_GenericIO_MMXU1_totVAr_t)
#define IEDMODEL_GenericIO_MMXU1_totVAr_db (&iedModel_GenericIO_MMXU1_totVAr_db)
#define IEDMODEL_GenericIO_MMXU1_totVAr_zeroDb (&iedModel_GenericIO_MMXU1_totVAr_zeroDb)


#define IEDMODEL_GenericIO_MMXU1_totPF (&iedModel_GenericIO_MMXU1_totPF)
#define IEDMODEL_GenericIO_MMXU1_totPF_mag (&iedModel_GenericIO_MMXU1_totPF_mag)
#define IEDMODEL_GenericIO_MMXU1_totPF_mag_f (&iedModel_GenericIO_MMXU1_totPF_mag_f)
#define IEDMODEL_GenericIO_MMXU1_totPF_q (&iedModel_GenericIO_MMXU1_totPF_q)
#define IEDMODEL_GenericIO_MMXU1_totPF_t (&iedModel_GenericIO_MMXU1_totPF_t)
#define IEDMODEL_GenericIO_MMXU1_totPF_db (&iedModel_GenericIO_MMXU1_totPF_db)
#define IEDMODEL_GenericIO_MMXU1_totPF_zeroDb (&iedModel_GenericIO_MMXU1_totPF_zeroDb)

#define IEDMODEL_GenericIO_MMXU1_Hz (&iedModel_GenericIO_MMXU1_Hz)
#define IEDMODEL_GenericIO_MMXU1_Hz_mag (&iedModel_GenericIO_MMXU1_Hz_mag)
#define IEDMODEL_GenericIO_MMXU1_Hz_mag_f (&iedModel_GenericIO_MMXU1_Hz_mag_f)
#define IEDMODEL_GenericIO_MMXU1_Hz_q (&iedModel_GenericIO_MMXU1_Hz_q)
#define IEDMODEL_GenericIO_MMXU1_Hz_t (&iedModel_GenericIO_MMXU1_Hz_t)
#define IEDMODEL_GenericIO_MMXU1_Hz_db (&iedModel_GenericIO_MMXU1_Hz_db)
#define IEDMODEL_GenericIO_MMXU1_Hz_zeroDb (&iedModel_GenericIO_MMXU1_Hz_zeroDb)

/****************************************************************************************************
 *
 ****************************************************************************************************/
#define IEDMODEL_GenericIO_PTOC1 (&iedModel_GenericIO_PTOC1)
#define IEDMODEL_GenericIO_PTOC1_Mod (&iedModel_GenericIO_PTOC1_Mod)
#define IEDMODEL_GenericIO_PTOC1_Mod_q (&iedModel_GenericIO_PTOC1_Mod_q)
#define IEDMODEL_GenericIO_PTOC1_Mod_t (&iedModel_GenericIO_PTOC1_Mod_t)
#define IEDMODEL_GenericIO_PTOC1_Mod_ctlModel (&iedModel_GenericIO_PTOC1_Mod_ctlModel)

#define IEDMODEL_GenericIO_PTOC1_Beh (&iedModel_GenericIO_PTOC1_Beh)
#define IEDMODEL_GenericIO_PTOC1_Beh_q (&iedModel_GenericIO_PTOC1_Beh_q)
#define IEDMODEL_GenericIO_PTOC1_Beh_t (&iedModel_GenericIO_PTOC1_Beh_t)
#define IEDMODEL_GenericIO_PTOC1_Beh_stVal (&iedModel_GenericIO_PTOC1_Beh_stVal)

#define IEDMODEL_GenericIO_PTOC1_Health (&iedModel_GenericIO_PTOC1_Health)
#define IEDMODEL_GenericIO_PTOC1_Health_q (&iedModel_GenericIO_PTOC1_Health_q)
#define IEDMODEL_GenericIO_PTOC1_Health_t (&iedModel_GenericIO_PTOC1_Health_t)
#define IEDMODEL_GenericIO_PTOC1_Health_stVal (&iedModel_GenericIO_PTOC1_Health_stVal)

#define IEDMODEL_GenericIO_PTOC1_NamPlt (&iedModel_GenericIO_PTOC1_NamPlt)
#define IEDMODEL_GenericIO_PTOC1_NamPlt_d (&iedModel_GenericIO_PTOC1_NamPlt_d)
#define IEDMODEL_GenericIO_PTOC1_NamPlt_swRev (&iedModel_GenericIO_PTOC1_NamPlt_swRev)
#define IEDMODEL_GenericIO_PTOC1_NamPlt_vendor (&iedModel_GenericIO_PTOC1_NamPlt_vendor)

#define IEDMODEL_GenericIO_PTOC1_Str (&iedModel_GenericIO_PTOC1_Str)
#define IEDMODEL_GenericIO_PTOC1_Str_general (&iedModel_GenericIO_PTOC1_Str_general)
#define IEDMODEL_GenericIO_PTOC1_Str_dirGeneral (&iedModel_GenericIO_PTOC1_Str_dirGeneral)
#define IEDMODEL_GenericIO_PTOC1_Str_q (&iedModel_GenericIO_PTOC1_Str_q)
#define IEDMODEL_GenericIO_PTOC1_Str_t (&iedModel_GenericIO_PTOC1_Str_t)

#define IEDMODEL_GenericIO_PTOC1_Op (&iedModel_GenericIO_PTOC1_Op)
#define IEDMODEL_GenericIO_PTOC1_Op_general (&iedModel_GenericIO_PTOC1_Op_general)
#define IEDMODEL_GenericIO_PTOC1_Op_q (&iedModel_GenericIO_PTOC1_Op_q)
#define IEDMODEL_GenericIO_PTOC1_Op_t (&iedModel_GenericIO_PTOC1_Op_t)

/****************************************************************************************************
 *
 ****************************************************************************************************/
#define IEDMODEL_GenericIO_CSWI1 (&iedModel_GenericIO_CSWI1)
#define IEDMODEL_GenericIO_CSWI1_Mod (&iedModel_GenericIO_CSWI1_Mod)
#define IEDMODEL_GenericIO_CSWI1_Mod_q (&iedModel_GenericIO_CSWI1_Mod_q)
#define IEDMODEL_GenericIO_CSWI1_Mod_t (&iedModel_GenericIO_CSWI1_Mod_t)
#define IEDMODEL_GenericIO_CSWI1_Mod_stVal (&iedModel_GenericIO_CSWI1_Mod_stVal)
#define IEDMODEL_GenericIO_CSWI1_Mod_ctlModel (&iedModel_GenericIO_CSWI1_Mod_ctlModel)

#define IEDMODEL_GenericIO_CSWI1_Beh (&iedModel_GenericIO_CSWI1_Beh)
#define IEDMODEL_GenericIO_CSWI1_Beh_q (&iedModel_GenericIO_CSWI1_Beh_q)
#define IEDMODEL_GenericIO_CSWI1_Beh_t (&iedModel_GenericIO_CSWI1_Beh_t)
#define IEDMODEL_GenericIO_CSWI1_Beh_stVal (&iedModel_GenericIO_CSWI1_Beh_stVal)

#define IEDMODEL_GenericIO_CSWI1_Health (&iedModel_GenericIO_CSWI1_Health)
#define IEDMODEL_GenericIO_CSWI1_Health_q (&iedModel_GenericIO_CSWI1_Health_q)
#define IEDMODEL_GenericIO_CSWI1_Health_t (&iedModel_GenericIO_CSWI1_Health_t)
#define IEDMODEL_GenericIO_CSWI1_Health_stVal (&iedModel_GenericIO_CSWI1_Health_stVal)

#define IEDMODEL_GenericIO_CSWI1_NamPlt (&iedModel_GenericIO_CSWI1_NamPlt)
#define IEDMODEL_GenericIO_CSWI1_NamPlt_d (&iedModel_GenericIO_CSWI1_NamPlt_d)
#define IEDMODEL_GenericIO_CSWI1_NamPlt_swRev (&iedModel_GenericIO_CSWI1_NamPlt_swRev)
#define IEDMODEL_GenericIO_CSWI1_NamPlt_vendor (&iedModel_GenericIO_CSWI1_NamPlt_vendor)


#define IEDMODEL_GenericIO_CSWI1_Pos (&iedModel_GenericIO_CSWI1_Pos)
#define IEDMODEL_GenericIO_CSWI1_Pos_stVal (&iedModel_GenericIO_CSWI1_Pos_stVal)
#define IEDMODEL_GenericIO_CSWI1_Pos_q (&iedModel_GenericIO_CSWI1_Pos_q)
#define IEDMODEL_GenericIO_CSWI1_Pos_t (&iedModel_GenericIO_CSWI1_Pos_t)
#define IEDMODEL_GenericIO_CSWI1_Pos_ctlModel (&iedModel_GenericIO_CSWI1_Pos_ctlModel)
#define IEDMODEL_GenericIO_CSWI1_Pos_Oper (&iedModel_GenericIO_CSWI1_Pos_Oper)
#define IEDMODEL_GenericIO_CSWI1_Pos_Oper_ctlVal (&iedModel_GenericIO_CSWI1_Pos_Oper_ctlVal)
#define IEDMODEL_GenericIO_CSWI1_Pos_Oper_origin (&iedModel_GenericIO_CSWI1_Pos_Oper_origin)
#define IEDMODEL_GenericIO_CSWI1_Pos_Oper_origin_orCat (&iedModel_GenericIO_CSWI1_Pos_Oper_origin_orCat)
#define IEDMODEL_GenericIO_CSWI1_Pos_Oper_origin_orIdent (&iedModel_GenericIO_CSWI1_Pos_Oper_origin_orIdent)
#define IEDMODEL_GenericIO_CSWI1_Pos_Oper_ctlNum (&iedModel_GenericIO_CSWI1_Pos_Oper_ctlNum)
#define IEDMODEL_GenericIO_CSWI1_Pos_Oper_T (&iedModel_GenericIO_CSWI1_Pos_Oper_T)
#define IEDMODEL_GenericIO_CSWI1_Pos_Oper_Test (&iedModel_GenericIO_CSWI1_Pos_Oper_Test)
#define IEDMODEL_GenericIO_CSWI1_Pos_Oper_Check (&iedModel_GenericIO_CSWI1_Pos_Oper_Check)

/****************************************************************************************************
 * XCBR1
 ****************************************************************************************************/

#define IEDMODEL_GenericIO_XCBR1_Mod (&iedModel_GenericIO_XCBR1_Mod)
#define IEDMODEL_GenericIO_XCBR1_Mod_Oper (&iedModel_GenericIO_XCBR1_Mod_Oper)


#define IEDMODEL_GenericIO_XCBR1_Pos (&iedModel_GenericIO_XCBR1_Pos)
#define IEDMODEL_GenericIO_XCBR1_Pos_stVal (&iedModel_GenericIO_XCBR1_Pos_stVal)
#define IEDMODEL_GenericIO_XCBR1_Pos_q (&iedModel_GenericIO_XCBR1_Pos_q)
#define IEDMODEL_GenericIO_XCBR1_Pos_t (&iedModel_GenericIO_XCBR1_Pos_t)
#define IEDMODEL_GenericIO_XCBR1_Pos_ctlModel (&iedModel_GenericIO_XCBR1_Pos_ctlModel)

#define IEDMODEL_GenericIO_XCBR1_Loc (&iedModel_GenericIO_XCBR1_Loc)
#define IEDMODEL_GenericIO_XCBR1_Loc_stVal (&iedModel_GenericIO_XCBR1_Loc_stVal)
#define IEDMODEL_GenericIO_XCBR1_Loc_q (&iedModel_GenericIO_XCBR1_Loc_q)
#define IEDMODEL_GenericIO_XCBR1_Loc_t (&iedModel_GenericIO_XCBR1_Loc_t)


/****************************************************************************************************
 * PDIS1
 ****************************************************************************************************/
#define IEDMODEL_GenericIO_PDIS1 (&iedModel_GenericIO_PDIS1)
#define IEDMODEL_GenericIO_PDIS1_Mod (&iedModel_GenericIO_PDIS1_Mod)
#define IEDMODEL_GenericIO_PDIS1_Mod_q (&iedModel_GenericIO_PDIS1_Mod_q)
#define IEDMODEL_GenericIO_PDIS1_Mod_t (&iedModel_GenericIO_PDIS1_Mod_t)
#define IEDMODEL_GenericIO_PDIS1_Mod_ctlModel (&iedModel_GenericIO_PDIS1_Mod_ctlModel)

#define IEDMODEL_GenericIO_PDIS1_Beh (&iedModel_GenericIO_PDIS1_Beh)
#define IEDMODEL_GenericIO_PDIS1_Beh_q (&iedModel_GenericIO_PDIS1_Beh_q)
#define IEDMODEL_GenericIO_PDIS1_Beh_t (&iedModel_GenericIO_PDIS1_Beh_t)
#define IEDMODEL_GenericIO_PDIS1_Beh_stVal (&iedModel_GenericIO_PDIS1_Beh_stVal)

#define IEDMODEL_GenericIO_PDIS1_Health (&iedModel_GenericIO_PDIS1_Health)
#define IEDMODEL_GenericIO_PDIS1_Health_q (&iedModel_GenericIO_PDIS1_Health_q)
#define IEDMODEL_GenericIO_PDIS1_Health_t (&iedModel_GenericIO_PDIS1_Health_t)
#define IEDMODEL_GenericIO_PDIS1_Health_stVal (&iedModel_GenericIO_PDIS1_Health_stVal)

#define IEDMODEL_GenericIO_PDIS1_NamPlt (&iedModel_GenericIO_PDIS1_NamPlt)
#define IEDMODEL_GenericIO_PDIS1_NamPlt_d (&iedModel_GenericIO_PDIS1_NamPlt_d)
#define IEDMODEL_GenericIO_PDIS1_NamPlt_swRev (&iedModel_GenericIO_PDIS1_NamPlt_swRev)
#define IEDMODEL_GenericIO_PDIS1_NamPlt_vendor (&iedModel_GenericIO_PDIS1_NamPlt_vendor)

#define IEDMODEL_GenericIO_PDIS1_Str (&iedModel_GenericIO_PDIS1_Str)
#define IEDMODEL_GenericIO_PDIS1_Str_general (&iedModel_GenericIO_PDIS1_Str_general)
#define IEDMODEL_GenericIO_PDIS1_Str_dirGeneral (&iedModel_GenericIO_PDIS1_Str_dirGeneral)
#define IEDMODEL_GenericIO_PDIS1_Str_q (&iedModel_GenericIO_PDIS1_Str_q)
#define IEDMODEL_GenericIO_PDIS1_Str_t (&iedModel_GenericIO_PDIS1_Str_t)

#define IEDMODEL_GenericIO_PDIS1_Op (&iedModel_GenericIO_PDIS1_Op)
#define IEDMODEL_GenericIO_PDIS1_Op_general (&iedModel_GenericIO_PDIS1_Op_general)
#define IEDMODEL_GenericIO_PDIS1_Op_q (&iedModel_GenericIO_PDIS1_Op_q)
#define IEDMODEL_GenericIO_PDIS1_Op_t (&iedModel_GenericIO_PDIS1_Op_t)
/****************************************************************************************************
 * PDIS2
 ****************************************************************************************************/
#define IEDMODEL_GenericIO_PDIS2 (&iedModel_GenericIO_PDIS2)
#define IEDMODEL_GenericIO_PDIS2_Mod (&iedModel_GenericIO_PDIS2_Mod)
#define IEDMODEL_GenericIO_PDIS2_Mod_q (&iedModel_GenericIO_PDIS2_Mod_q)
#define IEDMODEL_GenericIO_PDIS2_Mod_t (&iedModel_GenericIO_PDIS2_Mod_t)
#define IEDMODEL_GenericIO_PDIS2_Mod_ctlModel (&iedModel_GenericIO_PDIS2_Mod_ctlModel)

#define IEDMODEL_GenericIO_PDIS2_Beh (&iedModel_GenericIO_PDIS2_Beh)
#define IEDMODEL_GenericIO_PDIS2_Beh_q (&iedModel_GenericIO_PDIS2_Beh_q)
#define IEDMODEL_GenericIO_PDIS2_Beh_t (&iedModel_GenericIO_PDIS2_Beh_t)
#define IEDMODEL_GenericIO_PDIS2_Beh_stVal (&iedModel_GenericIO_PDIS2_Beh_stVal)

#define IEDMODEL_GenericIO_PDIS2_Health (&iedModel_GenericIO_PDIS2_Health)
#define IEDMODEL_GenericIO_PDIS2_Health_q (&iedModel_GenericIO_PDIS2_Health_q)
#define IEDMODEL_GenericIO_PDIS2_Health_t (&iedModel_GenericIO_PDIS2_Health_t)
#define IEDMODEL_GenericIO_PDIS2_Health_stVal (&iedModel_GenericIO_PDIS2_Health_stVal)

#define IEDMODEL_GenericIO_PDIS2_NamPlt (&iedModel_GenericIO_PDIS2_NamPlt)
#define IEDMODEL_GenericIO_PDIS2_NamPlt_d (&iedModel_GenericIO_PDIS2_NamPlt_d)
#define IEDMODEL_GenericIO_PDIS2_NamPlt_swRev (&iedModel_GenericIO_PDIS2_NamPlt_swRev)
#define IEDMODEL_GenericIO_PDIS2_NamPlt_vendor (&iedModel_GenericIO_PDIS2_NamPlt_vendor)

#define IEDMODEL_GenericIO_PDIS2_Str (&iedModel_GenericIO_PDIS2_Str)
#define IEDMODEL_GenericIO_PDIS2_Str_general (&iedModel_GenericIO_PDIS2_Str_general)
#define IEDMODEL_GenericIO_PDIS2_Str_dirGeneral (&iedModel_GenericIO_PDIS2_Str_dirGeneral)
#define IEDMODEL_GenericIO_PDIS2_Str_q (&iedModel_GenericIO_PDIS2_Str_q)
#define IEDMODEL_GenericIO_PDIS2_Str_t (&iedModel_GenericIO_PDIS2_Str_t)

#define IEDMODEL_GenericIO_PDIS2_Op (&iedModel_GenericIO_PDIS2_Op)
#define IEDMODEL_GenericIO_PDIS2_Op_general (&iedModel_GenericIO_PDIS2_Op_general)
#define IEDMODEL_GenericIO_PDIS2_Op_q (&iedModel_GenericIO_PDIS2_Op_q)
#define IEDMODEL_GenericIO_PDIS2_Op_t (&iedModel_GenericIO_PDIS2_Op_t)
/****************************************************************************************************
 * PDIS3
 ****************************************************************************************************/
#define IEDMODEL_GenericIO_PDIS3 (&iedModel_GenericIO_PDIS3)
#define IEDMODEL_GenericIO_PDIS3_Mod (&iedModel_GenericIO_PDIS3_Mod)
#define IEDMODEL_GenericIO_PDIS3_Mod_q (&iedModel_GenericIO_PDIS3_Mod_q)
#define IEDMODEL_GenericIO_PDIS3_Mod_t (&iedModel_GenericIO_PDIS3_Mod_t)
#define IEDMODEL_GenericIO_PDIS3_Mod_ctlModel (&iedModel_GenericIO_PDIS3_Mod_ctlModel)

#define IEDMODEL_GenericIO_PDIS3_Beh (&iedModel_GenericIO_PDIS3_Beh)
#define IEDMODEL_GenericIO_PDIS3_Beh_q (&iedModel_GenericIO_PDIS3_Beh_q)
#define IEDMODEL_GenericIO_PDIS3_Beh_t (&iedModel_GenericIO_PDIS3_Beh_t)
#define IEDMODEL_GenericIO_PDIS3_Beh_stVal (&iedModel_GenericIO_PDIS3_Beh_stVal)

#define IEDMODEL_GenericIO_PDIS3_Health (&iedModel_GenericIO_PDIS3_Health)
#define IEDMODEL_GenericIO_PDIS3_Health_q (&iedModel_GenericIO_PDIS3_Health_q)
#define IEDMODEL_GenericIO_PDIS3_Health_t (&iedModel_GenericIO_PDIS3_Health_t)
#define IEDMODEL_GenericIO_PDIS3_Health_stVal (&iedModel_GenericIO_PDIS3_Health_stVal)

#define IEDMODEL_GenericIO_PDIS3_NamPlt (&iedModel_GenericIO_PDIS3_NamPlt)
#define IEDMODEL_GenericIO_PDIS3_NamPlt_d (&iedModel_GenericIO_PDIS3_NamPlt_d)
#define IEDMODEL_GenericIO_PDIS3_NamPlt_swRev (&iedModel_GenericIO_PDIS3_NamPlt_swRev)
#define IEDMODEL_GenericIO_PDIS3_NamPlt_vendor (&iedModel_GenericIO_PDIS3_NamPlt_vendor)

#define IEDMODEL_GenericIO_PDIS3_Str (&iedModel_GenericIO_PDIS3_Str)
#define IEDMODEL_GenericIO_PDIS3_Str_general (&iedModel_GenericIO_PDIS3_Str_general)
#define IEDMODEL_GenericIO_PDIS3_Str_dirGeneral (&iedModel_GenericIO_PDIS3_Str_dirGeneral)
#define IEDMODEL_GenericIO_PDIS3_Str_q (&iedModel_GenericIO_PDIS3_Str_q)
#define IEDMODEL_GenericIO_PDIS3_Str_t (&iedModel_GenericIO_PDIS3_Str_t)

#define IEDMODEL_GenericIO_PDIS3_Op (&iedModel_GenericIO_PDIS3_Op)
#define IEDMODEL_GenericIO_PDIS3_Op_general (&iedModel_GenericIO_PDIS3_Op_general)
#define IEDMODEL_GenericIO_PDIS3_Op_q (&iedModel_GenericIO_PDIS3_Op_q)
#define IEDMODEL_GenericIO_PDIS3_Op_t (&iedModel_GenericIO_PDIS3_Op_t)

#endif /* STATIC_MODEL_MR771_H_ */

