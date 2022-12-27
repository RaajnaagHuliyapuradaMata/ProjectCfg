#pragma once
/******************************************************************************/
/* File   : CfgEcuabCryIf.hpp                                                 */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgModule.hpp"
#include "CompilerCfg_EcuabCryIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGECUABCRYIF_AR_RELEASE_VERSION_MAJOR                                 4
#define CFGECUABCRYIF_AR_RELEASE_VERSION_MINOR                                 3
#define EcuabCryIf_DevErrorDetect                                 DevErrorDetect
#define EcuabCryIf_InitCheck                                              STD_ON

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CFGECUABCRYIF_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CFGECUABCRYIF_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CFGECUABCRYIF_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CFGECUABCRYIF_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class CfgEcuabCryIf_Type:
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

