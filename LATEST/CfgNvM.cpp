/******************************************************************************/
/* File   : CfgNvM.cpp                                                        */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.hpp"
#include "CfgNvM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CFGNVM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CFGNVM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CFGNVM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CFGNVM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
extern const CfgModule_TypeAbstract PBcfgAdc;
extern const CfgModule_TypeAbstract PBcfgBswM;
extern const CfgModule_TypeAbstract PBcfgCan;
extern const CfgModule_TypeAbstract PBcfgCanIf;
extern const CfgModule_TypeAbstract PBcfgCanNm;
extern const CfgModule_TypeAbstract PBcfgCanSm;
extern const CfgModule_TypeAbstract PBcfgCanTp;
extern const CfgModule_TypeAbstract PBcfgCom;
extern const CfgModule_TypeAbstract PBcfgComM;
extern const CfgModule_TypeAbstract PBcfgCry;
extern const CfgModule_TypeAbstract PBcfgCryIf;
extern const CfgModule_TypeAbstract PBcfgCsm;
extern const CfgModule_TypeAbstract PBcfgDcm;
extern const CfgModule_TypeAbstract PBcfgDem;
extern const CfgModule_TypeAbstract PBcfgDet;
extern const CfgModule_TypeAbstract PBcfgDio;
extern const CfgModule_TypeAbstract PBcfgDlt;
extern const CfgModule_TypeAbstract PBcfgEa;
extern const CfgModule_TypeAbstract PBcfgEcuM;
extern const CfgModule_TypeAbstract PBcfgEep;
extern const CfgModule_TypeAbstract PBcfgEth;
extern const CfgModule_TypeAbstract PBcfgEthIf;
extern const CfgModule_TypeAbstract PBcfgFee;
extern const CfgModule_TypeAbstract PBcfgFiM;
extern const CfgModule_TypeAbstract PBcfgFls;
extern const CfgModule_TypeAbstract PBcfgFr;
extern const CfgModule_TypeAbstract PBcfgFrIf;
extern const CfgModule_TypeAbstract PBcfgFrNm;
extern const CfgModule_TypeAbstract PBcfgFrTp;
extern const CfgModule_TypeAbstract PBcfgGpt;
extern const CfgModule_TypeAbstract PBcfgIcu;
extern const CfgModule_TypeAbstract PBcfgIpduM;
extern const CfgModule_TypeAbstract PBcfgJ1939Tp;
extern const CfgModule_TypeAbstract PBcfgLin;
extern const CfgModule_TypeAbstract PBcfgLinIf;
extern const CfgModule_TypeAbstract PBcfgLinTp;
extern const CfgModule_TypeAbstract PBcfgMcu;
extern const CfgModule_TypeAbstract PBcfgMemIf;
extern const CfgModule_TypeAbstract PBcfgNm;
//extern const CfgModule_TypeAbstract PBcfgNvM;
extern const CfgModule_TypeAbstract PBcfgOcu;
extern const CfgModule_TypeAbstract PBcfgOs;
extern const CfgModule_TypeAbstract PBcfgPduR;
extern const CfgModule_TypeAbstract PBcfgPort;
extern const CfgModule_TypeAbstract PBcfgPwm;
extern const CfgModule_TypeAbstract PBcfgSchM;
extern const CfgModule_TypeAbstract PBcfgSecOC;
extern const CfgModule_TypeAbstract PBcfgSokFm;
extern const CfgModule_TypeAbstract PBcfgSpi;
extern const CfgModule_TypeAbstract PBcfgStbM;
extern const CfgModule_TypeAbstract PBcfgVkms;
extern const CfgModule_TypeAbstract PBcfgWdg;
extern const CfgModule_TypeAbstract PBcfgWdgIf;
extern const CfgModule_TypeAbstract PBcfgWdgM;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
CONST(CfgNvM_Type, CFGNVM_CONFIG_DATA) PBcfgNvM = {
      NvM_DevErrorDetect
   ,  {
            CFGNVM_AR_RELEASE_VERSION_MAJOR
         ,  CFGNVM_AR_RELEASE_VERSION_MINOR
         ,  0x00
         ,  0xFF
         ,  0x01
         ,  '0'
         ,  '1'
         ,  '0'
      }
   ,  {
            &PBcfgAdc
         ,  &PBcfgBswM
         ,  &PBcfgCan
         ,  &PBcfgCanIf
         ,  &PBcfgCanNm
         ,  &PBcfgCanSm
         ,  &PBcfgCanTp
         ,  &PBcfgCom
         ,  &PBcfgComM
         ,  &PBcfgCry
         ,  &PBcfgCryIf
         ,  &PBcfgCsm
         ,  &PBcfgDcm
         ,  &PBcfgDem
         ,  &PBcfgDet
         ,  &PBcfgDio
         ,  &PBcfgDlt
         ,  &PBcfgEa
         ,  &PBcfgEcuM
         ,  &PBcfgEep
         ,  &PBcfgEth
         ,  &PBcfgEthIf
         ,  &PBcfgFee
         ,  &PBcfgFiM
         ,  &PBcfgFls
         ,  &PBcfgFr
         ,  &PBcfgFrIf
         ,  &PBcfgFrNm
         ,  &PBcfgFrTp
         ,  &PBcfgGpt
         ,  &PBcfgIcu
         ,  &PBcfgIpduM
         ,  &PBcfgJ1939Tp
         ,  &PBcfgLin
         ,  &PBcfgLinIf
         ,  &PBcfgLinTp
         ,  &PBcfgMcu
         ,  &PBcfgMemIf
         ,  &PBcfgNm
         ,  &PBcfgNvM
         ,  &PBcfgOcu
         ,  &PBcfgOs
         ,  &PBcfgPduR
         ,  &PBcfgPort
         ,  &PBcfgPwm
         ,  &PBcfgSchM
         ,  &PBcfgSecOC
         ,  &PBcfgSokFm
         ,  &PBcfgSpi
         ,  &PBcfgStbM
         ,  &PBcfgVkms
         ,  &PBcfgWdg
         ,  &PBcfgWdgIf
         ,  &PBcfgWdgM
      }
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

