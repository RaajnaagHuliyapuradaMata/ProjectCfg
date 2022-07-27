/******************************************************************************/
/* File   : CfgGen.cpp                                                        */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgGen.hpp"
#include "infCfgGen_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define PBcfgGen_DefaultInit                                                   \
      {Adc_DevErrorDetect,            {CFGADC_AR_RELEASE_VERSION_MAJOR,            CFGADC_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {BswM_DevErrorDetect,           {CFGBSWM_AR_RELEASE_VERSION_MAJOR,           CFGBSWM_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Can_DevErrorDetect,            {CFGCAN_AR_RELEASE_VERSION_MAJOR,            CFGCAN_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {CanIf_DevErrorDetect,          {CFGCANIF_AR_RELEASE_VERSION_MAJOR,          CFGCANIF_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {CanNm_DevErrorDetect,          {CFGCANNM_AR_RELEASE_VERSION_MAJOR,          CFGCANNM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {CanSm_DevErrorDetect,          {CFGCANSM_AR_RELEASE_VERSION_MAJOR,          CFGCANSM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {CanTp_DevErrorDetect,          {CFGCANTP_AR_RELEASE_VERSION_MAJOR,          CFGCANTP_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Com_DevErrorDetect,            {CFGCOM_AR_RELEASE_VERSION_MAJOR,            CFGCOM_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {ComM_DevErrorDetect,           {CFGCOMM_AR_RELEASE_VERSION_MAJOR,           CFGCOMM_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Cry_DevErrorDetect,            {CFGCRY_AR_RELEASE_VERSION_MAJOR,            CFGCRY_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {CryIf_DevErrorDetect,          {CFGCRYIF_AR_RELEASE_VERSION_MAJOR,          CFGCRYIF_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Csm_DevErrorDetect,            {CFGCSM_AR_RELEASE_VERSION_MAJOR,            CFGCSM_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Dcm_DevErrorDetect,            {CFGDCM_AR_RELEASE_VERSION_MAJOR,            CFGDCM_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Dem_DevErrorDetect,            {CFGDEM_AR_RELEASE_VERSION_MAJOR,            CFGDEM_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Det_DevErrorDetect,            {CFGDET_AR_RELEASE_VERSION_MAJOR,            CFGDET_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Dio_DevErrorDetect,            {CFGDIO_AR_RELEASE_VERSION_MAJOR,            CFGDIO_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Dlt_DevErrorDetect,            {CFGDLT_AR_RELEASE_VERSION_MAJOR,            CFGDLT_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Ea_DevErrorDetect,             {CFGEA_AR_RELEASE_VERSION_MAJOR,             CFGEA_AR_RELEASE_VERSION_MINOR,             0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuM_DevErrorDetect,           {CFGECUM_AR_RELEASE_VERSION_MAJOR,           CFGECUM_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Eep_DevErrorDetect,            {CFGEEP_AR_RELEASE_VERSION_MAJOR,            CFGEEP_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Eth_DevErrorDetect,            {CFGETH_AR_RELEASE_VERSION_MAJOR,            CFGETH_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EthIf_DevErrorDetect,          {CFGETHIF_AR_RELEASE_VERSION_MAJOR,          CFGETHIF_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Fee_DevErrorDetect,            {CFGFEE_AR_RELEASE_VERSION_MAJOR,            CFGFEE_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {FiM_DevErrorDetect,            {CFGFIM_AR_RELEASE_VERSION_MAJOR,            CFGFIM_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Fls_DevErrorDetect,            {CFGFLS_AR_RELEASE_VERSION_MAJOR,            CFGFLS_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Fr_DevErrorDetect,             {CFGFR_AR_RELEASE_VERSION_MAJOR,             CFGFR_AR_RELEASE_VERSION_MINOR,             0x00,0xFF,0x01,'0','1','0'}} \
   ,  {FrIf_DevErrorDetect,           {CFGFRIF_AR_RELEASE_VERSION_MAJOR,           CFGFRIF_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
   ,  {FrNm_DevErrorDetect,           {CFGFRNM_AR_RELEASE_VERSION_MAJOR,           CFGFRNM_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
   ,  {FrTp_DevErrorDetect,           {CFGFRTP_AR_RELEASE_VERSION_MAJOR,           CFGFRTP_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Gpt_DevErrorDetect,            {CFGGPT_AR_RELEASE_VERSION_MAJOR,            CFGGPT_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Icu_DevErrorDetect,            {CFGICU_AR_RELEASE_VERSION_MAJOR,            CFGICU_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {IpduM_DevErrorDetect,          {CFGIPDUM_AR_RELEASE_VERSION_MAJOR,          CFGIPDUM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {J1939Tp_DevErrorDetect,        {CFGJ1939TP_AR_RELEASE_VERSION_MAJOR,        CFGJ1939TP_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Lin_DevErrorDetect,            {CFGLIN_AR_RELEASE_VERSION_MAJOR,            CFGLIN_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {LinIf_DevErrorDetect,          {CFGLINIF_AR_RELEASE_VERSION_MAJOR,          CFGLINIF_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {LinTp_DevErrorDetect,          {CFGLINTP_AR_RELEASE_VERSION_MAJOR,          CFGLINTP_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Mcu_DevErrorDetect,            {CFGMCU_AR_RELEASE_VERSION_MAJOR,            CFGMCU_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {MemIf_DevErrorDetect,          {CFGMEMIF_AR_RELEASE_VERSION_MAJOR,          CFGMEMIF_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Nm_DevErrorDetect,             {CFGNM_AR_RELEASE_VERSION_MAJOR,             CFGNM_AR_RELEASE_VERSION_MINOR,             0x00,0xFF,0x01,'0','1','0'}} \
   ,  {NvM_DevErrorDetect,            {CFGNVM_AR_RELEASE_VERSION_MAJOR,            CFGNVM_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Ocu_DevErrorDetect,            {CFGOCU_AR_RELEASE_VERSION_MAJOR,            CFGOCU_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Os_DevErrorDetect,             {CFGOS_AR_RELEASE_VERSION_MAJOR,             CFGOS_AR_RELEASE_VERSION_MINOR,             0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Port_DevErrorDetect,           {CFGPORT_AR_RELEASE_VERSION_MAJOR,           CFGPORT_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Pwm_DevErrorDetect,            {CFGPWM_AR_RELEASE_VERSION_MAJOR,            CFGPWM_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Rte_DevErrorDetect,            {CFGRTE_AR_RELEASE_VERSION_MAJOR,            CFGRTE_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {SchM_DevErrorDetect,           {CFGSCHM_AR_RELEASE_VERSION_MAJOR,           CFGSCHM_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
   ,  {SecOC_DevErrorDetect,          {CFGSECOC_AR_RELEASE_VERSION_MAJOR,          CFGSECOC_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {SokFm_DevErrorDetect,          {CFGSOKFM_AR_RELEASE_VERSION_MAJOR,          CFGSOKFM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Spi_DevErrorDetect,            {CFGSPI_AR_RELEASE_VERSION_MAJOR,            CFGSPI_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {StartUp_DevErrorDetect,        {CFGSTARTUP_AR_RELEASE_VERSION_MAJOR,        CFGSTARTUP_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'}} \
   ,  {StbM_DevErrorDetect,           {CFGSTBM_AR_RELEASE_VERSION_MAJOR,           CFGSTBM_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
   ,  {SwcApplFoc_DevErrorDetect,     {CFGSWCAPPLFOC_AR_RELEASE_VERSION_MAJOR,     CFGSWCAPPLFOC_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'}} \
   ,  {SwcServiceEcuM_DevErrorDetect, {CFGSWCSERVICEECUM_AR_RELEASE_VERSION_MAJOR, CFGSWCSERVICEECUM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}} \
   ,  {SwcServiceOs_DevErrorDetect,   {CFGSWCSERVICEOS_AR_RELEASE_VERSION_MAJOR,   CFGSWCSERVICEOS_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Vkms_DevErrorDetect,           {CFGVKMS_AR_RELEASE_VERSION_MAJOR,           CFGVKMS_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Wdg_DevErrorDetect,            {CFGWDG_AR_RELEASE_VERSION_MAJOR,            CFGWDG_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {WdgIf_DevErrorDetect,          {CFGWDGIF_AR_RELEASE_VERSION_MAJOR,          CFGWDGIF_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {WdgM_DevErrorDetect,           {CFGWDGM_AR_RELEASE_VERSION_MAJOR,           CFGWDGM_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
                                                                               \
   ,  {                                                                        \
            PduR_DevErrorDetect                                                \
         ,  {                                                                  \
                  CFGPDUR_AR_RELEASE_VERSION_MAJOR                             \
               ,  CFGPDUR_AR_RELEASE_VERSION_MINOR                             \
               ,  0x00                                                         \
               ,  0xFF                                                         \
               ,  0x01                                                         \
               ,  '0'                                                          \
               ,  '1'                                                          \
               ,  '0'                                                          \
            }                                                                  \
         ,  {                                                                  \
                  1                                                            \
               ,  {                                                            \
                        &PduRClient_Dcm                                        \
/*                   ,  &PduRClient_Com */                                     \
                  }                                                            \
               ,  0                                                            \
               ,  0                                                            \
            }                                                                  \
      }                                                                        \
                                                                               \

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

