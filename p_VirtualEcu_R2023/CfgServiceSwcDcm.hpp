#pragma once
/******************************************************************************/
/* File   : CfgServiceSwcDcm.hpp                                              */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_ServiceSwcDcm.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ServiceSwcDcm_NumProtocols                                             1

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      ServiceSwcDcm_eIdProtocolUds
   ,  ServiceSwcDcm_eIdProtocolObd
   ,  ServiceSwcDcm_eIdProtocolJ1939
}ServiceSwcDcm_teIdProtocol;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
extern const ServiceSwcDcm_teIdProtocol ServiceSwcDcm_aeTableConnection[ServiceSwcDcm_NumProtocols];

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
