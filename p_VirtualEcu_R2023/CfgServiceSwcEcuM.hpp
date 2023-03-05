#pragma once
/******************************************************************************/
/* File   : CfgServiceSwcEcuM.hpp                                             */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_ServiceSwcEcuM.hpp"

#include "CfgServiceCanSm.hpp"
#include "CfgServiceCom.hpp"
#include "CfgServiceComM.hpp"
#include "CfgServicePduR.hpp"
#include "CfgEcuabCanIf.hpp"
#include "CfgEcuabCanTp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ServiceSwcEcuM_DevErrorDetect                             DevErrorDetect
#define ServiceSwcEcuM_InitCheck                                          STD_ON
#define CfgServiceSwcEcuM_EnableInterrupts                                STD_ON

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
}ServiceSwcEcuM_TypeValidatedWakeupEvents; //TBD: Move to correct header

typedef struct{
   uint16                                   Mode;
   uint8                                    Target;
   uint8                                    Cause;
   ServiceSwcEcuM_TypeValidatedWakeupEvents ValidatedWakeupEvents;
}ServiceSwcEcuM_TypeShutdownTarget; //TBD: Move to correct header

typedef struct{
   ServiceSwcEcuM_TypeShutdownTarget DefaultShutdownTarget;
   const CfgServiceComM_Type*        CfgServiceComM_ptr;
   const CfgServiceCanSm_Type*       CfgServiceCanSm_ptr;
   const CfgServicePduR_Type*        CfgServicePduR_ptr;
   const CfgServiceCom_Type*         CfgServiceCom_ptr;
   const CfgEcuabCanIf_Type*         CfgEcuabCanIf_ptr;
   const CfgEcuabCanTp_Type*         CfgEcuabCanTp_ptr;
}CfgServiceSwcEcuM_Type;

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

