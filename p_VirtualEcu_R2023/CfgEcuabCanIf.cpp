/******************************************************************************/
/* File   : CfgEcuabCanIf.cpp                                                 */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/NagarajaHuliyapuradaMata?tab=repositories               */
/*                                                                            */
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

