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

typedef struct{
   //TBD: bit fields?
   bool bUpperModule;
   bool bLowerModule;
   bool bCommunicationInterface;
   bool bTransportProtocol;
   bool bTransmit;
   bool bTransmitTp;
   bool bTxConfirmation;
   bool bTxConfirmationTp;
   bool bRxIndication;
   bool bRxIndicationTp;
   bool bCancelTransmit;
   bool bCancelReceive;
   bool bCopyTxData;
   bool bCopyRxData;
   bool bTriggerTransmit;
   bool bReTransmition;
   bool bStartOfReception;
   bool bUseTag;
}TypeClient;

typedef struct{
   TypePdu *ptrSrc;
   TypePdu *ptrDst;
}TypeRoutingPath;

typedef struct{
   uint16          u16CntMaxRoutingPath;
   TypeRoutingPath astGroup[];
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

