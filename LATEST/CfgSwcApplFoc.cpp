/******************************************************************************/
/* File   : CfgSwcApplFoc.cpp                                                 */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.hpp"
#include "CfgSwcApplFoc.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGSWCAPPLFOC_AR_RELEASE_VERSION_MAJOR                                 4
#define CFGSWCAPPLFOC_AR_RELEASE_VERSION_MINOR                                 3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CFGSWCAPPLFOC_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CFGSWCAPPLFOC_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CFGSWCAPPLFOC_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CFGSWCAPPLFOC_AR_RELEASE_VERSION_MINOR!"
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
CONST(CfgSwcApplFoc_Type, CFGSWCAPPLFOC_CONFIG_DATA) PBcfgSwcApplFoc = {
      SwcApplFoc_DevErrorDetect
   ,  SWCAPPLFOC_VERSION_INFO_API
   ,  {
            CFGSWCAPPLFOC_AR_RELEASE_VERSION_MAJOR
         ,  CFGSWCAPPLFOC_AR_RELEASE_VERSION_MINOR
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

