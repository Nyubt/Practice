/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Os
 *           Program: VAG AR4 (MSR_Vag_SLP5)
 *          Customer: ZF Friedrichshafen AG
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC377
 *    License Scope : The usage is restricted to CBD1800884_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_Hal_MemoryProtection_Lcfg.c
 *   Generation Time: 2020-03-06 15:21:42
 *           Project: CBD1800884 - Version 1.0
 *          Delivery: CBD1800884_D01
 *      Tool Version: DaVinci Configurator (beta) 5.19.46 SP2
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! This version of DaVinci Configurator Pro and/or the related Basic Software Package is BETA software.               !
 ! BETA Software is basically operable, but not sufficiently tested, verified and/or qualified for use in series      !
 ! production and/or in vehicles operating on public or non-public roads.                                             !
 ! In particular, without limitation, BETA Software may cause unpredictable ECU behavior, may not provide all         !
 ! functions necessary for use in series production and/or may not comply with quality requirements which are         !
 ! necessary according to the state of the art. BETA Software must not be used in series production.                  !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/

/* PRQA S 0777, 0779, 0828 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_MSR_Dir1.1 */

#define OS_HAL_MEMORYPROTECTION_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Hal_MemoryProtection_Cfg.h"
#include "Os_Hal_MemoryProtection_Lcfg.h"
#include "Os_Hal_MemoryProtection.h"

/* Os kernel module dependencies */

/* Os hal dependencies */


/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! HAL memory protection configuration data: OsCore_Core0 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore_Core0_DataRegions[9];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore_Core0_DataRegions[9] =
{
  {
    /* MPU region: Stack region */
    /* .StartAddress  = */ (uint32)0x0uL,  /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */
    /* .EndAddress    = */ (uint32)0x0uL  /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */
  },
  {
    /* MPU region: ram__dspr0__VP_D */
    /* .StartAddress  = */ (uint32)&BeginOf_ram__dspr0__VP_D,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)&EndOf_ram__dspr0__VP_D  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
  {
    /* MPU region: ram__dspr0__VP_QM */
    /* .StartAddress  = */ (uint32)&BeginOf_ram__dspr0__VP_QM,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)&EndOf_ram__dspr0__VP_QM  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
  {
    /* MPU region: ram__dlmu0__VP_D */
    /* .StartAddress  = */ (uint32)&BeginOf_ram__dlmu0__VP_D,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)&EndOf_ram__dlmu0__VP_D  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
  {
    /* MPU region: ram__pspr0__VP_QM */
    /* .StartAddress  = */ (uint32)&BeginOf_ram__pspr0__VP_QM,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)&EndOf_ram__pspr0__VP_QM  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
  {
    /* MPU region: ram__dspr0__VP_PbHost_B_D */
    /* .StartAddress  = */ (uint32)&BeginOf_ram__dspr0__VP_PbHost_B_D,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)&EndOf_ram__dspr0__VP_PbHost_B_D  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
  {
    /* MPU region: ram__dlmu0__VP_QM */
    /* .StartAddress  = */ (uint32)&BeginOf_ram__dlmu0__VP_QM,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)&EndOf_ram__dlmu0__VP_QM  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
  {
    /* MPU region: ram__dspr0__VP_CSA */
    /* .StartAddress  = */ (uint32)&BeginOf_ram__dspr0__VP_CSA,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)&EndOf_ram__dspr0__VP_CSA  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
  {
    /* MPU region: ram__dspr0__VP_SafetyOs_D */
    /* .StartAddress  = */ (uint32)&BeginOf_ram__dspr0__VP_SafetyOs_D,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)&EndOf_ram__dspr0__VP_SafetyOs_D  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
};
CONST(Os_Hal_MpCoreConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore_Core0 =
{
  /* .MpuDataRegionStartSlot           = */ 0,
  /* .MpuDataRegionCount               = */ 9,
  /* .MpuDataRegions                   = */ OsCfg_Hal_Mp_OsCore_Core0_DataRegions,
  {
  /* Read access bit mask */
  /* MpuDataRegionReadEnablePS0        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_ENABLE_REGION8,
  /* MpuDataRegionReadEnablePS1        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8,
  /* MpuDataRegionReadEnablePS2        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3 | OS_HAL_COREMPU_ENABLE_REGION4 | OS_HAL_COREMPU_ENABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8,
  /* MpuDataRegionReadEnablePS3        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3 | OS_HAL_COREMPU_ENABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8,
  /* MpuDataRegionReadEnablePS4        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_DISABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8,
  /* MpuDataRegionReadEnablePS5        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_DISABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8,
  },
  {
  /* Write access bit mask */
  /* MpuDataRegionWriteEnablePS0       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6 | OS_HAL_COREMPU_ENABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8,
  /* MpuDataRegionWriteEnablePS1       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8,
  /* MpuDataRegionWriteEnablePS2       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3 | OS_HAL_COREMPU_ENABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8,
  /* MpuDataRegionWriteEnablePS3       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3 | OS_HAL_COREMPU_ENABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8,
  /* MpuDataRegionWriteEnablePS4       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_DISABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8,
  /* MpuDataRegionWriteEnablePS5       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_DISABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8,
  },
  
  /* .MpuCodeRegionStartSlot           = */ 0,
  /* .MpuCodeRegionCount               = */ 0,
  /* .MpuCodeRegions                   = */ NULL_PTR,
  {
  /* Execution right bit mask */
  /* MpuCodeRegionExecutionEnablePS0   = */ 0uL,
  /* MpuCodeRegionExecutionEnablePS1   = */ 0uL,
  /* MpuCodeRegionExecutionEnablePS2   = */ 0uL,
  /* MpuCodeRegionExecutionEnablePS3   = */ 0uL,
  /* MpuCodeRegionExecutionEnablePS4   = */ 0uL,
  /* MpuCodeRegionExecutionEnablePS5   = */ 0uL,
  }
};

/*! HAL memory protection configuration data: Core0_MR_B */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_Core0_MR_B =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Core0_MR_BB_mFdr_D */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_Core0_MR_BB_mFdr_D =
{
  /* .ProtectionSet                   = */ 3,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Core0_MR_BB_mFdr_QM */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_Core0_MR_BB_mFdr_QM =
{
  /* .ProtectionSet                   = */ 3,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Core0_MR_D */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_Core0_MR_D =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Core0_MR_Pbc_B_D */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_Core0_MR_Pbc_B_D =
{
  /* .ProtectionSet                   = */ 2,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Core0_MR_QM */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_Core0_MR_QM =
{
  /* .ProtectionSet                   = */ 2,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: SystemApplication_OsCore_Core0 */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_SystemApplication_OsCore_Core0 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: CANSR10_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CANSR10_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: CANSR6_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CANSR6_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: CanIsr_1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: CounterIsr_SystemTimerCore0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CounterIsr_SystemTimerCore0 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: DMACH48SR_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_DMACH48SR_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: DMACH49SR_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_DMACH49SR_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: DMACH54SR_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_DMACH54SR_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: DMACH55SR_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_DMACH55SR_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: DMAERR0SR_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_DMAERR0SR_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: DMAERR1SR_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_DMAERR1SR_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: DMAERR2SR_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_DMAERR2SR_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: GTMTIM0SR7_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_GTMTIM0SR7_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: GTMTOM1SR0_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_GTMTOM1SR0_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: QSPI0ERR_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_QSPI0ERR_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: QSPI0PT_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_QSPI0PT_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: QSPI0UD_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_QSPI0UD_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: QSPI4ERR_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_QSPI4ERR_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: QSPI4PT_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_QSPI4PT_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: QSPI4UD_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_QSPI4UD_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: XSignalIsr_OsCore_Core0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_XSignalIsr_OsCore_Core0 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: IdleTask_OsCore_Core0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_IdleTask_OsCore_Core0 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Rte_Task_5ms_BB_mFdr_D_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Rte_Task_5ms_BB_mFdr_D_C0 =
{
  /* .ProtectionSet                   = */ 3,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Rte_Task_5ms_BB_mFdr_QM_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Rte_Task_5ms_BB_mFdr_QM_C0 =
{
  /* .ProtectionSet                   = */ 3,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Rte_Task_5ms_D_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Rte_Task_5ms_D_C0 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Rte_Task_Crypto_QM_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Rte_Task_Crypto_QM_C0 =
{
  /* .ProtectionSet                   = */ 2,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Rte_Task_D_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Rte_Task_D_C0 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Rte_Task_Init_D_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Rte_Task_Init_D_C0 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Rte_Task_Init_QM_2_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Rte_Task_Init_QM_2_C0 =
{
  /* .ProtectionSet                   = */ 2,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Rte_Task_Init_mFdr_D_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Rte_Task_Init_mFdr_D_C0 =
{
  /* .ProtectionSet                   = */ 3,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Rte_Task_Init_mFdr_QM_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Rte_Task_Init_mFdr_QM_C0 =
{
  /* .ProtectionSet                   = */ 3,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Rte_Task_OIE_D_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Rte_Task_OIE_D_C0 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Rte_Task_OIE_QM_2_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Rte_Task_OIE_QM_2_C0 =
{
  /* .ProtectionSet                   = */ 2,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Rte_Task_QM_2_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Rte_Task_QM_2_C0 =
{
  /* .ProtectionSet                   = */ 2,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Rte_Task_Xcp_5ms_D_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Rte_Task_Xcp_5ms_D_C0 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: TaskUserIdle_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_TaskUserIdle_C0 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_100ms_D_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_100ms_D_C0 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_10ms_D_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_10ms_D_C0 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_10ms_Receive_D_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_10ms_Receive_D_C0 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_10ms_Send_D_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_10ms_Send_D_C0 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_1ms_D_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_1ms_D_C0 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_20ms_D_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_20ms_D_C0 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_Appl_DCM_OIE_D_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_Appl_DCM_OIE_D_C0 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_DiagEvents_D_C0_1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_DiagEvents_D_C0_1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_DiagEvents_D_C0_2 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_DiagEvents_D_C0_2 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_DiagEvents_D_C0_3 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_DiagEvents_D_C0_3 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_Init_D_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_Init_D_C0 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_Init_SsmPb_B_D_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_Init_SsmPb_B_D_C0 =
{
  /* .ProtectionSet                   = */ 2,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_PbAsic_ADCSync_2500us_B_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_PbAsic_ADCSync_2500us_B_C0 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_Pbc_B_D_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_Pbc_B_D_C0 =
{
  /* .ProtectionSet                   = */ 2,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_Pbc_Init_B_D_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_Pbc_Init_B_D_C0 =
{
  /* .ProtectionSet                   = */ 2,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_Ssm_Pb_B_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_Ssm_Pb_B_C0 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_Start_Init_D_C0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_Start_Init_D_C0 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CORE1_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! HAL memory protection configuration data: OsCore_Core1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore_Core1_DataRegions[9];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore_Core1_DataRegions[9] =
{
  {
    /* MPU region: Stack region */
    /* .StartAddress  = */ (uint32)0x0uL,  /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */
    /* .EndAddress    = */ (uint32)0x0uL  /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */
  },
  {
    /* MPU region: ram__CLONE_DSPR__VP_CLONING */
    /* .StartAddress  = */ (uint32)&BeginOf_ram__CLONE_DSPR__VP_CLONING,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)&EndOf_ram__CLONE_DSPR__VP_CLONING  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
  {
    /* MPU region: ram__dspr1__VP_EpbEnable_B_D */
    /* .StartAddress  = */ (uint32)&BeginOf_ram__dspr1__VP_EpbEnable_B_D,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)&EndOf_ram__dspr1__VP_EpbEnable_B_D  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
  {
    /* MPU region: ram__dspr1__VP_QM */
    /* .StartAddress  = */ (uint32)&BeginOf_ram__dspr1__VP_QM,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)&EndOf_ram__dspr1__VP_QM  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
  {
    /* MPU region: ram__pspr1__VP_QM */
    /* .StartAddress  = */ (uint32)&BeginOf_ram__pspr1__VP_QM,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)&EndOf_ram__pspr1__VP_QM  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
  {
    /* MPU region: ram__dlmu1__VP_D */
    /* .StartAddress  = */ (uint32)&BeginOf_ram__dlmu1__VP_D,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)&EndOf_ram__dlmu1__VP_D  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
  {
    /* MPU region: ram__dlmu1__VP_QM */
    /* .StartAddress  = */ (uint32)&BeginOf_ram__dlmu1__VP_QM,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)&EndOf_ram__dlmu1__VP_QM  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
  {
    /* MPU region: ram__dspr1__VP_CSA */
    /* .StartAddress  = */ (uint32)&BeginOf_ram__dspr1__VP_CSA,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)&EndOf_ram__dspr1__VP_CSA  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
  {
    /* MPU region: ram__dspr1__VP_SafetyOs_D */
    /* .StartAddress  = */ (uint32)&BeginOf_ram__dspr1__VP_SafetyOs_D,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    /* .EndAddress    = */ (uint32)&EndOf_ram__dspr1__VP_SafetyOs_D  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
  },
};
CONST(Os_Hal_MpCoreConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore_Core1 =
{
  /* .MpuDataRegionStartSlot           = */ 0,
  /* .MpuDataRegionCount               = */ 9,
  /* .MpuDataRegions                   = */ OsCfg_Hal_Mp_OsCore_Core1_DataRegions,
  {
  /* Read access bit mask */
  /* MpuDataRegionReadEnablePS0        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_ENABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_ENABLE_REGION8,
  /* MpuDataRegionReadEnablePS1        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_ENABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8,
  /* MpuDataRegionReadEnablePS2        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3 | OS_HAL_COREMPU_ENABLE_REGION4 | OS_HAL_COREMPU_ENABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8,
  /* MpuDataRegionReadEnablePS3        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_ENABLE_REGION4 | OS_HAL_COREMPU_ENABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8,
  /* MpuDataRegionReadEnablePS4        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_DISABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8,
  /* MpuDataRegionReadEnablePS5        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_DISABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8,
  },
  {
  /* Write access bit mask */
  /* MpuDataRegionWriteEnablePS0       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_ENABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6 | OS_HAL_COREMPU_ENABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8,
  /* MpuDataRegionWriteEnablePS1       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_ENABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8,
  /* MpuDataRegionWriteEnablePS2       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3 | OS_HAL_COREMPU_ENABLE_REGION4 | OS_HAL_COREMPU_ENABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8,
  /* MpuDataRegionWriteEnablePS3       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_ENABLE_REGION4 | OS_HAL_COREMPU_ENABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8,
  /* MpuDataRegionWriteEnablePS4       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_DISABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8,
  /* MpuDataRegionWriteEnablePS5       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_DISABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8,
  },
  
  /* .MpuCodeRegionStartSlot           = */ 0,
  /* .MpuCodeRegionCount               = */ 0,
  /* .MpuCodeRegions                   = */ NULL_PTR,
  {
  /* Execution right bit mask */
  /* MpuCodeRegionExecutionEnablePS0   = */ 0uL,
  /* MpuCodeRegionExecutionEnablePS1   = */ 0uL,
  /* MpuCodeRegionExecutionEnablePS2   = */ 0uL,
  /* MpuCodeRegionExecutionEnablePS3   = */ 0uL,
  /* MpuCodeRegionExecutionEnablePS4   = */ 0uL,
  /* MpuCodeRegionExecutionEnablePS5   = */ 0uL,
  }
};

/*! HAL memory protection configuration data: Core1_MR_B */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_Core1_MR_B_DataRegions[1];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_Core1_MR_B_DataRegions[1] =
{
    {
      /* MPU region: Dummy */
      /* .StartAddress  = */ 0uL,
      /* .EndAddress    = */ 0uL
    },
};
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_Core1_MR_B =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 1,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_Core1_MR_B_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION9,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Core1_MR_D */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_Core1_MR_D_DataRegions[1];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_Core1_MR_D_DataRegions[1] =
{
    {
      /* MPU region: ram__dspr1__VP_D */
      /* .StartAddress  = */ (uint32)&BeginOf_ram__dspr1__VP_D,  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
      /* .EndAddress    = */ (uint32)&EndOf_ram__dspr1__VP_D  /* PRQA S 0306, 0324 */ /* MD_Os_Hal_Rule11.4_0306, MD_Os_Hal_Rule11.2_0324 */
    },
};
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_Core1_MR_D =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 1,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_Core1_MR_D_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION9,
  /* .MpuDataRegionReadEnable         = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION9,
  /* .MpuDataRegionWriteEnable        = */ 0uL | OS_HAL_COREMPU_ENABLE_REGION9,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Core1_MR_QM */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_Core1_MR_QM =
{
  /* .ProtectionSet                   = */ 3,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: SystemApplication_OsCore_Core1 */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_SystemApplication_OsCore_Core1 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: ADC0SR0_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_ADC0SR0_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: ADC1SR0_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_ADC1SR0_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: ADC1SR1_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_ADC1SR1_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: ADC2SR0_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_ADC2SR0_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: ADC2SR1_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_ADC2SR1_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: ADC3SR0_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_ADC3SR0_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: ADC8SR0_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_ADC8SR0_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: CounterIsr_SystemTimerCore1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CounterIsr_SystemTimerCore1 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: DMACH50SR_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_DMACH50SR_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: DMACH51SR_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_DMACH51SR_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: GTMTOM1SR4_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_GTMTOM1SR4_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: QSPI2ERR_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_QSPI2ERR_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: QSPI2PT_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_QSPI2PT_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: QSPI2UD_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_QSPI2UD_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: SENTCH1_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_SENTCH1_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: SENTCH4_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_SENTCH4_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: SENTCH5_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_SENTCH5_ISR =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: XSignalIsr_OsCore_Core1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_XSignalIsr_OsCore_Core1 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: IdleTask_OsCore_Core1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_IdleTask_OsCore_Core1 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Rte_Task_10ms_D_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Rte_Task_10ms_D_C1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Rte_Task_20ms_BB_RkapRle_QM_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Rte_Task_20ms_BB_RkapRle_QM_C1 =
{
  /* .ProtectionSet                   = */ 3,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Rte_Task_OIE_D_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Rte_Task_OIE_D_C1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Rte_Task_OIE_QM_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Rte_Task_OIE_QM_C1 =
{
  /* .ProtectionSet                   = */ 3,
  
  /* .MpuDataRegionStartSlot          = */ 9,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: TaskUserIdle_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_TaskUserIdle_C1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_10ms_D_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_10ms_D_C1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_10ms_D_C1_1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_10ms_D_C1_1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_10ms_Hsb_EpbEnabled_B_D_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_10ms_Hsb_EpbEnabled_B_D_C1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_10ms_Receive_D_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_10ms_Receive_D_C1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_10ms_Send_D_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_10ms_Send_D_C1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_1ms_D_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_1ms_D_C1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_20ms_D_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_20ms_D_C1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_5ms_D_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_5ms_D_C1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_Hsb_Init_EpbEnabled_B_D_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_Hsb_Init_EpbEnabled_B_D_C1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

/*! HAL memory protection configuration data: Task_Init_D_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_Init_D_C1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL,
};

#define OS_STOP_SEC_CORE1_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! HAL memory protection configuration data: SystemMpu */
CONST(Os_Hal_MpSystemConfigType, OS_CONST) OsCfg_Hal_Mp_SystemMpu =
{
  /* .SysMpuId  = */ 0
};

/*! HAL memory protection configuration data: EmptyThread */

CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_EmptyThread =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 0,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0uL,
  /* .MpuDataRegionReadEnable         = */ 0uL,
  /* .MpuDataRegionWriteEnable        = */ 0uL,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0uL,
  /* .MpuCodeRegionExecutionEnable    = */ 0uL
};

#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  END OF FILE: Os_Hal_MemoryProtection_Lcfg.c
 *********************************************************************************************************************/
