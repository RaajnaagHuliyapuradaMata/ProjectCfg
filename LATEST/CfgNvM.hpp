#pragma once
/******************************************************************************/
/* File   : CfgNvM.hpp                                                        */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgModule.hpp"
#include "CompilerCfg_CfgNvM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGNVM_AR_RELEASE_VERSION_MAJOR                                        4
#define CFGNVM_AR_RELEASE_VERSION_MINOR                                        3
#define NvM_DevErrorDetect                                        DevErrorDetect
#define NvM_InitCheck                                                     STD_ON

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
typedef enum{
      eResultRequest_Ok = 0
   ,  eResultRequest_NotOk
   ,  eResultRequest_Pending
   ,  eResultRequest_FailedIntegrity
   ,  eResultRequest_BlockSkipped
   ,  eResultRequest_InvalidatedNv
   ,  eResultRequest_Cancled
   ,  eResultRequest_FailedRedundancy
   ,  eResultRequest_RestoredFromRom
}TypeResultRequest;

typedef uint16 TypeIdBlock;

class CfgNvM_Type:
      public CfgModule_TypeAbstract
{
   public:
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

