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

#include "infCanIf_Dcm.hpp"
#include "infCanTp_Dcm.hpp"
#include "infCryIf_Dcm.hpp"
#include "infEa_Dcm.hpp"
#include "infEthIf_Dcm.hpp"
#include "infFee_Dcm.hpp"
#include "infFrIf_Dcm.hpp"
#include "infFrTp_Dcm.hpp"
#include "infJ1939Tp_Dcm.hpp"
#include "infLinIf_Dcm.hpp"
#include "infLinTp_Dcm.hpp"
#include "infMemIf_Dcm.hpp"
#include "infWdgIf_Dcm.hpp"
#include "infAdc_Dcm.hpp"
#include "infCan_Dcm.hpp"
#include "infCry_Dcm.hpp"
#include "infDio_Dcm.hpp"
#include "infEep_Dcm.hpp"
#include "infEth_Dcm.hpp"
#include "infFls_Dcm.hpp"
#include "infFr_Dcm.hpp"
#include "infGpt_Dcm.hpp"
#include "infIcu_Dcm.hpp"
#include "infLin_Dcm.hpp"
#include "infMcu_Dcm.hpp"
#include "infOcu_Dcm.hpp"
#include "infPort_Dcm.hpp"
#include "infPwm_Dcm.hpp"
#include "infSpi_Dcm.hpp"
#include "infWdg_Dcm.hpp"
#include "infBswM_Dcm.hpp"
#include "infCanNm_Dcm.hpp"
#include "infCanSm_Dcm.hpp"
#include "infCom_Dcm.hpp"
#include "infComM_Dcm.hpp"
#include "infCsm_Dcm.hpp"
#include "infDcm_Dcm.hpp"
#include "infDem_Dcm.hpp"
#include "infDet_Dcm.hpp"
#include "infDlt_Dcm.hpp"
#include "infEcuM_Dcm.hpp"
#include "infFiM_Dcm.hpp"
#include "infFrNm_Dcm.hpp"
#include "infIpduM_Dcm.hpp"
#include "infNm_Dcm.hpp"
#include "infNvM_Dcm.hpp"
#include "infOs_Dcm.hpp"
#include "infPduR_Dcm.hpp"
#include "infSchM_Dcm.hpp"
#include "infSecOC_Dcm.hpp"
#include "infSokFm_Dcm.hpp"
#include "infStartUp_Dcm.hpp"
#include "infStbM_Dcm.hpp"
#include "infVkms_Dcm.hpp"
#include "infWdgM_Dcm.hpp"
#include "infRte_Dcm.hpp"
#include "infSwcApplFoc_Dcm.hpp"
#include "infSwcServiceEcuM_Dcm.hpp"
#include "infSwcServiceOs_Dcm.hpp"

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

