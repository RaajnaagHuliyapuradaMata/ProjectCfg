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
#define Adc_DevErrorDetect                                        DevErrorDetect
#define Adc_InitCheck                                                     STD_ON
#define ADC_VERSION_INFO_API                                      VersionInfoApi
#define LevelPriorityMin                                                       0
#define LevelPriorityMax                                                     255
#define Adc_EnableQueing                                                 STD_OFF

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      eModeConversion_OneShot = 0
   ,  eModeConversion_Continuous
   //TBD: Streaming?
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
   Std_ReturnType CheckLimit;
}Adc_TypeChannel;

typedef enum{
      eStateGroup_Suspend = 0
   ,  eStateGroup_Resume
}Adc_TypeStateGroup;

typedef struct{
   Adc_TypeChannel*          ptrListChannel;
   Adc_TypeModeConversion    ModeConversion;
   uint8                     NumberOfSamples; //per trigger, TBD: Applicable for Streaming
   Adc_TypeSourceTrigger     SourceTrigger;
   Adc_TypeMechanismPriority MechanismPriority;
   uint8                     LevelPriority;
   Adc_TypeStateGroup        StateGroup;
}Adc_TypeChannelGroup;

typedef struct{
}Adc_TypeResultsGroupConversion;

typedef enum{
      eStatusGroup_Unknown = 0
   ,  eStatusGroup_Idle
   ,  eStatusGroup_StreamCompleted
}Adc_TypeStatusGroup;

typedef struct{
   Adc_TypeResultsGroupConversion* ptrListResultsGroupConversion;
   uint8                           NumberResultsValid; // = 1, for eModeConversion_OneShot 
   Adc_TypeStatusGroup             StatusGroup;
}Adc_TypeBufferResults;

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

