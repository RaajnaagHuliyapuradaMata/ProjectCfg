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
   ,  {Ocu_DevErrorDetect,           {STD_AR_RELEASE_VERSION_MAJOR, STD_AR_RELEASE_VERSION_MINOR,0x00,0xFF,0x01,'0','1','0'}} \
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
      }                                                                                                                       \
                                                                                                                              \
   ,  {                                                                                                                       \
            SwcServiceEcuM_DevErrorDetect                                                                                     \
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
      }                                                                                                                       \
                                                                                                                              \
   ,  {                                                                                                                       \
            EcuM_DevErrorDetect                                                                                               \
         ,  {                                                                                                                 \
                  CFGECUM_AR_RELEASE_VERSION_MAJOR                                                                            \
               ,  CFGECUM_AR_RELEASE_VERSION_MINOR                                                                            \
               ,  0x00                                                                                                        \
               ,  0xFF                                                                                                        \
               ,  0x01                                                                                                        \
               ,  '0'                                                                                                         \
               ,  '1'                                                                                                         \
               ,  '0'                                                                                                         \
            }                                                                                                                 \
      }                                                                                                                       \
                                                                                                                              \
   ,  {                                                                                                                       \
            NvM_DevErrorDetect                                                                                                \
         ,  {                                                                                                                 \
                  CFGNVM_AR_RELEASE_VERSION_MAJOR                                                                             \
               ,  CFGNVM_AR_RELEASE_VERSION_MINOR                                                                             \
               ,  0x00                                                                                                        \
               ,  0xFF                                                                                                        \
               ,  0x01                                                                                                        \
               ,  '0'                                                                                                         \
               ,  '1'                                                                                                         \
               ,  '0'                                                                                                         \
            }                                                                                                                 \
      }                                                                                                                       \
                                                                                                                              \
   ,  {                                                                                                                       \
            Os_DevErrorDetect                                                                                                 \
         ,  {                                                                                                                 \
                  CFGOS_AR_RELEASE_VERSION_MAJOR                                                                              \
               ,  CFGOS_AR_RELEASE_VERSION_MINOR                                                                              \
               ,  0x00                                                                                                        \
               ,  0xFF                                                                                                        \
               ,  0x01                                                                                                        \
               ,  '0'                                                                                                         \
               ,  '1'                                                                                                         \
               ,  '0'                                                                                                         \
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

