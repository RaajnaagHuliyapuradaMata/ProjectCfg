/******************************************************************************/
/* File   : CfgIcu.cpp                                                        */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.hpp"
#include "CfgIcu.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGICU_AR_RELEASE_VERSION_MAJOR                                        4
#define CFGICU_AR_RELEASE_VERSION_MINOR                                        3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CFGICU_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CFGICU_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CFGICU_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CFGICU_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
CONST(CfgIcu_Type, CFGICU_CONFIG_DATA) PBcfgIcu = {
      Icu_DevErrorDetect
   ,  {
            CFGICU_AR_RELEASE_VERSION_MAJOR
         ,  CFGICU_AR_RELEASE_VERSION_MINOR
         ,  0x00
         ,  0xFF
         ,  0x01
         ,  '0'
         ,  '1'
         ,  '0'
      }
};

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

