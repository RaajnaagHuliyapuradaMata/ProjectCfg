#pragma once
/******************************************************************************/
/* File   : CfgSwcServiceEcuM.hpp                                             */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_SwcServiceEcuM.hpp"

#include "CfgSwcServiceCanSm.hpp"
#include "CfgSwcServiceCanTp.hpp"
#include "CfgSwcServiceCom.hpp"
#include "CfgSwcServiceComM.hpp"
#include "CfgSwcServiceDcm.hpp"
#include "CfgSwcServicePduR.hpp"
#include "CfgEcuabCanIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SwcServiceEcuM_DevErrorDetect                             DevErrorDetect
#define SwcServiceEcuM_InitCheck                                          STD_ON
#define CfgSwcServiceEcuM_EnableInterrupts                                STD_ON

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct{
   uint8 bPower         : 1;
   uint8 bReset         : 1;
   uint8 bInternalReset : 1;
   uint8 bInternalWdg   : 1;
   uint8 bExternalWdg   : 1;
}SwcServiceEcuM_TypeValidatedWakeupEvents; //TBD: Move to correct header

typedef struct{
   uint16                                   Mode;
   uint8                                    Target;
   uint8                                    Cause;
   SwcServiceEcuM_TypeValidatedWakeupEvents ValidatedWakeupEvents;
}SwcServiceEcuM_TypeShutdownTarget; //TBD: Move to correct header

typedef struct{
   SwcServiceEcuM_TypeShutdownTarget    DefaultShutdownTarget;
   const CfgEcuabCanIf_tst*             CfgEcuabCanIf_ptr;
   const CfgSwcServiceCanSm_tst*        CfgSwcServiceCanSm_ptr;
   const CfgSwcServiceCanTp_tst*        CfgSwcServiceCanTp_ptr;
   const CfgSwcServiceCom_tst*          CfgSwcServiceCom_ptr;
   const CfgSwcServiceComM_tst*         CfgSwcServiceComM_ptr;
   const CfgSwcServiceDcm_tst*          CfgSwcServiceDcm_ptr;
   const CfgSwcServicePduR_tst*         CfgSwcServicePduR_ptr;
}CfgSwcServiceEcuM_Type;

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

