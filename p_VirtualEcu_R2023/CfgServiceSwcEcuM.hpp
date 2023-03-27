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
#include "CfgServiceSwcCanTp.hpp"
#include "CfgServiceSwcCom.hpp"
#include "CfgServiceSwcComM.hpp"
#include "CfgServiceSwcDcm.hpp"
#include "CfgServiceSwcPduR.hpp"
#include "CfgEcuabCanIf.hpp"

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
   ServiceSwcEcuM_TypeShutdownTarget    DefaultShutdownTarget;
   const CfgEcuabCanIf_tst*             CfgEcuabCanIf_ptr;
   const CfgServiceSwcCanSm_tst*        CfgServiceSwcCanSm_ptr;
   const CfgServiceSwcCanTp_tst*        CfgServiceSwcCanTp_ptr;
   const CfgServiceSwcCom_tst*          CfgServiceSwcCom_ptr;
   const CfgServiceSwcComM_tst*         CfgServiceSwcComM_ptr;
   const CfgServiceSwcDcm_tst*          CfgServiceSwcDcm_ptr;
   const CfgServiceSwcPduR_tst*         CfgServiceSwcPduR_ptr;
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

