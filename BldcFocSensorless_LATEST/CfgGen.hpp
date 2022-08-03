#pragma once
/******************************************************************************/
/* File   : CfgGen.hpp                                                        */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgAdc.hpp"
#include "CfgBswM.hpp"
#include "CfgDcm.hpp"
#include "CfgDem.hpp"
#include "CfgDet.hpp"
#include "CfgDio.hpp"
#include "CfgDlt.hpp"
#include "CfgEcuM.hpp"
#include "CfgFee.hpp"
#include "CfgFiM.hpp"
#include "CfgFls.hpp"
#include "CfgGpt.hpp"
#include "CfgIcu.hpp"
#include "CfgMcu.hpp"
#include "CfgMemIf.hpp"
#include "CfgNvM.hpp"
#include "CfgOcu.hpp"
#include "CfgOs.hpp"
#include "CfgPort.hpp"
#include "CfgPwm.hpp"
#include "CfgRte.hpp"
#include "CfgSchM.hpp"
#include "CfgSpi.hpp"
#include "CfgStartUp.hpp"
#include "CfgSwcApplFoc.hpp"
#include "CfgSwcServiceEcuM.hpp"
#include "CfgSwcServiceOs.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class CfgGen_Type{
   public:
      CfgAdc_Type            CfgAdc;
      CfgBswM_Type           CfgBswM;
      CfgDcm_Type            CfgDcm;
      CfgDem_Type            CfgDem;
      CfgDet_Type            CfgDet;
      CfgDio_Type            CfgDio;
      CfgDlt_Type            CfgDlt;
      CfgEcuM_Type           CfgEcuM;
      CfgFee_Type            CfgFee;
      CfgFiM_Type            CfgFiM;
      CfgFls_Type            CfgFls;
      CfgGpt_Type            CfgGpt;
      CfgIcu_Type            CfgIcu;
      CfgMcu_Type            CfgMcu;
      CfgMemIf_Type          CfgMemIf;
      CfgNvM_Type            CfgNvM;
      CfgOcu_Type            CfgOcu;
      CfgOs_Type             CfgOs;
      CfgPort_Type           CfgPort;
      CfgPwm_Type            CfgPwm;
      CfgRte_Type            CfgRte;
      CfgSchM_Type           CfgSchM;
      CfgSpi_Type            CfgSpi;
      CfgStartUp_Type        CfgStartUp;
      CfgSwcApplFoc_Type     CfgSwcApplFoc;
      CfgSwcServiceEcuM_Type CfgSwcServiceEcuM;
      CfgSwcServiceOs_Type   CfgSwcServiceOs;
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
extern const CfgGen_Type PBcfgGen_ROM;
extern const CfgGen_Type   CfgGen_Fls;
extern       CfgGen_Type   CfgGen_NvM;

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

