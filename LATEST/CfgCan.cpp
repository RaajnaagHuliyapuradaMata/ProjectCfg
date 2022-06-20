/******************************************************************************/
/* File   : CfgCan.cpp                                                        */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.hpp"
#include "CfgCan.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGCAN_AR_RELEASE_VERSION_MAJOR                                        4
#define CFGCAN_AR_RELEASE_VERSION_MINOR                                        3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CFGCAN_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CFGCAN_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CFGCAN_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CFGCAN_AR_RELEASE_VERSION_MINOR!"
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
CONST(CfgCan_Type, CFGCAN_CONFIG_DATA) PBcfgCan = {
      Can_DevErrorDetect
   ,  {
            CFGCAN_AR_RELEASE_VERSION_MAJOR
         ,  CFGCAN_AR_RELEASE_VERSION_MINOR
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

