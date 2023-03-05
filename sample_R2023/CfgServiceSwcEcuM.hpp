#pragma once
/******************************************************************************/
/* File   : CfgServiceSwcEcuM.hpp                                             */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/

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

typedef uint8 CfgEcuAbCanIf_Type;
typedef uint8 CfgEcuAbCanTp_Type;
typedef uint8 CfgServiceComM_Type;
typedef uint8 CfgServiceCanSM_Type;
typedef uint8 CfgServicePduR_Type;
typedef uint8 CfgServiceCom_Type;

typedef struct{
   ServiceSwcEcuM_TypeShutdownTarget DefaultShutdownTarget;
   const CfgEcuAbCanIf_Type*         CfgEcuAbCanIf_ptr;
   const CfgEcuAbCanTp_Type*         CfgEcuAbCanTp_ptr;
   const CfgServiceComM_Type*        CfgServiceComM_ptr;
   const CfgServiceCanSM_Type*       CfgServiceCanSM_ptr;
   const CfgServicePduR_Type*        CfgServicePduR_ptr;
   const CfgServiceCom_Type*         CfgServiceCom_ptr;
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
