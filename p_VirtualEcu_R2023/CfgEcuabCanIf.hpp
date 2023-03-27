#pragma once
/******************************************************************************/
/* File   : CfgEcuabCanIf.hpp                                                 */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_EcuabCanIf.hpp"
#include "CanTypes.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CfgEcuabCanIf_NumMaxRxPdu                                              3
#define CfgEcuabCanIf_IdCanFrameExtendedRxUdsFunctional                    0x700
#define CfgEcuabCanIf_IdCanFrameExtendedRxUdsPhysical                      0x300
#define CfgEcuabCanIf_IdCanFrameExtendedRxBcmVehicleInfo                   0x100

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef void (*CfgEcuabCanIf_fptrRxIndicationUpperLayer)(uint8 lu8IndexBufferRx);

typedef struct{
   McalCan_tIdFrameExtended                 IdCan;
   CfgEcuabCanIf_fptrRxIndicationUpperLayer fptrRxIndicationUpperLayer;
}CfgEcuabCanIf_tstPduInfo;

typedef struct{
   uint8                                    u8NumMaxRxPdu;
   CfgEcuabCanIf_tstPduInfo                 astPduInfoTable[CfgEcuabCanIf_NumMaxRxPdu];
}CfgEcuabCanIf_tst;


/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
extern const CfgEcuabCanIf_tst CfgEcuabCanIf;

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

