#pragma once
/******************************************************************************/
/* File   : ApplSwcFoc.hpp                                                    */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstApplSwcFoc.hpp"
#include "CfgApplSwcFoc.hpp"
#include "ApplSwcFoc_core.hpp"
#include "infApplSwcFoc_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ApplSwcFoc:
      INTERFACES_EXPORTED_APPLSWCFOC
      public abstract_module
   ,  public class_ApplSwcFoc_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstApplSwcFoc_Type* lptrConst = (ConstApplSwcFoc_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, APPLSWCFOC_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, APPLSWCFOC_CONST,       APPLSWCFOC_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   APPLSWCFOC_CONFIG_DATA, APPLSWCFOC_APPL_CONST) lptrCfgModule
      );
      FUNC(void, APPLSWCFOC_CODE) DeInitFunction (void);
      FUNC(void, APPLSWCFOC_CODE) MainFunction   (void);
      APPLSWCFOC_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_ApplSwcFoc, APPLSWCFOC_VAR) ApplSwcFoc;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

