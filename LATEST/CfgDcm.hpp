#pragma once
/******************************************************************************/
/* File   : CfgDcm.hpp                                                        */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgModule.hpp"
#include "CompilerCfg_CfgDcm.hpp"
#include "infDcmClient.hpp"

#if(STD_ON == _ReSIM)
#include <iostream>
using namespace std;
#else
#endif

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define Dcm_DevErrorDetect                                        DevErrorDetect
#define Dcm_InitCheck                                                     STD_ON

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      eStatus_OK                    = 0
   ,  eStatus_RoeNotAccepted        = 6
   ,  eStatus_PeriodicIdNotAccepted = 7
}TypeStatus;

typedef enum{
      eModeCommunication_NormEnaRxEnaTx = 0
   ,  eModeCommunication_NormEnaRxDisTx
   ,  eModeCommunication_NormDisRxEnaTx
   ,  eModeCommunication_NormDisRxDisTx
   ,  eModeCommunication_NmEnaRxEnaTx
   ,  eModeCommunication_NmEnaRxDisTx
   ,  eModeCommunication_NmDisRxEnaTx
   ,  eModeCommunication_NmDisRxDisTx
   ,  eModeCommunication_NormNmEnaRxEnaTx
   ,  eModeCommunication_NormNmEnaRxDisTx
   ,  eModeCommunication_NormNmDisRxEnaTx
   ,  eModeCommunication_NormNmDisRxDisTx
}TypeModeCommunication;

typedef enum{
      eReturnMemoryRead_OK = 0
   ,  eReturnMemoryRead_Pending
   ,  eReturnMemoryRead_Failed
   ,  eReturnMemoryRead_ForceRcrrp
}TypeReturnMemoryRead;

typedef enum{
      eReturnMemoryWrite_OK = 0
   ,  eReturnMemoryWrite_Pending
   ,  eReturnMemoryWrite_Failed
   ,  eReturnMemoryWrite_ForceRcrrp
}TypeReturnMemoryWrite;

typedef enum{
      eModeEcuStart_Cold = 0
   ,  eModeEcuStart_Warm
}TypeModeEcuStart;

typedef struct{
   uint16 IdConnection;
   uint16 AddressTester;
   uint8  IdService;
   uint8  IdSubFunc;
   bool   RequestReprograming;
   bool   ApplUpdated;
   bool   ResponseRequired;
}TypeConditionsProg;

typedef uint8        TypeItemMsg;
typedef TypeItemMsg* TypeMsg;
typedef uint32       TypeLenMsg;
typedef uint8        TypeIdContext;

typedef struct{
   uint8 TypeReq             : 1;
   uint8 suppressPosResponse : 1;
}TypeInfoMsgAdd;

#include "ComStackTypes.hpp" //TBD: move as per architecture

typedef struct{
   TypeMsg        reqData;
   TypeLenMsg     reqDataLen;
   TypeMsg        resData;
   TypeLenMsg     resDataLen;
   TypeInfoMsgAdd msgAddInfo;
   TypeLenMsg     resDataLenMax;
   TypeIdContext  idContext;
   TypeIdPdu      IdPduDcmRx;
}TypeMsgContext;

typedef enum{
      eStatusExtendedOp_Initial = 0
   ,  eStatusExtendedOp_Pending
   ,  eStatusExtendedOp_Cancel
   ,  eStatusExtendedOp_ForceRcrrpOk
   ,  eStatusExtendedOp_PosResponseSent
   ,  eStatusExtendedOp_PosResponseFailed
   ,  eStatusExtendedOp_NegResponseSent
   ,  eStatusExtendedOp_NegResponseFailed
}TypeStatusExtendedOp;

class CfgDcm_Type:
      public CfgModule_TypeAbstract
{
   public:
      const infDcmClient* gaptrDcmClients[59];
#if(STD_ON == _ReSIM)
      const string        lstrDcmClientNames[59];
#else
#endif
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
extern CONST(CfgDcm_Type, CFGDCM_CONFIG_DATA) PBcfgDcm;

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

