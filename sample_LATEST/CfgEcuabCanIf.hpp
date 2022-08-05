#pragma once
/******************************************************************************/
/* File   : CfgEcuabCanIf.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgModule.hpp"
#include "CompilerCfg_EcuabCanIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGCANIF_AR_RELEASE_VERSION_MAJOR                                      4
#define CFGCANIF_AR_RELEASE_VERSION_MINOR                                      3
#define EcuabCanIf_DevErrorDetect                                      DevErrorDetect
#define EcuabCanIf_InitCheck                                                   STD_ON

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CFGCANIF_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CFGCANIF_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CFGCANIF_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CFGCANIF_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      eModePdu_Offline = 0
   ,  eModePdu_TxOffline
   ,  eModePdu_TxOfflineActive
   ,  eModePdu_Online
}CfgEcuabCanIf_TypeModePdu;

typedef enum{
      eStatusNotif_None = 0
   ,  eStatusNotif_TxRx
}CfgEcuabCanIf_TypeStatusNotif;

class CfgEcuabCanIf_Type:
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

