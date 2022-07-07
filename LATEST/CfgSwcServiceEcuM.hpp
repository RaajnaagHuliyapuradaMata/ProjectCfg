#pragma once
/******************************************************************************/
/* File   : CfgSwcServiceEcuM.hpp                                             */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgModule.hpp"
#include "CompilerCfg_CfgSwcServiceEcuM.hpp"
#include "infEcuMClient.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGSWCSERVICEECUM_AR_RELEASE_VERSION_MAJOR                             4
#define CFGSWCSERVICEECUM_AR_RELEASE_VERSION_MINOR                             3
#define SwcServiceEcuM_DevErrorDetect                             DevErrorDetect
#define SwcServiceEcuM_InitCheck                                          STD_ON
#define IndexEcuMClient_BswM                                                   1
#define IndexEcuMClient_SchM                                                  46

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CFGSWCSERVICEECUM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CFGSWCSERVICEECUM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CFGSWCSERVICEECUM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CFGSWCSERVICEECUM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct{
   infEcuMClient*          lptrinfEcuMClient_Module;
   CfgModule_TypeAbstract* ptrPBcfgModule;
}CfgEcuM_TypeDriverInitData;

class CfgSwcServiceEcuM_Type:
      public CfgModule_TypeAbstract
{
   public:
      CfgEcuM_TypeDriverInitData laDriverInitDataZero[6];
      CfgEcuM_TypeDriverInitData laDriverInitDataOne[52];
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

