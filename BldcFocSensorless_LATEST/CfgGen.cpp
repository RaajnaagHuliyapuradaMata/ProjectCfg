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
   ,  {Dcm_DevErrorDetect,            {CFGDCM_AR_RELEASE_VERSION_MAJOR,            CFGDCM_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Dem_DevErrorDetect,            {CFGDEM_AR_RELEASE_VERSION_MAJOR,            CFGDEM_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Det_DevErrorDetect,            {CFGDET_AR_RELEASE_VERSION_MAJOR,            CFGDET_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Dio_DevErrorDetect,            {CFGDIO_AR_RELEASE_VERSION_MAJOR,            CFGDIO_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Dlt_DevErrorDetect,            {CFGDLT_AR_RELEASE_VERSION_MAJOR,            CFGDLT_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {EcuM_DevErrorDetect,           {CFGECUM_AR_RELEASE_VERSION_MAJOR,           CFGECUM_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Fee_DevErrorDetect,            {CFGFEE_AR_RELEASE_VERSION_MAJOR,            CFGFEE_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {FiM_DevErrorDetect,            {CFGFIM_AR_RELEASE_VERSION_MAJOR,            CFGFIM_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Fls_DevErrorDetect,            {CFGFLS_AR_RELEASE_VERSION_MAJOR,            CFGFLS_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Gpt_DevErrorDetect,            {CFGGPT_AR_RELEASE_VERSION_MAJOR,            CFGGPT_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Icu_DevErrorDetect,            {CFGICU_AR_RELEASE_VERSION_MAJOR,            CFGICU_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Mcu_DevErrorDetect,            {CFGMCU_AR_RELEASE_VERSION_MAJOR,            CFGMCU_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {MemIf_DevErrorDetect,          {CFGMEMIF_AR_RELEASE_VERSION_MAJOR,          CFGMEMIF_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'}} \
   ,  {NvM_DevErrorDetect,            {CFGNVM_AR_RELEASE_VERSION_MAJOR,            CFGNVM_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Ocu_DevErrorDetect,            {CFGOCU_AR_RELEASE_VERSION_MAJOR,            CFGOCU_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Os_DevErrorDetect,             {CFGOS_AR_RELEASE_VERSION_MAJOR,             CFGOS_AR_RELEASE_VERSION_MINOR,             0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Port_DevErrorDetect,           {CFGPORT_AR_RELEASE_VERSION_MAJOR,           CFGPORT_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Pwm_DevErrorDetect,            {CFGPWM_AR_RELEASE_VERSION_MAJOR,            CFGPWM_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Rte_DevErrorDetect,            {CFGRTE_AR_RELEASE_VERSION_MAJOR,            CFGRTE_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {SchM_DevErrorDetect,           {CFGSCHM_AR_RELEASE_VERSION_MAJOR,           CFGSCHM_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'}} \
   ,  {Spi_DevErrorDetect,            {CFGSPI_AR_RELEASE_VERSION_MAJOR,            CFGSPI_AR_RELEASE_VERSION_MINOR,            0x00,0xFF,0x01,'0','1','0'}} \
   ,  {StartUp_DevErrorDetect,        {CFGSTARTUP_AR_RELEASE_VERSION_MAJOR,        CFGSTARTUP_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'}} \
   ,  {SwcApplFoc_DevErrorDetect,     {CFGSWCAPPLFOC_AR_RELEASE_VERSION_MAJOR,     CFGSWCAPPLFOC_AR_RELEASE_VERSION_MINOR,     0x00,0xFF,0x01,'0','1','0'}} \
   ,  {SwcServiceEcuM_DevErrorDetect, {CFGSWCSERVICEECUM_AR_RELEASE_VERSION_MAJOR, CFGSWCSERVICEECUM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}} \
   ,  {SwcServiceOs_DevErrorDetect,   {CFGSWCSERVICEOS_AR_RELEASE_VERSION_MAJOR,   CFGSWCSERVICEOS_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}} \
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

