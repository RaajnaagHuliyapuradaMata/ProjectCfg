/******************************************************************************/
/* File   : CfgCsm.cpp                                                        */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.hpp"
#include "CfgCsm.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGCSM_AR_RELEASE_VERSION_MAJOR                                        4
#define CFGCSM_AR_RELEASE_VERSION_MINOR                                        3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CFGCSM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CFGCSM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CFGCSM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CFGCSM_AR_RELEASE_VERSION_MINOR!"
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
CONST(CfgCsm_Type, CFGCSM_CONFIG_DATA) PBcfgCsm = {
      Csm_DevErrorDetect
   ,  {
            CFGCSM_AR_RELEASE_VERSION_MAJOR
         ,  CFGCSM_AR_RELEASE_VERSION_MINOR
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

