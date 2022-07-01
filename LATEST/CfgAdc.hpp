#pragma once
/******************************************************************************/
/* File   : CfgAdc.hpp                                                        */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgModule.hpp"
#include "CompilerCfg_CfgAdc.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGADC_AR_RELEASE_VERSION_MAJOR                                        4
#define CFGADC_AR_RELEASE_VERSION_MINOR                                        3
#define Adc_DevErrorDetect                                        DevErrorDetect
#define Adc_InitCheck                                                     STD_ON
#define LevelPriorityMin                                                       0
#define LevelPriorityMax                                                     255
#define Adc_EnableQueing                                                 STD_OFF
#define ydc_SupportStatePowerLow                                          STD_ON
#define Adc_StatePowerModeTransitionAsynch                               STD_OFF 

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      eModeConversion_OneShot = 0
   ,  eModeConversion_Continuous
}Adc_TypeModeConversion;

typedef enum{
      eSourceTrigger_EventSoftware = 0
   ,  eSourceTrigger_EventHardware
}Adc_TypeSourceTrigger;

typedef enum{
      eMechanismPriority_Disable = 0
   ,  eMechanismPriority_HW
   ,  eMechanismPriority_HW_SW
}Adc_TypeMechanismPriority;

typedef struct{
   Std_TypeReturn CheckLimit;
}Adc_TypeChannel;

typedef enum{
      eStateGroup_Suspend = 0
   ,  eStateGroup_Resume
}Adc_TypeStateGroup;

typedef struct{
}Adc_TypeResultsGroupConversion;

typedef enum{
      eStatusGroup_Idle = 0
   ,  eStatusGroup_Busy
   ,  eStatusGroup_Completed
   ,  eStatusGroup_StreamCompleted
}Adc_TypeStatusGroup;

typedef struct{
   Adc_TypeResultsGroupConversion* ptrListResultsGroupConversion;
   uint8                           NumberResultsValid; // = 1, for eModeConversion_OneShot 
   Adc_TypeStatusGroup             StatusGroup;
}Adc_TypeBufferResults;

typedef struct{
   Adc_TypeChannel*          ptrListChannel;
   Adc_TypeModeConversion    ModeConversion;
   uint8                     NumberOfSamples; //per trigger, eModeConversion_Continuous ...TBD: needed?
   Adc_TypeSourceTrigger     SourceTrigger;
   Adc_TypeMechanismPriority MechanismPriority;
   uint8                     LevelPriority;
   Adc_TypeStateGroup        StateGroup;
   Adc_TypeBufferResults     BufferResults;
}Adc_TypeChannelGroup;

class CfgAdc_Type:
      public CfgModule_TypeAbstract
{
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
extern CONST(CfgAdc_Type, CFGADC_CONFIG_DATA) PBcfgAdc;

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

