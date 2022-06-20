/******************************************************************************/
/* File   : CfgDem.cpp                                                        */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.hpp"
#include "CfgDem.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGDEM_AR_RELEASE_VERSION_MAJOR                                        4
#define CFGDEM_AR_RELEASE_VERSION_MINOR                                        3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CFGDEM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CFGDEM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CFGDEM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CFGDEM_AR_RELEASE_VERSION_MINOR!"
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
CONST(CfgDem_Type, CFGDEM_CONFIG_DATA) PBcfgDem = {
      Dem_DevErrorDetect
   ,  {
            CFGDEM_AR_RELEASE_VERSION_MAJOR
         ,  CFGDEM_AR_RELEASE_VERSION_MINOR
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

