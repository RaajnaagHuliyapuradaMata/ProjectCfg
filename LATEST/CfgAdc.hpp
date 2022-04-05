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

typedef struct{
}Adc_TypeChannel;

typedef enum{
      eStateGroup_Suspend = 0
   ,  eStateGroup_Resume
}Adc_TypeStateGroup;

typedef struct{
   Adc_TypeChannel*      ptrListChannel;
   Adc_TypeSourceTrigger SourceTrigger;
   uint8                 LevelPriority;
   Adc_TypeStateGroup    StateGroup;
}Adc_TypeChannelGroup;

typedef struct{
}Adc_TypeResultsGroupConversion;

typedef enum{
      eStatusGroup_Unknown = 0
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

