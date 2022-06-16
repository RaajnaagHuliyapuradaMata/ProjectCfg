#pragma once
/******************************************************************************/
/* File   : CfgPduR.hpp                                                       */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgModule.hpp"
#include "CompilerCfg_CfgPduR.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define PduR_DevErrorDetect                                       DevErrorDetect
#define PduR_InitCheck                                                    STD_ON
#define PDUR_VERSION_INFO_API                                     VersionInfoApi

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
//TBD: move to core_finctionalities
typedef enum{
      e_State_UnInit
   ,  e_State_Online
}TypeState;

typedef uint16 TypeId;
typedef TypeId TypeIdRoutingPathGroup;

typedef struct{
   uint32 bUpperModule            :1;
   uint32 bLowerModule            :1;
   uint32 bCommunicationInterface :1;
   uint32 bTransportProtocol      :1;
   uint32 bTransmit               :1;
   uint32 bTransmitTp             :1;
   uint32 bTxConfirmation         :1;
   uint32 bTxConfirmationTp       :1;
   uint32 bRxIndication           :1;
   uint32 bRxIndicationTp         :1;
   uint32 bCancelTransmit         :1;
   uint32 bCancelReceive          :1;
   uint32 bCopyTxData             :1;
   uint32 bCopyRxData             :1;
   uint32 bTriggerTransmit        :1;
   uint32 bReTransmition          :1;
   uint32 bStartOfReception       :1;
   uint32 bUseTag                 :1;
}TypeClient;

typedef struct{
   TypePdu *ptrSrc;
   TypePdu *ptrDst;
}TypeRoutingPath;

typedef struct{
   TypeIdRoutingPathGroup Id;
   uint16                 u16CntMaxRoutingPath;
   TypeRoutingPath        astGroup[];
}TypeRoutingPathGroup;

class CfgPduR_Type:
      public CfgModule_TypeAbstract
{
   piblic:
      TypeId Id;
      TypeClient           aptrClients[];
      uint16               u16CntMaxRoutingPathGroup;
      TypeRoutingPathGroup astGroups[];
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
extern CONST(CfgPduR_Type, CFGPDUR_CONFIG_DATA) PBcfgPduR;

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

