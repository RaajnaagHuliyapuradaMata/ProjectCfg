/******************************************************************************/
/* File   : CfgGen.cpp                                                        */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgGen.hpp"

#include "Module.hpp"
#include "Adc.hpp"
#include "BswM.hpp"
#include "Can.hpp"
#include "CanIf.hpp"
#include "CanNm.hpp"
#include "CanSm.hpp"
#include "CanTp.hpp"
#include "Com.hpp"
#include "ComM.hpp"
#include "Cry.hpp"
#include "CryIf.hpp"
#include "Csm.hpp"
#include "Dcm.hpp"
#include "Dem.hpp"
#include "Det.hpp"
#include "Dio.hpp"
#include "Dlt.hpp"
#include "Ea.hpp"
#include "EcuM.hpp"
#include "Eep.hpp"
#include "Eth.hpp"
#include "EthIf.hpp"
#include "Fee.hpp"
#include "FiM.hpp"
#include "Fls.hpp"
#include "Fr.hpp"
#include "FrIf.hpp"
#include "FrNm.hpp"
#include "FrTp.hpp"
#include "Gpt.hpp"
#include "Icu.hpp"
#include "IpduM.hpp"
#include "J1939Tp.hpp"
#include "Lin.hpp"
#include "LinIf.hpp"
#include "LinTp.hpp"
#include "Mcu.hpp"
#include "MemIf.hpp"
#include "Nm.hpp"
#include "NvM.hpp"
#include "Ocu.hpp"
#include "Os.hpp"
#include "PduR.hpp"
#include "Port.hpp"
#include "Pwm.hpp"
#include "Rte.hpp"
#include "SchM.hpp"
#include "SecOC.hpp"
#include "SokFm.hpp"
#include "Spi.hpp"
#include "StartUp.hpp"
#include "StbM.hpp"
#include "SwcApplFoc.hpp"
#include "SwcServiceEcuM.hpp"
#include "SwcServiceOs.hpp"
#include "Vkms.hpp"
#include "Wdg.hpp"
#include "WdgIf.hpp"
#include "WdgM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define PBcfgGen_DefaultInit                                                                                                  \
      {Adc_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {BswM_DevErrorDetect,          {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Can_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {CanIf_DevErrorDetect,         {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {CanNm_DevErrorDetect,         {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {CanSm_DevErrorDetect,         {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {CanTp_DevErrorDetect,         {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Com_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ComM_DevErrorDetect,          {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Cry_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {CryIf_DevErrorDetect,         {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Csm_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Dem_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Det_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Dio_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Dlt_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Ea_DevErrorDetect,            {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuM_DevErrorDetect,          {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Eep_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Eth_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EthIf_DevErrorDetect,         {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Fee_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {FiM_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Fls_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Fr_DevErrorDetect,            {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {FrIf_DevErrorDetect,          {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {FrNm_DevErrorDetect,          {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {FrTp_DevErrorDetect,          {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Gpt_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Icu_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {IpduM_DevErrorDetect,         {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {J1939Tp_DevErrorDetect,       {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Lin_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {LinIf_DevErrorDetect,         {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {LinTp_DevErrorDetect,         {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Mcu_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {MemIf_DevErrorDetect,         {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Nm_DevErrorDetect,            {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {NvM_DevErrorDetect,           {CFGNVM_AR_RELEASE_VERSION_MAJOR, CFGNVM_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} /*TBD: Do this for other modules */  \
   ,  {Ocu_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Os_DevErrorDetect,            {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Port_DevErrorDetect,          {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Pwm_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Rte_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {SecOC_DevErrorDetect,         {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {SokFm_DevErrorDetect,         {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Spi_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {StartUp_DevErrorDetect,       {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {StbM_DevErrorDetect,          {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {SwcApplFoc_DevErrorDetect,    {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {SwcServiceOs_DevErrorDetect,  {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Vkms_DevErrorDetect,          {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Wdg_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {WdgIf_DevErrorDetect,         {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {WdgM_DevErrorDetect,          {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
                                                                                                                              \
   ,  {                                                                                                                       \
            Dcm_DevErrorDetect                                                                                                \
         ,  {                                                                                                                 \
                  CFGDCM_AR_RELEASE_VERSION_MAJOR /*TBD: Do this for other modules */                                         \
               ,  CFGDCM_AR_RELEASE_VERSION_MINOR                                                                             \
               ,  0x00                                                                                                        \
               ,  0xFF                                                                                                        \
               ,  0x01                                                                                                        \
               ,  '0'                                                                                                         \
               ,  '1'                                                                                                         \
               ,  '0'                                                                                                         \
            }                                                                                                                 \
         ,  {                                                                                                                 \
                  &Adc                                                                                                        \
               ,  &BswM                                                                                                       \
               ,  &Can                                                                                                        \
               ,  &CanIf                                                                                                      \
               ,  &CanNm                                                                                                      \
               ,  &CanSm                                                                                                      \
               ,  &CanTp                                                                                                      \
               ,  &Com                                                                                                        \
               ,  &ComM                                                                                                       \
               ,  &Cry                                                                                                        \
               ,  &CryIf                                                                                                      \
               ,  &Csm                                                                                                        \
               ,  &Dcm                                                                                                        \
               ,  &Dem                                                                                                        \
               ,  &Det                                                                                                        \
               ,  &Dio                                                                                                        \
               ,  &Dlt                                                                                                        \
               ,  &Ea                                                                                                         \
               ,  &EcuM                                                                                                       \
               ,  &Eep                                                                                                        \
               ,  &Eth                                                                                                        \
               ,  &EthIf                                                                                                      \
               ,  &Fee                                                                                                        \
               ,  &FiM                                                                                                        \
               ,  &Fls                                                                                                        \
               ,  &Fr                                                                                                         \
               ,  &FrIf                                                                                                       \
               ,  &FrNm                                                                                                       \
               ,  &FrTp                                                                                                       \
               ,  &Gpt                                                                                                        \
               ,  &Icu                                                                                                        \
               ,  &IpduM                                                                                                      \
               ,  &J1939Tp                                                                                                    \
               ,  &Lin                                                                                                        \
               ,  &LinIf                                                                                                      \
               ,  &LinTp                                                                                                      \
               ,  &Mcu                                                                                                        \
               ,  &MemIf                                                                                                      \
               ,  &Nm                                                                                                         \
               ,  &NvM                                                                                                        \
               ,  &Ocu                                                                                                        \
               ,  &Os                                                                                                         \
               ,  &PduR                                                                                                       \
               ,  &Port                                                                                                       \
               ,  &Pwm                                                                                                        \
               ,  &Rte                                                                                                        \
               ,  &SchM                                                                                                       \
               ,  &SecOC                                                                                                      \
               ,  &SokFm                                                                                                      \
               ,  &Spi                                                                                                        \
               ,  &StartUp                                                                                                    \
               ,  &StbM                                                                                                       \
               ,  &SwcApplFoc                                                                                                 \
               ,  &SwcServiceEcuM                                                                                             \
               ,  &SwcServiceOs                                                                                               \
               ,  &Vkms                                                                                                       \
               ,  &Wdg                                                                                                        \
               ,  &WdgIf                                                                                                      \
               ,  &WdgM                                                                                                       \
            }                                                                                                                 \
/*#if(STD_ON == _ReSIM)*/                                                                                                     \
         ,  {                                                                                                                 \
                  "Adc"                                                                                                       \
               ,  "BswM"                                                                                                      \
               ,  "Can"                                                                                                       \
               ,  "CanIf"                                                                                                     \
               ,  "CanNm"                                                                                                     \
               ,  "CanSm"                                                                                                     \
               ,  "CanTp"                                                                                                     \
               ,  "Com"                                                                                                       \
               ,  "ComM"                                                                                                      \
               ,  "Cry"                                                                                                       \
               ,  "CryIf"                                                                                                     \
               ,  "Csm"                                                                                                       \
               ,  "Dcm"                                                                                                       \
               ,  "Dem"                                                                                                       \
               ,  "Det"                                                                                                       \
               ,  "Dio"                                                                                                       \
               ,  "Dlt"                                                                                                       \
               ,  "Ea"                                                                                                        \
               ,  "EcuM"                                                                                                      \
               ,  "Eep"                                                                                                       \
               ,  "Eth"                                                                                                       \
               ,  "EthIf"                                                                                                     \
               ,  "Fee"                                                                                                       \
               ,  "FiM"                                                                                                       \
               ,  "Fls"                                                                                                       \
               ,  "Fr"                                                                                                        \
               ,  "FrIf"                                                                                                      \
               ,  "FrNm"                                                                                                      \
               ,  "FrTp"                                                                                                      \
               ,  "Gpt"                                                                                                       \
               ,  "Icu"                                                                                                       \
               ,  "IpduM"                                                                                                     \
               ,  "J1939Tp"                                                                                                   \
               ,  "Lin"                                                                                                       \
               ,  "LinIf"                                                                                                     \
               ,  "LinTp"                                                                                                     \
               ,  "Mcu"                                                                                                       \
               ,  "MemIf"                                                                                                     \
               ,  "Nm"                                                                                                        \
               ,  "NvM"                                                                                                       \
               ,  "Ocu"                                                                                                       \
               ,  "Os"                                                                                                        \
               ,  "PduR"                                                                                                      \
               ,  "Port"                                                                                                      \
               ,  "Pwm"                                                                                                       \
               ,  "Rte"                                                                                                       \
               ,  "SchM"                                                                                                      \
               ,  "SecOC"                                                                                                     \
               ,  "SokFm"                                                                                                     \
               ,  "Spi"                                                                                                       \
               ,  "StartUp"                                                                                                   \
               ,  "StbM"                                                                                                      \
               ,  "SwcApplFoc"                                                                                                \
               ,  "SwcServiceEcuM"                                                                                            \
               ,  "SwcServiceOs"                                                                                              \
               ,  "Vkms"                                                                                                      \
               ,  "Wdg"                                                                                                       \
               ,  "WdgIf"                                                                                                     \
               ,  "WdgM"                                                                                                      \
            }                                                                                                                 \
/*#else*/                                                                                                                     \
/*#endif*/                                                                                                                    \
      }                                                                                                                       \
                                                                                                                              \
   ,  {                                                                                                                       \
            PduR_DevErrorDetect                                                                                               \
         ,  {                                                                                                                 \
                  CFGPDUR_AR_RELEASE_VERSION_MAJOR                                                                            \
               ,  CFGPDUR_AR_RELEASE_VERSION_MINOR                                                                            \
               ,  0x00                                                                                                        \
               ,  0xFF                                                                                                        \
               ,  0x01                                                                                                        \
               ,  '0'                                                                                                         \
               ,  '1'                                                                                                         \
               ,  '0'                                                                                                         \
            }                                                                                                                 \
         ,  {                                                                                                                 \
                  1                                                                                                           \
               ,  {                                                                                                           \
                        &PduRClient_Dcm                                                                                       \
/*                   ,  &PduRClient_Com */                                                                                    \
                  }                                                                                                           \
               ,  0                                                                                                           \
               ,  0                                                                                                           \
            }                                                                                                                 \
      }                                                                                                                       \
                                                                                                                              \
   ,  {                                                                                                                       \
            SchM_DevErrorDetect                                                                                               \
         ,  {                                                                                                                 \
                  CFGSCHM_AR_RELEASE_VERSION_MAJOR                                                                            \
               ,  CFGSCHM_AR_RELEASE_VERSION_MINOR                                                                            \
               ,  0x00                                                                                                        \
               ,  0xFF                                                                                                        \
               ,  0x01                                                                                                        \
               ,  '0'                                                                                                         \
               ,  '1'                                                                                                         \
               ,  '0'                                                                                                         \
            }                                                                                                                 \
         ,  {                                                                                                                 \
                  &EcuM                                                                                                       \
               ,  &NvM                                                                                                        \
               ,  &CanIf                                                                                                      \
               ,  &PduR                                                                                                       \
               ,  &Dcm                                                                                                        \
            }                                                                                                                 \
      }                                                                                                                       \
                                                                                                                              \
   ,  {                                                                                                                       \
            SchM_DevErrorDetect                                                                                               \
         ,  {                                                                                                                 \
                  CFGSWCSERVICEECUM_AR_RELEASE_VERSION_MAJOR                                                                  \
               ,  CFGSWCSERVICEECUM_AR_RELEASE_VERSION_MINOR                                                                  \
               ,  0x00                                                                                                        \
               ,  0xFF                                                                                                        \
               ,  0x01                                                                                                        \
               ,  '0'                                                                                                         \
               ,  '1'                                                                                                         \
               ,  '0'                                                                                                         \
            }                                                                                                                 \
         ,  {                                                                                                                 \
                  {&Det,            &(CfgGen_NvM.CfgDet)}                                                                     \
               ,  {&Dem,            &(CfgGen_NvM.CfgDem)}                                                                     \
               ,  {&Fls,            &(CfgGen_NvM.CfgFls)}                                                                     \
               ,  {&Fee,            &(CfgGen_NvM.CfgFee)}                                                                     \
               ,  {&MemIf,          &(CfgGen_NvM.CfgMemIf)}                                                                   \
               ,  {&NvM,            &(CfgGen_NvM.CfgNvM)}                                                                     \
/*             ,  {&EcuM,           &(CfgGen_NvM.CfgEcuM)}*/                                                                  \
            }                                                                                                                 \
         ,  {                                                                                                                 \
                  {&Adc,            &(CfgGen_NvM.CfgAdc)}                                                                     \
               ,  {&BswM,           &(CfgGen_NvM.CfgBswM)}                                                                    \
               ,  {&Can,            &(CfgGen_NvM.CfgCan)}                                                                     \
               ,  {&CanIf,          &(CfgGen_NvM.CfgCanIf)}                                                                   \
               ,  {&CanNm,          &(CfgGen_NvM.CfgCanNm)}                                                                   \
               ,  {&CanSm,          &(CfgGen_NvM.CfgCanSm)}                                                                   \
               ,  {&CanTp,          &(CfgGen_NvM.CfgCanTp)}                                                                   \
               ,  {&Com,            &(CfgGen_NvM.CfgCom)}                                                                     \
               ,  {&ComM,           &(CfgGen_NvM.CfgComM)}                                                                    \
               ,  {&Cry,            &(CfgGen_NvM.CfgCry)}                                                                     \
               ,  {&CryIf,          &(CfgGen_NvM.CfgCryIf)}                                                                   \
               ,  {&Csm,            &(CfgGen_NvM.CfgCsm)}                                                                     \
               ,  {&Dcm,            &(CfgGen_NvM.CfgDcm)}                                                                     \
/*             ,  {&Dem,            &(CfgGen_NvM.CfgDem)}*/                                                                   \
/*             ,  {&Det,            &(CfgGen_NvM.CfgDet)}*/                                                                   \
               ,  {&Dio,            &(CfgGen_NvM.CfgDio)}                                                                     \
               ,  {&Dlt,            &(CfgGen_NvM.CfgDlt)}                                                                     \
               ,  {&Ea,             &(CfgGen_NvM.CfgEa)}                                                                      \
/*             ,  {&EcuM,           &(CfgGen_NvM.CfgEcuM)}*/                                                                  \
               ,  {&Eep,            &(CfgGen_NvM.CfgEep)}                                                                     \
               ,  {&Eth,            &(CfgGen_NvM.CfgEth)}                                                                     \
               ,  {&EthIf,          &(CfgGen_NvM.CfgEthIf)}                                                                   \
/*             ,  {&Fee,            &(CfgGen_NvM.CfgFee)}*/                                                                   \
               ,  {&FiM,            &(CfgGen_NvM.CfgFiM)}                                                                     \
/*             ,  {&Fls,            &(CfgGen_NvM.CfgFls)}*/                                                                   \
               ,  {&Fr,             &(CfgGen_NvM.CfgFr)}                                                                      \
               ,  {&FrIf,           &(CfgGen_NvM.CfgFrIf)}                                                                    \
               ,  {&FrNm,           &(CfgGen_NvM.CfgFrNm)}                                                                    \
               ,  {&FrTp,           &(CfgGen_NvM.CfgFrTp)}                                                                    \
               ,  {&Gpt,            &(CfgGen_NvM.CfgGpt)}                                                                     \
               ,  {&Icu,            &(CfgGen_NvM.CfgIcu)}                                                                     \
               ,  {&IpduM,          &(CfgGen_NvM.CfgIpduM)}                                                                   \
               ,  {&J1939Tp,        &(CfgGen_NvM.CfgJ1939Tp)}                                                                 \
               ,  {&Lin,            &(CfgGen_NvM.CfgLin)}                                                                     \
               ,  {&LinIf,          &(CfgGen_NvM.CfgLinIf)}                                                                   \
               ,  {&LinTp,          &(CfgGen_NvM.CfgLinTp)}                                                                   \
               ,  {&Mcu,            &(CfgGen_NvM.CfgMcu)}                                                                     \
/*             ,  {&MemIf,          &(CfgGen_NvM.CfgMemIf)}*/                                                                 \
               ,  {&Nm,             &(CfgGen_NvM.CfgNm)}                                                                      \
/*             ,  {&NvM,            &(CfgGen_NvM.CfgNvM)}*/                                                                   \
               ,  {&Ocu,            &(CfgGen_NvM.CfgOcu)}                                                                     \
               ,  {&Os,             &(CfgGen_NvM.CfgOs)}                                                                      \
               ,  {&PduR,           &(CfgGen_NvM.CfgPduR)}                                                                    \
               ,  {&Port,           &(CfgGen_NvM.CfgPort)}                                                                    \
               ,  {&Pwm,            &(CfgGen_NvM.CfgPwm)}                                                                     \
               ,  {&Rte,            &(CfgGen_NvM.CfgRte)}                                                                     \
               ,  {&SchM,           &(CfgGen_NvM.CfgSchM)}                                                                    \
               ,  {&SecOC,          &(CfgGen_NvM.CfgSecOC)}                                                                   \
               ,  {&SokFm,          &(CfgGen_NvM.CfgSokFm)}                                                                   \
               ,  {&Spi,            &(CfgGen_NvM.CfgSpi)}                                                                     \
               ,  {&StartUp,        &(CfgGen_NvM.CfgStartUp)}                                                                 \
               ,  {&StbM,           &(CfgGen_NvM.CfgStbM)}                                                                    \
               ,  {&SwcApplFoc,     &(CfgGen_NvM.CfgSwcApplFoc)}                                                              \
               ,  {&SwcServiceEcuM, &(CfgGen_NvM.CfgSwcServiceEcuM)}                                                          \
               ,  {&SwcServiceOs,   &(CfgGen_NvM.CfgSwcServiceOs)}                                                            \
               ,  {&Vkms,           &(CfgGen_NvM.CfgVkms)}                                                                    \
               ,  {&Wdg,            &(CfgGen_NvM.CfgWdg)}                                                                     \
               ,  {&WdgIf,          &(CfgGen_NvM.CfgWdgIf)}                                                                   \
               ,  {&WdgM,           &(CfgGen_NvM.CfgWdgM)}                                                                    \
            }                                                                                                                 \
      }                                                                                                                       \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
TypeClient PduRClient_Dcm; //TBD:  = {0}; actual realization

const CfgGen_Type PBcfgGen_ROM = {
   PBcfgGen_DefaultInit
};

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
const CfgGen_Type CfgGen_Fls = {
   PBcfgGen_DefaultInit
};

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
CfgGen_Type CfgGen_NvM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

