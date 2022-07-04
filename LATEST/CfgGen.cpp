/******************************************************************************/
/* File   : CfgGen.cpp                                                        */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgGen.hpp"

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
   ,  {SchM_DevErrorDetect,          {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {SecOC_DevErrorDetect,         {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {SokFm_DevErrorDetect,         {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Spi_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {StartUp_DevErrorDetect,       {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {StbM_DevErrorDetect,          {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {SwcApplFoc_DevErrorDetect,    {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
   ,  {SwcServiceEcuM_DevErrorDetect,{STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
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
                  gptrinfDcmClient_CanIf                                                                                      \
               ,  gptrinfDcmClient_CanTp                                                                                      \
               ,  gptrinfDcmClient_CryIf                                                                                      \
               ,  gptrinfDcmClient_Ea                                                                                         \
               ,  gptrinfDcmClient_EthIf                                                                                      \
               ,  gptrinfDcmClient_Fee                                                                                        \
               ,  gptrinfDcmClient_FrIf                                                                                       \
               ,  gptrinfDcmClient_FrTp                                                                                       \
               ,  gptrinfDcmClient_J1939Tp                                                                                    \
               ,  gptrinfDcmClient_LinIf                                                                                      \
               ,  gptrinfDcmClient_LinTp                                                                                      \
               ,  gptrinfDcmClient_MemIf                                                                                      \
               ,  gptrinfDcmClient_WdgIf                                                                                      \
               ,  gptrinfDcmClient_Adc                                                                                        \
               ,  gptrinfDcmClient_Can                                                                                        \
               ,  gptrinfDcmClient_Cry                                                                                        \
               ,  gptrinfDcmClient_Dio                                                                                        \
               ,  gptrinfDcmClient_Eep                                                                                        \
               ,  gptrinfDcmClient_Eth                                                                                        \
               ,  gptrinfDcmClient_Fls                                                                                        \
               ,  gptrinfDcmClient_Fr                                                                                         \
               ,  gptrinfDcmClient_Gpt                                                                                        \
               ,  gptrinfDcmClient_Icu                                                                                        \
               ,  gptrinfDcmClient_Lin                                                                                        \
               ,  gptrinfDcmClient_Mcu                                                                                        \
               ,  gptrinfDcmClient_Ocu                                                                                        \
               ,  gptrinfDcmClient_Port                                                                                       \
               ,  gptrinfDcmClient_Pwm                                                                                        \
               ,  gptrinfDcmClient_Spi                                                                                        \
               ,  gptrinfDcmClient_Wdg                                                                                        \
               ,  gptrinfDcmClient_BswM                                                                                       \
               ,  gptrinfDcmClient_CanNm                                                                                      \
               ,  gptrinfDcmClient_CanSm                                                                                      \
               ,  gptrinfDcmClient_Com                                                                                        \
               ,  gptrinfDcmClient_ComM                                                                                       \
               ,  gptrinfDcmClient_Csm                                                                                        \
               ,  gptrinfDcmClient_Dcm                                                                                        \
               ,  gptrinfDcmClient_Dem                                                                                        \
               ,  gptrinfDcmClient_Det                                                                                        \
               ,  gptrinfDcmClient_Dlt                                                                                        \
               ,  gptrinfDcmClient_EcuM                                                                                       \
               ,  gptrinfDcmClient_FiM                                                                                        \
               ,  gptrinfDcmClient_FrNm                                                                                       \
               ,  gptrinfDcmClient_IpduM                                                                                      \
               ,  gptrinfDcmClient_Nm                                                                                         \
               ,  gptrinfDcmClient_NvM                                                                                        \
               ,  gptrinfDcmClient_Os                                                                                         \
               ,  gptrinfDcmClient_PduR                                                                                       \
               ,  gptrinfDcmClient_SchM                                                                                       \
               ,  gptrinfDcmClient_SecOC                                                                                      \
               ,  gptrinfDcmClient_SokFm                                                                                      \
               ,  gptrinfDcmClient_StartUp                                                                                    \
               ,  gptrinfDcmClient_StbM                                                                                       \
               ,  gptrinfDcmClient_Vkms                                                                                       \
               ,  gptrinfDcmClient_WdgM                                                                                       \
               ,  gptrinfDcmClient_Rte                                                                                        \
               ,  gptrinfDcmClient_SwcApplFoc                                                                                 \
               ,  gptrinfDcmClient_SwcServiceEcuM                                                                             \
               ,  gptrinfDcmClient_SwcServiceOs                                                                               \
            }                                                                                                                 \
/*#if(STD_ON == _ReSIM)*/                                                                                                     \
         ,  {                                                                                                                 \
                  "CanIf"                                                                                                     \
               ,  "CanTp"                                                                                                     \
               ,  "CryIf"                                                                                                     \
               ,  "Ea"                                                                                                        \
               ,  "EthIf"                                                                                                     \
               ,  "Fee"                                                                                                       \
               ,  "FrIf"                                                                                                      \
               ,  "FrTp"                                                                                                      \
               ,  "J1939Tp"                                                                                                   \
               ,  "LinIf"                                                                                                     \
               ,  "LinTp"                                                                                                     \
               ,  "MemIf"                                                                                                     \
               ,  "WdgIf"                                                                                                     \
               ,  "Adc"                                                                                                       \
               ,  "Can"                                                                                                       \
               ,  "Cry"                                                                                                       \
               ,  "Dio"                                                                                                       \
               ,  "Eep"                                                                                                       \
               ,  "Eth"                                                                                                       \
               ,  "Fls"                                                                                                       \
               ,  "Fr"                                                                                                        \
               ,  "Gpt"                                                                                                       \
               ,  "Icu"                                                                                                       \
               ,  "Lin"                                                                                                       \
               ,  "Mcu"                                                                                                       \
               ,  "Ocu"                                                                                                       \
               ,  "Port"                                                                                                      \
               ,  "Pwm"                                                                                                       \
               ,  "Spi"                                                                                                       \
               ,  "Wdg"                                                                                                       \
               ,  "BswM"                                                                                                      \
               ,  "CanNm"                                                                                                     \
               ,  "CanSm"                                                                                                     \
               ,  "Com"                                                                                                       \
               ,  "ComM"                                                                                                      \
               ,  "Csm"                                                                                                       \
               ,  "Dcm"                                                                                                       \
               ,  "Dem"                                                                                                       \
               ,  "Det"                                                                                                       \
               ,  "Dlt"                                                                                                       \
               ,  "EcuM"                                                                                                      \
               ,  "FiM"                                                                                                       \
               ,  "FrNm"                                                                                                      \
               ,  "IpduM"                                                                                                     \
               ,  "Nm"                                                                                                        \
               ,  "NvM"                                                                                                       \
               ,  "Os"                                                                                                        \
               ,  "PduR"                                                                                                      \
               ,  "SchM"                                                                                                      \
               ,  "SecOC"                                                                                                     \
               ,  "SokFm"                                                                                                     \
               ,  "StartUp"                                                                                                   \
               ,  "StbM"                                                                                                      \
               ,  "Vkms"                                                                                                      \
               ,  "WdgM"                                                                                                      \
               ,  "Rte"                                                                                                       \
               ,  "SwcApplFoc"                                                                                                \
               ,  "SwcServiceEcuM"                                                                                            \
               ,  "SwcServiceOs"                                                                                              \
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

