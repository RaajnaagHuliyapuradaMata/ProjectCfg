#pragma once
/******************************************************************************/
/* File   : CfgServicePduR.hpp                                                       */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgModule.hpp"
#include "CompilerCfg_ServicePduR.hpp"
#include "ComStackTypes.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGPDUR_AR_RELEASE_VERSION_MAJOR                                       4
#define CFGPDUR_AR_RELEASE_VERSION_MINOR                                       3
#define ServicePduR_DevErrorDetect                                       DevErrorDetect
#define ServicePduR_InitCheck                                                    STD_ON

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CFGPDUR_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CFGPDUR_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CFGPDUR_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CFGPDUR_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
//TBD: move to core_finctionalities
typedef enum{
      e_State_UnInit
   ,  e_State_Online
}TypeState;

typedef uint16 TypeIdRoutingPathGroup;

typedef struct{
   uint32 bUpperModule            :1;
   uint32 bLowerModule            :1;
   uint32 bServiceCommunicationInterface :1;
   uint32 bTransportProtocol      :1;
   uint32 bTransmit               :1;
   uint32 bTransmitTp             :1;
   uint32 bTxConfirmation         :1;
   uint32 bTxConfirmationTp       :1;
   uint32 bRxIndication           :1;
   uint32 bRxIndicationTp         :1;
   uint32 bMcalCancelTransmit         :1;
   uint32 bMcalCancelReceive          :1;
   uint32 bCopyTxData             :1;
   uint32 bCopyRxData             :1;
   uint32 bTriggerTransmit        :1;
   uint32 bReTransmition          :1;
   uint32 bStartOfReception       :1;
   uint32 bUseTag                 :1;
}TypeClient;

typedef void TypePdu;     //TBD: Real implementation

typedef struct{
   TypePdu *ptrSrc;
   TypePdu *ptrDst;
}TypeRoutingPath;

typedef struct{
   TypeIdRoutingPathGroup Id;
   uint16                 u16CntMaxRoutingPath;
   TypeRoutingPath        astGroup[1];
}TypeRoutingPathGroup;

class Type_CfgServicePduRCore{
   public:
      uint16                Id;
      TypeClient*           aptrClients[1];
      uint16                u16CntMaxRoutingPathGroup;
      TypeRoutingPathGroup* aptrGroups[1];
};

class CfgServicePduR_Type:
      public CfgModule_TypeAbstract
{
   public:
      Type_CfgServicePduRCore Core;
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

