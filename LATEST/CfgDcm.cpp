/******************************************************************************/
/* File   : CfgDcm.cpp                                                        */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.hpp"
#include "CfgDcm.hpp"

#include "infCanIf_Dcm.hpp"
#include "infCanTp_Dcm.hpp"
#include "infCryIf_Dcm.hpp"
#include "infEa_Dcm.hpp"
#include "infEthIf_Dcm.hpp"
#include "infFee_Dcm.hpp"
#include "infFrIf_Dcm.hpp"
#include "infFrTp_Dcm.hpp"
#include "infJ1939Tp_Dcm.hpp"
#include "infLinIf_Dcm.hpp"
#include "infLinTp_Dcm.hpp"
#include "infMemIf_Dcm.hpp"
#include "infWdgIf_Dcm.hpp"
#include "infAdc_Dcm.hpp"
#include "infCan_Dcm.hpp"
#include "infCry_Dcm.hpp"
#include "infDio_Dcm.hpp"
#include "infEep_Dcm.hpp"
#include "infEth_Dcm.hpp"
#include "infFls_Dcm.hpp"
#include "infFr_Dcm.hpp"
#include "infGpt_Dcm.hpp"
#include "infIcu_Dcm.hpp"
#include "infLin_Dcm.hpp"
#include "infMcu_Dcm.hpp"
#include "infOcu_Dcm.hpp"
#include "infPort_Dcm.hpp"
#include "infPwm_Dcm.hpp"
#include "infSpi_Dcm.hpp"
#include "infWdg_Dcm.hpp"
#include "infBswM_Dcm.hpp"
#include "infCanNm_Dcm.hpp"
#include "infCanSm_Dcm.hpp"
#include "infCom_Dcm.hpp"
#include "infComM_Dcm.hpp"
#include "infCsm_Dcm.hpp"
#include "infDcm_Dcm.hpp"
#include "infDem_Dcm.hpp"
#include "infDet_Dcm.hpp"
#include "infDlt_Dcm.hpp"
#include "infEcuM_Dcm.hpp"
#include "infFiM_Dcm.hpp"
#include "infFrNm_Dcm.hpp"
#include "infIpduM_Dcm.hpp"
#include "infNm_Dcm.hpp"
#include "infNvM_Dcm.hpp"
#include "infOs_Dcm.hpp"
#include "infPduR_Dcm.hpp"
#include "infSchM_Dcm.hpp"
#include "infSecOC_Dcm.hpp"
#include "infSokFm_Dcm.hpp"
#include "infStartUp_Dcm.hpp"
#include "infStbM_Dcm.hpp"
#include "infVkms_Dcm.hpp"
#include "infWdgM_Dcm.hpp"
#include "infRte_Dcm.hpp"
#include "infSwcApplFoc_Dcm.hpp"
#include "infSwcServiceEcuM_Dcm.hpp"
#include "infSwcServiceOs_Dcm.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGDCM_AR_RELEASE_VERSION_MAJOR                                        4
#define CFGDCM_AR_RELEASE_VERSION_MINOR                                        3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CFGDCM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CFGDCM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CFGDCM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CFGDCM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
CONST(CfgDcm_Type, CFGDCM_CONFIG_DATA) PBcfgDcm = {
      Dcm_DevErrorDetect
   ,  DCM_VERSION_INFO_API
   ,  {
            CFGDCM_AR_RELEASE_VERSION_MAJOR
         ,  CFGDCM_AR_RELEASE_VERSION_MINOR
         ,  0x00
         ,  0xFF
         ,  0x01
         ,  '0'
         ,  '1'
         ,  '0'
      }
   ,  {
            gptrinfDcmClient_CanIf
         ,  gptrinfDcmClient_CanTp
         ,  gptrinfDcmClient_CryIf
         ,  gptrinfDcmClient_Ea
         ,  gptrinfDcmClient_EthIf
         ,  gptrinfDcmClient_Fee
         ,  gptrinfDcmClient_FrIf
         ,  gptrinfDcmClient_FrTp
         ,  gptrinfDcmClient_J1939Tp
         ,  gptrinfDcmClient_LinIf
         ,  gptrinfDcmClient_LinTp
         ,  gptrinfDcmClient_MemIf
         ,  gptrinfDcmClient_WdgIf
         ,  gptrinfDcmClient_Adc
         ,  gptrinfDcmClient_Can
         ,  gptrinfDcmClient_Cry
         ,  gptrinfDcmClient_Dio
         ,  gptrinfDcmClient_Eep
         ,  gptrinfDcmClient_Eth
         ,  gptrinfDcmClient_Fls
         ,  gptrinfDcmClient_Fr
         ,  gptrinfDcmClient_Gpt
         ,  gptrinfDcmClient_Icu
         ,  gptrinfDcmClient_Lin
         ,  gptrinfDcmClient_Mcu
         ,  gptrinfDcmClient_Ocu
         ,  gptrinfDcmClient_Port
         ,  gptrinfDcmClient_Pwm
         ,  gptrinfDcmClient_Spi
         ,  gptrinfDcmClient_Wdg
         ,  gptrinfDcmClient_BswM
         ,  gptrinfDcmClient_CanNm
         ,  gptrinfDcmClient_CanSm
         ,  gptrinfDcmClient_Com
         ,  gptrinfDcmClient_ComM
         ,  gptrinfDcmClient_Csm
         ,  gptrinfDcmClient_Dcm
         ,  gptrinfDcmClient_Dem
         ,  gptrinfDcmClient_Det
         ,  gptrinfDcmClient_Dlt
         ,  gptrinfDcmClient_EcuM
         ,  gptrinfDcmClient_FiM
         ,  gptrinfDcmClient_FrNm
         ,  gptrinfDcmClient_IpduM
         ,  gptrinfDcmClient_Nm
         ,  gptrinfDcmClient_NvM
         ,  gptrinfDcmClient_Os
         ,  gptrinfDcmClient_PduR
         ,  gptrinfDcmClient_SchM
         ,  gptrinfDcmClient_SecOC
         ,  gptrinfDcmClient_SokFm
         ,  gptrinfDcmClient_StartUp
         ,  gptrinfDcmClient_StbM
         ,  gptrinfDcmClient_Vkms
         ,  gptrinfDcmClient_WdgM
         ,  gptrinfDcmClient_Rte
         ,  gptrinfDcmClient_SwcApplFoc
         ,  gptrinfDcmClient_SwcServiceEcuM
         ,  gptrinfDcmClient_SwcServiceOs
      }
#if(STD_ON == _ReSIM)
   ,  {
            "CanIf"
         ,  "CanTp"
         ,  "CryIf"
         ,  "Ea"
         ,  "EthIf"
         ,  "Fee"
         ,  "FrIf"
         ,  "FrTp"
         ,  "J1939Tp"
         ,  "LinIf"
         ,  "LinTp"
         ,  "MemIf"
         ,  "WdgIf"
         ,  "Adc"
         ,  "Can"
         ,  "Cry"
         ,  "Dio"
         ,  "Eep"
         ,  "Eth"
         ,  "Fls"
         ,  "Fr"
         ,  "Gpt"
         ,  "Icu"
         ,  "Lin"
         ,  "Mcu"
         ,  "Ocu"
         ,  "Port"
         ,  "Pwm"
         ,  "Spi"
         ,  "Wdg"
         ,  "BswM"
         ,  "CanNm"
         ,  "CanSm"
         ,  "Com"
         ,  "ComM"
         ,  "Csm"
         ,  "Dcm"
         ,  "Dem"
         ,  "Det"
         ,  "Dlt"
         ,  "EcuM"
         ,  "FiM"
         ,  "FrNm"
         ,  "IpduM"
         ,  "Nm"
         ,  "NvM"
         ,  "Os"
         ,  "PduR"
         ,  "SchM"
         ,  "SecOC"
         ,  "SokFm"
         ,  "StartUp"
         ,  "StbM"
         ,  "Vkms"
         ,  "WdgM"
         ,  "Rte"
         ,  "SwcApplFoc"
         ,  "SwcServiceEcuM"
         ,  "SwcServiceOs"
      }
#else
#endif
};

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

