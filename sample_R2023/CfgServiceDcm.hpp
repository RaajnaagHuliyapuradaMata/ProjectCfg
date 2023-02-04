#pragma once
/******************************************************************************/
/* File   : NvM_BlocksNv_ServiceDcm.hpp                                       */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_ServiceDcm.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ServiceDcm_DevErrorDetect                                 DevErrorDetect
#define ServiceDcm_InitCheck                                              STD_ON

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
}NvM_BlocksNv_ServiceDcm_TypeStatus;

typedef enum{
      eModeServiceCommunication_NormEnaRxEnaTx = 0
   ,  eModeServiceCommunication_NormEnaRxDisTx
   ,  eModeServiceCommunication_NormDisRxEnaTx
   ,  eModeServiceCommunication_NormDisRxDisTx
   ,  eModeServiceCommunication_ServiceNmEnaRxEnaTx
   ,  eModeServiceCommunication_ServiceNmEnaRxDisTx
   ,  eModeServiceCommunication_ServiceNmDisRxEnaTx
   ,  eModeServiceCommunication_ServiceNmDisRxDisTx
   ,  eModeServiceCommunication_NormServiceNmEnaRxEnaTx
   ,  eModeServiceCommunication_NormServiceNmEnaRxDisTx
   ,  eModeServiceCommunication_NormServiceNmDisRxEnaTx
   ,  eModeServiceCommunication_NormServiceNmDisRxDisTx
}NvM_BlocksNv_ServiceDcm_TypeModeServiceCommunication;

typedef enum{
      eReturnMemoryRead_OK = 0
   ,  eReturnMemoryRead_Pending
   ,  eReturnMemoryRead_Failed
   ,  eReturnMemoryRead_ForceRcrrp
}NvM_BlocksNv_ServiceDcm_TypeReturnMemoryRead;

typedef enum{
      eReturnMemoryWrite_OK = 0
   ,  eReturnMemoryWrite_Pending
   ,  eReturnMemoryWrite_Failed
   ,  eReturnMemoryWrite_ForceRcrrp
}NvM_BlocksNv_ServiceDcm_TypeReturnMemoryWrite;

typedef enum{
      eModeEcuStart_Cold = 0
   ,  eModeEcuStart_Warm
}NvM_BlocksNv_ServiceDcm_TypeModeEcuStart;

typedef struct{
   uint16 IdConnection;
   uint16 AddressTester;
   uint8  IdService;
   uint8  IdSubFunc;
   bool   RequestReprograming;
   bool   ApplUpdated;
   bool   ResponseRequired;
}NvM_BlocksNv_ServiceDcm_TypeConditionsProg;

typedef uint8               NvM_BlocksNv_ServiceDcm_TypeItemMsg;
typedef NvM_BlocksNv_ServiceDcm_TypeItemMsg* NvM_BlocksNv_ServiceDcm_TypeMsg;
typedef uint32              NvM_BlocksNv_ServiceDcm_TypeLenMsg;
typedef uint8               NvM_BlocksNv_ServiceDcm_TypeIdContext;

typedef struct{
   uint8 TypeReq             : 1;
   uint8 suppressPosResponse : 1;
}NvM_BlocksNv_ServiceDcm_TypeInfoMsgAdd;

#include "ComStackTypes.hpp" //TBD: move as per architecture

typedef struct{
   NvM_BlocksNv_ServiceDcm_TypeMsg        reqData;
   NvM_BlocksNv_ServiceDcm_TypeLenMsg     reqDataLen;
   NvM_BlocksNv_ServiceDcm_TypeMsg        resData;
   NvM_BlocksNv_ServiceDcm_TypeLenMsg     resDataLen;
   NvM_BlocksNv_ServiceDcm_TypeInfoMsgAdd msgAddInfo;
   NvM_BlocksNv_ServiceDcm_TypeLenMsg     resDataLenMax;
   NvM_BlocksNv_ServiceDcm_TypeIdContext  idContext;
   TypeIdPdu             IdPduServiceDcmRx;
}TypeMsgContext;

typedef enum{
      eStatusExtendedOp_Initial = 0
   ,  eStatusExtendedOp_Pending
   ,  eStatusExtendedOp_McalCancel
   ,  eStatusExtendedOp_ForceRcrrpOk
   ,  eStatusExtendedOp_PosResponseSent
   ,  eStatusExtendedOp_PosResponseFailed
   ,  eStatusExtendedOp_NegResponseSent
   ,  eStatusExtendedOp_NegResponseFailed
}NvM_BlocksNv_ServiceDcm_TypeStatusExtendedOp;

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

