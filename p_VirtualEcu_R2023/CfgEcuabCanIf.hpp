#pragma once
/******************************************************************************/
/* File   : CfgEcuabCanIf.hpp                                                 */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_EcuabCanIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define HardwareObjectHandleCfgLen                                            10 //TBD: as per project needs
#define EcuabCanif_NumUL                                                       2

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct{
   uint8 u8IdController;
}CfgEcuabCanIf_tstHardwareObjectHandle;

typedef const CfgEcuabCanIf_tstHardwareObjectHandle* tpcstHardwareObjectHandleCfgElement;

typedef void (*fptrEcuabCanIf_RxIndication_UL)(uint8 lu8IndexBufferRx);

typedef uint8 CfgEcuabCanIf_Type;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
extern const tpcstHardwareObjectHandleCfgElement EcuabCanIf_ConfigHardwareObjectHandle[HardwareObjectHandleCfgLen];
extern const fptrEcuabCanIf_RxIndication_UL EcuabCanif_ConfigRxPdu_UL[EcuabCanif_NumUL];

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

