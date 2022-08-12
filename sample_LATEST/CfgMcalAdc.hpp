#pragma once
/******************************************************************************/
/* File   : CfgMcalAdc.hpp                                                        */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgModule.hpp"
#include "CompilerCfg_McalAdc.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGMCALADC_AR_RELEASE_VERSION_MAJOR                                        4
#define CFGMCALADC_AR_RELEASE_VERSION_MINOR                                        3
#define McalAdc_DevErrorDetect                                        DevErrorDetect
#define McalAdc_InitCheck                                                     STD_ON
#define LevelPriorityMin                                                       0
#define LevelPriorityMax                                                     255
#define McalAdc_EnableQueing                                                 STD_OFF
#define ydc_SupportStatePowerLow                                          STD_ON
#define McalAdc_StatePowerModeTransitionAsynch                               STD_OFF 

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CFGMCALADC_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CFGMCALADC_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CFGMCALADC_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CFGMCALADC_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      eModeConversion_OneShot = 0
   ,  eModeConversion_Continuous
}McalAdc_TypeModeConversion;

typedef enum{
      eSourceTrigger_EventSoftware = 0
   ,  eSourceTrigger_EventHardware
}McalAdc_TypeSourceTrigger;

typedef enum{
      eMechanismPriority_Disable = 0
   ,  eMechanismPriority_HW
   ,  eMechanismPriority_HW_SW
}McalAdc_TypeMechanismPriority;

typedef struct{
   Std_TypeReturn CheckLimit;
}McalAdc_TypeChannel;

typedef enum{
      eStateGroup_Suspend = 0
   ,  eStateGroup_Resume
}McalAdc_TypeStateGroup;

typedef struct{
}McalAdc_TypeResultsGroupConversion;

typedef enum{
      eStatusGroup_Idle = 0
   ,  eStatusGroup_Busy
   ,  eStatusGroup_ServiceCompleted
   ,  eStatusGroup_StreamServiceCompleted
}McalAdc_TypeStatusGroup;

typedef struct{
   McalAdc_TypeResultsGroupConversion* ptrListResultsGroupConversion;
   uint8                           NumberResultsValid; // = 1, for eModeConversion_OneShot 
   McalAdc_TypeStatusGroup             StatusGroup;
}McalAdc_TypeBufferResults;

typedef struct{
   McalAdc_TypeChannel*          ptrListChannel;
   McalAdc_TypeModeConversion    ModeConversion;
   uint8                     NumberOfSamples; //per trigger, eModeConversion_Continuous ...TBD: needed?
   McalAdc_TypeSourceTrigger     SourceTrigger;
   McalAdc_TypeMechanismPriority MechanismPriority;
   uint8                     LevelPriority;
   McalAdc_TypeStateGroup        StateGroup;
   McalAdc_TypeBufferResults     BufferResults;
}McalAdc_TypeChannelGroup;

class CfgMcalAdc_Type:
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

