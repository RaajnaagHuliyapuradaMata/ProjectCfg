/******************************************************************************/
/* File   : CfgEcuabCanIf.cpp                                                 */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.hpp"

#include "CfgEcuabCanIf.hpp"

#include "infSwcServiceCanTpEcuabCanIf.hpp"
#include "infSwcServicePduREcuabCanIf.hpp"

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
const CfgEcuabCanIf_tst CfgEcuabCanIf = {
      CfgEcuabCanIf_NumMaxRxPdu
   ,  {
            {CfgEcuabCanIf_IdCanFrameExtendedRxUdsFunctional,  infSwcServiceCanTpEcuabCanIf_RxIndication}
         ,  {CfgEcuabCanIf_IdCanFrameExtendedRxUdsPhysical,    infSwcServiceCanTpEcuabCanIf_RxIndication}
         ,  {CfgEcuabCanIf_IdCanFrameExtendedRxBcmVehicleInfo, infSwcServicePduREcuabCanIf_RxIndication}
      }
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

