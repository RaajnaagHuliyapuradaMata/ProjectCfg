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
#define CFGDCM_AR_RELEASE_VERSION_MAJOR                                        4
#define CFGDCM_AR_RELEASE_VERSION_MINOR                                        3
#define Dcm_DevErrorDetect                                        DevErrorDetect
#define Dcm_InitCheck                                                     STD_ON

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CFGDCM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CFGDCM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CFGDCM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CFGDCM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      eStatus_OK                    = 0
   ,  eStatus_RoeNotAccepted        = 6
   ,  eStatus_PeriodicIdNotAccepted = 7
}CfgDcm_TypeStatus;

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
}CfgDcm_TypeModeCommunication;

typedef enum{
      eReturnMemoryRead_OK = 0
   ,  eReturnMemoryRead_Pending
   ,  eReturnMemoryRead_Failed
   ,  eReturnMemoryRead_ForceRcrrp
}CfgDcm_TypeReturnMemoryRead;

typedef enum{
      eReturnMemoryWrite_OK = 0
   ,  eReturnMemoryWrite_Pending
   ,  eReturnMemoryWrite_Failed
   ,  eReturnMemoryWrite_ForceRcrrp
}CfgDcm_TypeReturnMemoryWrite;

typedef enum{
      eModeEcuStart_Cold = 0
   ,  eModeEcuStart_Warm
}CfgDcm_TypeModeEcuStart;

typedef struct{
   uint16 IdConnection;
   uint16 AddressTester;
   uint8  IdService;
   uint8  IdSubFunc;
   bool   RequestReprograming;
   bool   ApplUpdated;
   bool   ResponseRequired;
}CfgDcm_TypeConditionsProg;

typedef uint8               CfgDcm_TypeItemMsg;
typedef CfgDcm_TypeItemMsg* CfgDcm_TypeMsg;
typedef uint32              CfgDcm_TypeLenMsg;
typedef uint8               CfgDcm_TypeIdContext;

typedef struct{
   uint8 TypeReq             : 1;
   uint8 suppressPosResponse : 1;
}CfgDcm_TypeInfoMsgAdd;

#include "ComStackTypes.hpp" //TBD: move as per architecture

typedef struct{
   CfgDcm_TypeMsg        reqData;
   CfgDcm_TypeLenMsg     reqDataLen;
   CfgDcm_TypeMsg        resData;
   CfgDcm_TypeLenMsg     resDataLen;
   CfgDcm_TypeInfoMsgAdd msgAddInfo;
   CfgDcm_TypeLenMsg     resDataLenMax;
   CfgDcm_TypeIdContext  idContext;
   TypeIdPdu             IdPduDcmRx;
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
}CfgDcm_TypeStatusExtendedOp;

class CfgDcm_Type:
      public CfgModule_TypeAbstract
{
   public:
      infDcmClient* aptrDcmClients[59];
#if(STD_ON == _ReSIM)
      string        astrDcmClientNames[59];
#else
#endif
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

