#pragma once
/******************************************************************************/
/* File   : CfgMemIf.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgModule.hpp"
#include "CompilerCfg_MemIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGMEMIF_AR_RELEASE_VERSION_MAJOR                                      4
#define CFGMEMIF_AR_RELEASE_VERSION_MINOR                                      3
#define MemIf_DevErrorDetect                                      DevErrorDetect
#define MemIf_InitCheck                                                   STD_ON

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CFGMEMIF_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CFGMEMIF_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CFGMEMIF_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CFGMEMIF_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      eStatus_UnInit = 0
   ,  eStatus_Idle
   ,  eStatus_Busy
   ,  eStatus_BusyInternal
}CfgMemIf_TypeStatus;

typedef enum{
      eResultJob_Ok = 0
   ,  eResultJob_Failed
   ,  eResultJob_Pemding
   ,  eResultJob_Camceled
   ,  eResultJob_BlockInconsistent
   ,  eResultJob_BlockInvalid
}CfgMemIf_TypeResultJob;

typedef enum{
      eMode_Slow = 0
   ,  eMode_Fast
}CfgMemIf_TypeMode;

class CfgMemIf_Type:
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

