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
#define IndexEcuMClient_BswM                                                  49
#define IndexEcuMClient_SchM                                                  50
#define SizeDriverInitData_One                                                51
#define SizeDriverInitData_Zero                                                7

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
class CfgSwcServiceEcuM_Type:
      public CfgModule_TypeAbstract
{
   public:
      uint8                   u8SizeDriverInitData_One;
      infEcuMClient*          aptrinfEcuMClient_One  [SizeDriverInitData_One];
      CfgModule_TypeAbstract* aptrCfgModule_One      [SizeDriverInitData_One];
      uint8                   u8SizeDriverInitData_Zero;
      infEcuMClient*          aptrinfEcuMClient_Zero [SizeDriverInitData_Zero];
      CfgModule_TypeAbstract* aptrCfgModule_Zero     [SizeDriverInitData_Zero];
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

