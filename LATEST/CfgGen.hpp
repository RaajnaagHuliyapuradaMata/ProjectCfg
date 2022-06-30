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
#include "CfgCan.hpp"
#include "CfgCanIf.hpp"
#include "CfgCanNm.hpp"
#include "CfgCanSm.hpp"
#include "CfgCanTp.hpp"
#include "CfgCom.hpp"
#include "CfgComM.hpp"
#include "CfgCry.hpp"
#include "CfgCryIf.hpp"
#include "CfgCsm.hpp"
#include "CfgDcm.hpp"
#include "CfgDem.hpp"
#include "CfgDet.hpp"
#include "CfgDio.hpp"
#include "CfgDlt.hpp"
#include "CfgEa.hpp"
#include "CfgEcuM.hpp"
#include "CfgEep.hpp"
#include "CfgEth.hpp"
#include "CfgEthIf.hpp"
#include "CfgFee.hpp"
#include "CfgFiM.hpp"
#include "CfgFls.hpp"
#include "CfgFr.hpp"
#include "CfgFrIf.hpp"
#include "CfgFrNm.hpp"
#include "CfgFrTp.hpp"
#include "CfgGpt.hpp"
#include "CfgIcu.hpp"
#include "CfgIpduM.hpp"
#include "CfgJ1939Tp.hpp"
#include "CfgLin.hpp"
#include "CfgLinIf.hpp"
#include "CfgLinTp.hpp"
#include "CfgMcu.hpp"
#include "CfgMemIf.hpp"
#include "CfgNm.hpp"
#include "CfgNvM.hpp"
#include "CfgOcu.hpp"
#include "CfgOs.hpp"
#include "CfgPduR.hpp"
#include "CfgPort.hpp"
#include "CfgPwm.hpp"
#include "CfgRte.hpp"
#include "CfgSchM.hpp"
#include "CfgSecOC.hpp"
#include "CfgSokFm.hpp"
#include "CfgSpi.hpp"
#include "CfgStartUp.hpp"
#include "CfgStbM.hpp"
#include "CfgSwcApplFoc.hpp"
#include "CfgSwcServiceEcuM.hpp"
#include "CfgSwcServiceOs.hpp"
#include "CfgVkms.hpp"
#include "CfgWdg.hpp"
#include "CfgWdgIf.hpp"
#include "CfgWdgM.hpp"

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
      CfgCan_Type            CfgCan;
      CfgCanIf_Type          CfgCanIf;
      CfgCanNm_Type          CfgCanNm;
      CfgCanSm_Type          CfgCanSm;
      CfgCanTp_Type          CfgCanTp;
      CfgCom_Type            CfgCom;
      CfgComM_Type           CfgComM;
      CfgCry_Type            CfgCry;
      CfgCryIf_Type          CfgCryIf;
      CfgCsm_Type            CfgCsm;
      CfgDcm_Type            CfgDcm;
      CfgDem_Type            CfgDem;
      CfgDet_Type            CfgDet;
      CfgDio_Type            CfgDio;
      CfgDlt_Type            CfgDlt;
      CfgEa_Type             CfgEa;
      CfgEcuM_Type           CfgEcuM;
      CfgEep_Type            CfgEep;
      CfgEth_Type            CfgEth;
      CfgEthIf_Type          CfgEthIf;
      CfgFee_Type            CfgFee;
      CfgFiM_Type            CfgFiM;
      CfgFls_Type            CfgFls;
      CfgFr_Type             CfgFr;
      CfgFrIf_Type           CfgFrIf;
      CfgFrNm_Type           CfgFrNm;
      CfgFrTp_Type           CfgFrTp;
      CfgGpt_Type            CfgGpt;
      CfgIcu_Type            CfgIcu;
      CfgIpduM_Type          CfgIpduM;
      CfgJ1939Tp_Type        CfgJ1939Tp;
      CfgLin_Type            CfgLin;
      CfgLinIf_Type          CfgLinIf;
      CfgLinTp_Type          CfgLinTp;
      CfgMcu_Type            CfgMcu;
      CfgMemIf_Type          CfgMemIf;
      CfgNm_Type             CfgNm;
      CfgNvM_Type            CfgNvM;
      CfgOcu_Type            CfgOcu;
      CfgOs_Type             CfgOs;
      CfgPduR_Type           CfgPduR;
      CfgPort_Type           CfgPort;
      CfgPwm_Type            CfgPwm;
      CfgRte_Type            CfgRte;
      CfgSchM_Type           CfgSchM;
      CfgSecOC_Type          CfgSecOC;
      CfgSokFm_Type          CfgSokFm;
      CfgSpi_Type            CfgSpi;
      CfgStartUp_Type        CfgStartUp;
      CfgStbM_Type           CfgStbM;
      CfgSwcApplFoc_Type     CfgSwcApplFoc;
      CfgSwcServiceEcuM_Type CfgSwcServiceEcuM;
      CfgSwcServiceOs_Type   CfgSwcServiceOs;
      CfgVkms_Type           CfgVkms;
      CfgWdg_Type            CfgWdg;
      CfgWdgIf_Type          CfgWdgIf;
      CfgWdgM_Type           CfgWdgM;
};

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

