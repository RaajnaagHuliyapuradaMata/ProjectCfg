#pragma once
/******************************************************************************/
/* File   : CfgServiceSwcEcuM.hpp                                             */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_ServiceSwcEcuM.hpp"

#include "CfgServiceSwcCanSm.hpp"
#include "CfgServiceSwcCom.hpp"
#include "CfgServiceSwcComM.hpp"
#include "CfgServiceSwcPduR.hpp"
#include "CfgEcuabCanIf.hpp"
#include "CfgServiceSwcCanTp.hpp"

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
   const CfgServiceSwcComM_Type*        CfgServiceSwcComM_ptr;
   const CfgServiceSwcCanSm_Type*       CfgServiceSwcCanSm_ptr;
   const CfgServiceSwcPduR_Type*        CfgServiceSwcPduR_ptr;
   const CfgServiceSwcCom_Type*         CfgServiceSwcCom_ptr;
   const CfgEcuabCanIf_Type*         CfgEcuabCanIf_ptr;
   const CfgServiceSwcCanTp_Type*         CfgServiceSwcCanTp_ptr;
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

