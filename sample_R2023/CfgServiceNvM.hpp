#pragma once
/******************************************************************************/
/* File   : CfgServiceNvM.hpp                                                 */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgModule.hpp"
#include "CompilerCfg_ServiceNvM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGSERVICENVM_AR_RELEASE_VERSION_MAJOR                                 4
#define CFGSERVICENVM_AR_RELEASE_VERSION_MINOR                                 3
#define ServiceNvM_DevErrorDetect                                 DevErrorDetect
#define ServiceNvM_InitCheck                                              STD_ON

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CFGSERVICENVM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CFGSERVICENVM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CFGSERVICENVM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CFGSERVICENVM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      eResultRequest_Ok = 0
   ,  eResultRequest_NotOk
   ,  eResultRequest_Pending
   ,  eResultRequest_FailedIntegrity
   ,  eResultRequest_BlockSkipped
   ,  eResultRequest_InvalidatedNv
   ,  eResultRequest_McalCancled
   ,  eResultRequest_FailedRedundancy
   ,  eResultRequest_RestoredMcalFromRom
}TypeResultRequest;

typedef uint16 TypeIdBlock;

class CfgServiceNvM_Type:
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

