/******************************************************************************/
/* File   : CfgEcuabCanIf.cpp                                                 */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.hpp"

#include "CfgEcuabCanIf.hpp"

#include "infServiceSwcCanTpEcuabCanIf.hpp"
#include "infServiceSwcPduREcuabCanIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
const tpcstHardwareObjectHandleCfgElement EcuabCanIf_ConfigHardwareObjectHandle[HardwareObjectHandleCfgLen] = {(tpcstHardwareObjectHandleCfgElement)0};

const fptrEcuabCanIf_RxIndication_UL EcuabCanif_ConfigRxPdu_UL[EcuabCanif_NumUL] = {
      infServiceSwcCanTpEcuabCanIf_RxIndication
   ,  infServiceSwcPduREcuabCanIf_RxIndication
};

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

