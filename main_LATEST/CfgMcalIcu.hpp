#pragma once
/******************************************************************************/
/* File   : CfgMcalIcu.hpp                                                        */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgModule.hpp"
#include "CompilerCfg_McalIcu.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGICU_AR_RELEASE_VERSION_MAJOR                                        4
#define CFGICU_AR_RELEASE_VERSION_MINOR                                        3
#define McalIcu_DevErrorDetect                                        DevErrorDetect
#define McalIcu_InitCheck                                                     STD_ON

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CFGICU_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CFGICU_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CFGICU_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CFGICU_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class CfgMcalIcu_Type:
      public CfgModule_TypeAbstract
{
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

