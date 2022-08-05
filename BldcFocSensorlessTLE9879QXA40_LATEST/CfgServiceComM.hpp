#pragma once
/******************************************************************************/
/* File   : CfgServiceComM.hpp                                                       */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgModule.hpp"
#include "CompilerCfg_ServiceComM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGSERVICECOMM_AR_RELEASE_VERSION_MAJOR                                       4
#define CFGSERVICECOMM_AR_RELEASE_VERSION_MINOR                                       3
#define ServiceComM_DevErrorDetect                                       DevErrorDetect
#define ServiceComM_InitCheck                                                    STD_ON

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CFGSERVICECOMM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CFGSERVICECOMM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CFGSERVICECOMM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CFGSERVICECOMM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class CfgServiceComM_Type:
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

