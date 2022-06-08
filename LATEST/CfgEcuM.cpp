/******************************************************************************/
/* File   : CfgEcuM.cpp                                                       */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.hpp"
#include "CfgEcuM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGECUM_AR_RELEASE_VERSION_MAJOR                                       4
#define CFGECUM_AR_RELEASE_VERSION_MINOR                                       3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CFGECUM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CFGECUM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CFGECUM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CFGECUM_AR_RELEASE_VERSION_MINOR!"
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
CONST(CfgEcuM_Type, CFGECUM_CONFIG_DATA) PBcfgEcuM = {
   {
#if(STD_ON == _ReSIM)
         "CfgEcuM"
#else
#endif
      ,  CFGECUM_AR_RELEASE_VERSION_MAJOR
      ,  CFGECUM_AR_RELEASE_VERSION_MINOR
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
