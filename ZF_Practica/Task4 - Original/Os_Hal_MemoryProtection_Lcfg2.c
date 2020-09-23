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
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: ZF Friedrichshafen AG
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: SAK-TC387QP-160F300S
 *    License Scope : The usage is restricted to CBD1600488_D07
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_Hal_MemoryProtection_Lcfg.c
 *   Generation Time: 2018-07-04 13:49:51
 *           Project: DSC_VIP - Version 1.0
 *          Delivery: CBD1600488_D07
 *      Tool Version: DaVinci Configurator (beta) 5.15.36 SP5
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! These programs are fully operative programs. With regard to the fact that the programs are a beta-version only,    !
 ! Vector Informatik's liability shall be expressly excluded in cases of ordinary negligence, to the extent           !
 ! admissible by law or statute.                                                                                      !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/

/* PRQA S 0777, 0779, 0810, 0828, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_1.1_810, MD_MSR_1.1_828, MD_MSR_1.1_857 */

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
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL memory protection configuration data: OsCore_Core_1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore_Core_1_DataRegions[7];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore_Core_1_DataRegions[7] =
{
  {
    /* MPU region: Stack region */
    /* .StartAddress  = */ (uint32)0x0UL,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .EndAddress    = */ (uint32)0x0UL  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
  },
  {
    /* MPU region: MR_GVX1000_Core1 */
    /* .StartAddress  = */ (uint32)&_lc_gb___AREA_databss_GVX1000,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .EndAddress    = */ (uint32)&_lc_ge___AREA_databss_GVX1000  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
  },
  {
    /* MPU region: ram_dlmucpu2_MR_QM_SHARED_Core1 */
    /* .StartAddress  = */ (uint32)&_lc_gb___AREA_databss_ram__dlmucpu2__MR_QM_SHARED,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .EndAddress    = */ (uint32)&_lc_ge___AREA_databss_ram__dlmucpu2__MR_QM_SHARED  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
  },
  {
    /* MPU region: ram__dlmucpu1__MR_BMW_BB_QM_C1 */
    /* .StartAddress  = */ (uint32)&_lc_gb___AREA_databss_ram__dlmucpu1__MR_BMW_BB_QM_C1,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .EndAddress    = */ (uint32)&_lc_ge___AREA_databss_ram__dlmucpu1__MR_BMW_BB_QM_C1  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
  },
  {
    /* MPU region: MR_ALL_Core1 */
    /* .StartAddress  = */ (uint32)0x00000000UL,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .EndAddress    = */ (uint32)0xFFFFFFFFUL  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
  },
  {
    /* MPU region: MR_OLDA_VX1000_Core1 */
    /* .StartAddress  = */ (uint32)0x8FE70000UL,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .EndAddress    = */ (uint32)0x8FE7FFFFUL  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
  },
  {
    /* MPU region: ram_dspr2_MR_RAM_DEFAULT_Core1 */
    /* .StartAddress  = */ (uint32)&_lc_gb_DSC_RAM_DEFAULT,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .EndAddress    = */ (uint32)&_lc_ge_DSC_RAM_DEFAULT  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
  },
};
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore_Core_1_CodeRegions[1];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore_Core_1_CodeRegions[1] =
{
  {
    /* MPU region: MR_CODE_Core1 */
    /* .StartAddress  = */ (uint32)0x00000000UL,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .EndAddress    = */ (uint32)0xFFFFFFFFUL  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
  },
};
CONST(Os_Hal_MpCoreConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore_Core_1 =
{
  /* .MpuDataRegionStartSlot           = */ 0,
  /* .MpuDataRegionCount               = */ 7,
  /* .MpuDataRegions                   = */ OsCfg_Hal_Mp_OsCore_Core_1_DataRegions,
  {
  /* Read access bit mask */
  /* MpuDataRegionReadEnablePS0        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_ENABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_DISABLE_REGION6,
  /* MpuDataRegionReadEnablePS1        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_ENABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_DISABLE_REGION6,
  /* MpuDataRegionReadEnablePS2        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_ENABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_DISABLE_REGION6,
  /* MpuDataRegionReadEnablePS3        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_ENABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_DISABLE_REGION6,
  /* MpuDataRegionReadEnablePS4        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_ENABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_DISABLE_REGION6,
  /* MpuDataRegionReadEnablePS5        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_ENABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_DISABLE_REGION6,
  },
  {
  /* Write access bit mask */
  /* MpuDataRegionWriteEnablePS0       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_ENABLE_REGION4 | OS_HAL_COREMPU_ENABLE_REGION5 | OS_HAL_COREMPU_DISABLE_REGION6,
  /* MpuDataRegionWriteEnablePS1       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_ENABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6,
  /* MpuDataRegionWriteEnablePS2       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_ENABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6,
  /* MpuDataRegionWriteEnablePS3       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_ENABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6,
  /* MpuDataRegionWriteEnablePS4       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_ENABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6,
  /* MpuDataRegionWriteEnablePS5       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_ENABLE_REGION5 | OS_HAL_COREMPU_DISABLE_REGION6,
  },
  
  /* .MpuCodeRegionStartSlot           = */ 0,
  /* .MpuCodeRegionCount               = */ 1,
  /* .MpuCodeRegions                   = */ OsCfg_Hal_Mp_OsCore_Core_1_CodeRegions,
  {
  /* Execution right bit mask */
  /* MpuCodeRegionExecutionEnablePS0   = */ 0 | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS1   = */ 0 | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS2   = */ 0 | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS3   = */ 0 | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS4   = */ 0 | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS5   = */ 0 | OS_HAL_COREMPU_ENABLE_REGION0,
  }
};

/*! HAL memory protection configuration data: OsAppl_ASILB_Core_1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsAppl_ASILB_Core_1_DataRegions[3];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsAppl_ASILB_Core_1_DataRegions[3] =
{
    {
      /* MPU region: MR_OS_IOC_ASILB_Core1 */
      /* .StartAddress  = */ (uint32)&_lc_gb_OS_OsAppl_ASILB_Core_1_VAR_NOCACHE_NOINIT_GROUP,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
      /* .EndAddress    = */ (uint32)&_lc_ge_OS_OsAppl_ASILB_Core_1_VAR_NOCACHE_NOINIT_GROUP  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    },
    {
      /* MPU region: ram__dspr1__MR_BMW_BB_B_Core1 */
      /* .StartAddress  = */ (uint32)&_lc_gb___AREA_databss_ram__dspr1__MR_BMW_BB_B_Core1,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
      /* .EndAddress    = */ (uint32)&_lc_ge___AREA_databss_ram__dspr1__MR_BMW_BB_B_Core1  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    },
    {
      /* MPU region: ram__pspr1__MR_BMW_BB_B_Core1 */
      /* .StartAddress  = */ (uint32)&_lc_gb___AREA_databss_ram__pspr1__MR_BMW_BB_B_Core1,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
      /* .EndAddress    = */ (uint32)&_lc_ge___AREA_databss_ram__pspr1__MR_BMW_BB_B_Core1  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    },
};
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_OsAppl_ASILB_Core_1 =
{
  /* .ProtectionSet                   = */ 3,
  
  /* .MpuDataRegionStartSlot          = */ 7,
  /* .MpuDataRegionCount              = */ 3,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_OsAppl_ASILB_Core_1_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0 | OS_HAL_COREMPU_ENABLE_REGION7 | OS_HAL_COREMPU_ENABLE_REGION8 | OS_HAL_COREMPU_ENABLE_REGION9,
  /* .MpuDataRegionReadEnable         = */ 0 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8 | OS_HAL_COREMPU_DISABLE_REGION9,
  /* .MpuDataRegionWriteEnable        = */ 0 | OS_HAL_COREMPU_ENABLE_REGION7 | OS_HAL_COREMPU_ENABLE_REGION8 | OS_HAL_COREMPU_ENABLE_REGION9,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsAppl_ASILC_Core_1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsAppl_ASILC_Core_1_DataRegions[1];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsAppl_ASILC_Core_1_DataRegions[1] =
{
    {
      /* MPU region: ram__dspr1__MR_BMW_BB_C_Core1 */
      /* .StartAddress  = */ (uint32)&_lc_gb___AREA_databss_ram__dspr1__MR_BMW_BB_C_Core1,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
      /* .EndAddress    = */ (uint32)&_lc_ge___AREA_databss_ram__dspr1__MR_BMW_BB_C_Core1  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    },
};
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_OsAppl_ASILC_Core_1 =
{
  /* .ProtectionSet                   = */ 2,
  
  /* .MpuDataRegionStartSlot          = */ 7,
  /* .MpuDataRegionCount              = */ 1,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_OsAppl_ASILC_Core_1_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0 | OS_HAL_COREMPU_ENABLE_REGION7,
  /* .MpuDataRegionReadEnable         = */ 0 | OS_HAL_COREMPU_DISABLE_REGION7,
  /* .MpuDataRegionWriteEnable        = */ 0 | OS_HAL_COREMPU_ENABLE_REGION7,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsAppl_ASILD_Core_1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsAppl_ASILD_Core_1_DataRegions[3];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsAppl_ASILD_Core_1_DataRegions[3] =
{
    {
      /* MPU region: ram__dlmucpu1__MR_BMW_BB_D_Core1 */
      /* .StartAddress  = */ (uint32)&_lc_gb___AREA_databss_ram__dlmucpu1__MR_BMW_BB_D_Core1,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
      /* .EndAddress    = */ (uint32)&_lc_ge___AREA_databss_ram__dlmucpu1__MR_BMW_BB_D_Core1  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    },
    {
      /* MPU region: ram__dspr1__MR_BMW_BB_D_Core1 */
      /* .StartAddress  = */ (uint32)&_lc_gb___AREA_databss_ram__dspr1__MR_BMW_BB_D_Core1,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
      /* .EndAddress    = */ (uint32)&_lc_ge___AREA_databss_ram__dspr1__MR_BMW_BB_D_Core1  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    },
    {
      /* MPU region: MR_OS_IOC_ASILD_Core1 */
      /* .StartAddress  = */ (uint32)&_lc_gb_OS_OsAppl_ASILD_Core_1_VAR_NOCACHE_NOINIT_GROUP,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
      /* .EndAddress    = */ (uint32)&_lc_ge_OS_OsAppl_ASILD_Core_1_VAR_NOCACHE_NOINIT_GROUP  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    },
};
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_OsAppl_ASILD_Core_1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 7,
  /* .MpuDataRegionCount              = */ 3,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_OsAppl_ASILD_Core_1_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0 | OS_HAL_COREMPU_ENABLE_REGION7 | OS_HAL_COREMPU_ENABLE_REGION8 | OS_HAL_COREMPU_ENABLE_REGION9,
  /* .MpuDataRegionReadEnable         = */ 0 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8 | OS_HAL_COREMPU_DISABLE_REGION9,
  /* .MpuDataRegionWriteEnable        = */ 0 | OS_HAL_COREMPU_ENABLE_REGION7 | OS_HAL_COREMPU_ENABLE_REGION8 | OS_HAL_COREMPU_ENABLE_REGION9,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsAppl_Privileged_Core_1 */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_OsAppl_Privileged_Core_1 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 7,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsAppl_QM_Core_1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsAppl_QM_Core_1_DataRegions[7];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsAppl_QM_Core_1_DataRegions[7] =
{
    {
      /* MPU region: ram__dspr1__MR_QM_Core1 */
      /* .StartAddress  = */ (uint32)&_lc_gb___AREA_databss_ram__dspr1__MR_QM_Core1,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
      /* .EndAddress    = */ (uint32)&_lc_ge___AREA_databss_ram__dspr1__MR_QM_Core1  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    },
    {
      /* MPU region: MR_OS_IOC_QM_Core1 */
      /* .StartAddress  = */ (uint32)&_lc_gb_OS_OsAppl_QM_Core_1_VAR_NOCACHE_NOINIT_GROUP,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
      /* .EndAddress    = */ (uint32)&_lc_ge_OS_OsAppl_QM_Core_1_VAR_NOCACHE_NOINIT_GROUP  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    },
    {
      /* MPU region: MR_SHAREDDATA_BRS_VIP */
      /* .StartAddress  = */ (uint32)&_lc_gb_Shared_SYNC_vEcuStates,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
      /* .EndAddress    = */ (uint32)0xB007FC08UL  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    },
    {
      /* MPU region: MR_PERIPHERALS */
      /* .StartAddress  = */ (uint32)0xF0000000UL,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
      /* .EndAddress    = */ (uint32)0xFFFFFFFFUL  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    },
    {
      /* MPU region: MR_PERIPH_CAN2_Core1 */
      /* .StartAddress  = */ (uint32)0xF0220000UL,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
      /* .EndAddress    = */ (uint32)0xF0228FFFUL  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    },
    {
      /* MPU region: MR_PERIPH_ERAY0_Core1 */
      /* .StartAddress  = */ (uint32)0xF001C000UL,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
      /* .EndAddress    = */ (uint32)0xF001CFFFUL  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    },
    {
      /* MPU region: ram__pspr1__MR_BMW_BB_QM_Core1 */
      /* .StartAddress  = */ (uint32)&_lc_gb___AREA_databss_ram__pspr1__MR_BMW_BB_QM_Core1,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
      /* .EndAddress    = */ (uint32)&_lc_ge___AREA_databss_ram__pspr1__MR_BMW_BB_QM_Core1  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    },
};
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_OsAppl_QM_Core_1 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 7,
  /* .MpuDataRegionCount              = */ 7,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_OsAppl_QM_Core_1_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0 | OS_HAL_COREMPU_ENABLE_REGION7 | OS_HAL_COREMPU_ENABLE_REGION8 | OS_HAL_COREMPU_ENABLE_REGION9 | OS_HAL_COREMPU_ENABLE_REGION10 | OS_HAL_COREMPU_ENABLE_REGION11 | OS_HAL_COREMPU_ENABLE_REGION12 | OS_HAL_COREMPU_ENABLE_REGION13,
  /* .MpuDataRegionReadEnable         = */ 0 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8 | OS_HAL_COREMPU_DISABLE_REGION9 | OS_HAL_COREMPU_DISABLE_REGION10 | OS_HAL_COREMPU_DISABLE_REGION11 | OS_HAL_COREMPU_DISABLE_REGION12 | OS_HAL_COREMPU_DISABLE_REGION13,
  /* .MpuDataRegionWriteEnable        = */ 0 | OS_HAL_COREMPU_ENABLE_REGION7 | OS_HAL_COREMPU_ENABLE_REGION8 | OS_HAL_COREMPU_ENABLE_REGION9 | OS_HAL_COREMPU_ENABLE_REGION10 | OS_HAL_COREMPU_ENABLE_REGION11 | OS_HAL_COREMPU_ENABLE_REGION12 | OS_HAL_COREMPU_ENABLE_REGION13,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: SystemApplication_OsCore_Core_1 */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_SystemApplication_OsCore_Core_1 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 7,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: CanIsr_MC_MCAN_0 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_MC_MCAN_0_DataRegions[2];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_MC_MCAN_0_DataRegions[2] =
{
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
};
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_MC_MCAN_0 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 14,
  /* .MpuDataRegionCount              = */ 2,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_CanIsr_MC_MCAN_0_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0 | OS_HAL_COREMPU_ENABLE_REGION14 | OS_HAL_COREMPU_ENABLE_REGION15,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: CounterIsr_SystemTimer_1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CounterIsr_SystemTimer_1 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 7,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: Fr_IrqLine0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Fr_IrqLine0 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 7,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: Fr_IrqTimer0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Fr_IrqTimer0 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 7,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: XSignalIsr_OsCore_Core1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_XSignalIsr_OsCore_Core1 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 7,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: IdleTask_OsCore_Core_1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_IdleTask_OsCore_Core_1 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 7,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_Application_Init_C1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_Application_Init_C1_DataRegions[2];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_Application_Init_C1_DataRegions[2] =
{
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
};
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_Application_Init_C1 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 14,
  /* .MpuDataRegionCount              = */ 2,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_OsTask_Application_Init_C1_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0 | OS_HAL_COREMPU_ENABLE_REGION14 | OS_HAL_COREMPU_ENABLE_REGION15,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_BSW_Init_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_Init_C1 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 7,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_BSW_Memory_C1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_Memory_C1_DataRegions[2];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_Memory_C1_DataRegions[2] =
{
  {
    /* MPU region: MR_FLASH_Fls */
    /* .StartAddress  = */ (uint32)0xAF000000UL,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .EndAddress    = */ (uint32)0xAF100000UL  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
  },
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
};
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_Memory_C1 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 14,
  /* .MpuDataRegionCount              = */ 2,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_OsTask_BSW_Memory_C1_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0 | OS_HAL_COREMPU_ENABLE_REGION14 | OS_HAL_COREMPU_ENABLE_REGION15,
  /* .MpuDataRegionReadEnable         = */ 0 | OS_HAL_COREMPU_DISABLE_REGION14,
  /* .MpuDataRegionWriteEnable        = */ 0 | OS_HAL_COREMPU_ENABLE_REGION14,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_BSW_XCP_C1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_XCP_C1_DataRegions[2];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_XCP_C1_DataRegions[2] =
{
  {
    /* MPU region: MR_XCP_WRITE_ACCESS_1_Core1 */
    /* .StartAddress  = */ (uint32)0x50000000UL,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .EndAddress    = */ (uint32)0x6010FFFFUL  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
  },
  {
    /* MPU region: MR_XCP_WRITE_ACCESS_2_Core1 */
    /* .StartAddress  = */ (uint32)0x90010000UL,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .EndAddress    = */ (uint32)0x9002FFFFUL  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
  },
};
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_XCP_C1 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 14,
  /* .MpuDataRegionCount              = */ 2,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_OsTask_BSW_XCP_C1_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0 | OS_HAL_COREMPU_ENABLE_REGION14 | OS_HAL_COREMPU_ENABLE_REGION15,
  /* .MpuDataRegionReadEnable         = */ 0 | OS_HAL_COREMPU_DISABLE_REGION14 | OS_HAL_COREMPU_DISABLE_REGION15,
  /* .MpuDataRegionWriteEnable        = */ 0 | OS_HAL_COREMPU_ENABLE_REGION14 | OS_HAL_COREMPU_ENABLE_REGION15,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_BSW_cyclic_1000ms_C1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_cyclic_1000ms_C1_DataRegions[2];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_cyclic_1000ms_C1_DataRegions[2] =
{
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
};
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_cyclic_1000ms_C1 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 14,
  /* .MpuDataRegionCount              = */ 2,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_OsTask_BSW_cyclic_1000ms_C1_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0 | OS_HAL_COREMPU_ENABLE_REGION14 | OS_HAL_COREMPU_ENABLE_REGION15,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_BSW_cyclic_10ms_C1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_cyclic_10ms_C1_DataRegions[2];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_cyclic_10ms_C1_DataRegions[2] =
{
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
};
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_cyclic_10ms_C1 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 14,
  /* .MpuDataRegionCount              = */ 2,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_OsTask_BSW_cyclic_10ms_C1_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0 | OS_HAL_COREMPU_ENABLE_REGION14 | OS_HAL_COREMPU_ENABLE_REGION15,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_BSW_cyclic_20ms_C1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_cyclic_20ms_C1_DataRegions[2];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_cyclic_20ms_C1_DataRegions[2] =
{
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
};
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_cyclic_20ms_C1 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 14,
  /* .MpuDataRegionCount              = */ 2,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_OsTask_BSW_cyclic_20ms_C1_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0 | OS_HAL_COREMPU_ENABLE_REGION14 | OS_HAL_COREMPU_ENABLE_REGION15,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_BSW_cyclic_COM_C1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_cyclic_COM_C1_DataRegions[2];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_cyclic_COM_C1_DataRegions[2] =
{
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
};
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_cyclic_COM_C1 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 14,
  /* .MpuDataRegionCount              = */ 2,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_OsTask_BSW_cyclic_COM_C1_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0 | OS_HAL_COREMPU_ENABLE_REGION14 | OS_HAL_COREMPU_ENABLE_REGION15,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_BSW_cyclic_FrNm_ComTx_C1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_cyclic_FrNm_ComTx_C1_DataRegions[2];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_cyclic_FrNm_ComTx_C1_DataRegions[2] =
{
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
};
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_cyclic_FrNm_ComTx_C1 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 14,
  /* .MpuDataRegionCount              = */ 2,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_OsTask_BSW_cyclic_FrNm_ComTx_C1_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0 | OS_HAL_COREMPU_ENABLE_REGION14 | OS_HAL_COREMPU_ENABLE_REGION15,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_EcuStateHandling_QM_C1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_EcuStateHandling_QM_C1_DataRegions[2];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_EcuStateHandling_QM_C1_DataRegions[2] =
{
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
};
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_EcuStateHandling_QM_C1 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 14,
  /* .MpuDataRegionCount              = */ 2,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_OsTask_EcuStateHandling_QM_C1_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0 | OS_HAL_COREMPU_ENABLE_REGION14 | OS_HAL_COREMPU_ENABLE_REGION15,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_ServerRunnables_1_B_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_ServerRunnables_1_B_C1 =
{
  /* .ProtectionSet                   = */ 3,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_ServerRunnables_1_D_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_ServerRunnables_1_D_C1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_ServerRunnables_1_QM_C1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_ServerRunnables_1_QM_C1_DataRegions[2];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_ServerRunnables_1_QM_C1_DataRegions[2] =
{
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
};
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_ServerRunnables_1_QM_C1 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 14,
  /* .MpuDataRegionCount              = */ 2,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_OsTask_ServerRunnables_1_QM_C1_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0 | OS_HAL_COREMPU_ENABLE_REGION14 | OS_HAL_COREMPU_ENABLE_REGION15,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_ServerRunnables_2_B_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_ServerRunnables_2_B_C1 =
{
  /* .ProtectionSet                   = */ 3,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_ServerRunnables_2_D_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_ServerRunnables_2_D_C1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_ServerRunnables_2_QM_C1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_ServerRunnables_2_QM_C1_DataRegions[2];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_ServerRunnables_2_QM_C1_DataRegions[2] =
{
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
};
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_ServerRunnables_2_QM_C1 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 14,
  /* .MpuDataRegionCount              = */ 2,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_OsTask_ServerRunnables_2_QM_C1_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0 | OS_HAL_COREMPU_ENABLE_REGION14 | OS_HAL_COREMPU_ENABLE_REGION15,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_ServerRunnables_3_D_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_ServerRunnables_3_D_C1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_ServerRunnables_3_QM_C1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_ServerRunnables_3_QM_C1_DataRegions[2];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_ServerRunnables_3_QM_C1_DataRegions[2] =
{
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
};
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_ServerRunnables_3_QM_C1 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 14,
  /* .MpuDataRegionCount              = */ 2,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_OsTask_ServerRunnables_3_QM_C1_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0 | OS_HAL_COREMPU_ENABLE_REGION14 | OS_HAL_COREMPU_ENABLE_REGION15,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_ServerRunnables_4_D_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_ServerRunnables_4_D_C1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_cyclic_Tc10ms_1_D_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_cyclic_Tc10ms_1_D_C1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_cyclic_Tc10ms_2_QM_C1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_cyclic_Tc10ms_2_QM_C1_DataRegions[2];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_cyclic_Tc10ms_2_QM_C1_DataRegions[2] =
{
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
};
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_cyclic_Tc10ms_2_QM_C1 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 14,
  /* .MpuDataRegionCount              = */ 2,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_OsTask_cyclic_Tc10ms_2_QM_C1_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0 | OS_HAL_COREMPU_ENABLE_REGION14 | OS_HAL_COREMPU_ENABLE_REGION15,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_cyclic_Tc10ms_3_D_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_cyclic_Tc10ms_3_D_C1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_cyclic_Tc10ms_4_C_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_cyclic_Tc10ms_4_C_C1 =
{
  /* .ProtectionSet                   = */ 2,
  
  /* .MpuDataRegionStartSlot          = */ 8,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_cyclic_Tc10ms_5_QM_C1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_cyclic_Tc10ms_5_QM_C1_DataRegions[2];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_cyclic_Tc10ms_5_QM_C1_DataRegions[2] =
{
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
};
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_cyclic_Tc10ms_5_QM_C1 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 14,
  /* .MpuDataRegionCount              = */ 2,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_OsTask_cyclic_Tc10ms_5_QM_C1_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0 | OS_HAL_COREMPU_ENABLE_REGION14 | OS_HAL_COREMPU_ENABLE_REGION15,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_cyclic_Tc10ms_6_B_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_cyclic_Tc10ms_6_B_C1 =
{
  /* .ProtectionSet                   = */ 3,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_cyclic_Tc10ms_7_D_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_cyclic_Tc10ms_7_D_C1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_cyclic_Tc10ms_8_QM_C1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_cyclic_Tc10ms_8_QM_C1_DataRegions[2];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_cyclic_Tc10ms_8_QM_C1_DataRegions[2] =
{
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
};
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_cyclic_Tc10ms_8_QM_C1 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 14,
  /* .MpuDataRegionCount              = */ 2,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_OsTask_cyclic_Tc10ms_8_QM_C1_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0 | OS_HAL_COREMPU_ENABLE_REGION14 | OS_HAL_COREMPU_ENABLE_REGION15,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_cyclic_Tc10ms_9_D_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_cyclic_Tc10ms_9_D_C1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_cyclic_Tc20ms_1_B_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_cyclic_Tc20ms_1_B_C1 =
{
  /* .ProtectionSet                   = */ 3,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_cyclic_Tc20ms_2_QM_C1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_cyclic_Tc20ms_2_QM_C1_DataRegions[2];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_cyclic_Tc20ms_2_QM_C1_DataRegions[2] =
{
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
};
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_cyclic_Tc20ms_2_QM_C1 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 14,
  /* .MpuDataRegionCount              = */ 2,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_OsTask_cyclic_Tc20ms_2_QM_C1_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0 | OS_HAL_COREMPU_ENABLE_REGION14 | OS_HAL_COREMPU_ENABLE_REGION15,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_cyclic_Tc20ms_3_B_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_cyclic_Tc20ms_3_B_C1 =
{
  /* .ProtectionSet                   = */ 3,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_noncyclic_B_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_noncyclic_B_C1 =
{
  /* .ProtectionSet                   = */ 3,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_noncyclic_C_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_noncyclic_C_C1 =
{
  /* .ProtectionSet                   = */ 2,
  
  /* .MpuDataRegionStartSlot          = */ 8,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_noncyclic_D_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_noncyclic_D_C1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_noncyclic_QM_C1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_noncyclic_QM_C1_DataRegions[2];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_noncyclic_QM_C1_DataRegions[2] =
{
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
};
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_noncyclic_QM_C1 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 14,
  /* .MpuDataRegionCount              = */ 2,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_OsTask_noncyclic_QM_C1_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0 | OS_HAL_COREMPU_ENABLE_REGION14 | OS_HAL_COREMPU_ENABLE_REGION15,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_services_Tc100ms_B_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_services_Tc100ms_B_C1 =
{
  /* .ProtectionSet                   = */ 3,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_services_Tc100ms_C_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_services_Tc100ms_C_C1 =
{
  /* .ProtectionSet                   = */ 2,
  
  /* .MpuDataRegionStartSlot          = */ 8,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_services_Tc100ms_D_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_services_Tc100ms_D_C1 =
{
  /* .ProtectionSet                   = */ 1,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_services_Tc100ms_QM_C1 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_services_Tc100ms_QM_C1_DataRegions[2];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_services_Tc100ms_QM_C1_DataRegions[2] =
{
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
  {
    /* MPU region: Dummy */
    /* .StartAddress  = */ 0U,
    /* .EndAddress    = */ 0U
  },
};
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_services_Tc100ms_QM_C1 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 14,
  /* .MpuDataRegionCount              = */ 2,
  /* .MpuDataRegions                  = */ OsCfg_Hal_Mp_OsTask_services_Tc100ms_QM_C1_DataRegions,
  /* .MpuDataRegionEnableMask         = */ 0 | OS_HAL_COREMPU_ENABLE_REGION14 | OS_HAL_COREMPU_ENABLE_REGION15,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: Task_UserIdle_C1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_UserIdle_C1 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 7,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_CORE1_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL memory protection configuration data: OsCore_Core_2 */
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore_Core_2_DataRegions[10];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore_Core_2_DataRegions[10] =
{
  {
    /* MPU region: Stack region */
    /* .StartAddress  = */ (uint32)0x0UL,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .EndAddress    = */ (uint32)0x0UL  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
  },
  {
    /* MPU region: ram__dspr2__MR_QM_Core2 */
    /* .StartAddress  = */ (uint32)&_lc_gb___AREA_databss_ram__dspr2__MR_QM_Core2,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .EndAddress    = */ (uint32)&_lc_ge___AREA_databss_ram__dspr2__MR_QM_Core2  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
  },
  {
    /* MPU region: ram__dlmucpu2__MR_BMW_BB_QM_C2 */
    /* .StartAddress  = */ (uint32)&_lc_gb___AREA_databss_ram__dlmucpu2__MR_BMW_BB_QM_C2,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .EndAddress    = */ (uint32)&_lc_ge___AREA_databss_ram__dlmucpu2__MR_BMW_BB_QM_C2  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
  },
  {
    /* MPU region: ram_dlmucpu2_MR_QM_SHARED_Core2 */
    /* .StartAddress  = */ (uint32)&_lc_gb___AREA_databss_ram__dlmucpu2__MR_QM_SHARED,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .EndAddress    = */ (uint32)&_lc_ge___AREA_databss_ram__dlmucpu2__MR_QM_SHARED  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
  },
  {
    /* MPU region: MR_OS_IOC_QM_Core2 */
    /* .StartAddress  = */ (uint32)&_lc_gb_OS_OsAppl_QM_Core_2_VAR_NOCACHE_NOINIT_GROUP,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .EndAddress    = */ (uint32)&_lc_ge_OS_OsAppl_QM_Core_2_VAR_NOCACHE_NOINIT_GROUP  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
  },
  {
    /* MPU region: MR_OLDA_VX1000_Core2 */
    /* .StartAddress  = */ (uint32)0x8FE70000UL,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .EndAddress    = */ (uint32)0x8FE7FFFFUL  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
  },
  {
    /* MPU region: MR_GVX1000_Core2 */
    /* .StartAddress  = */ (uint32)&_lc_gb___AREA_databss_GVX1000,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .EndAddress    = */ (uint32)&_lc_ge___AREA_databss_GVX1000  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
  },
  {
    /* MPU region: ram_dspr2_MR_RAM_DEFAULT_Core2 */
    /* .StartAddress  = */ (uint32)&_lc_gb_DSC_RAM_DEFAULT,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .EndAddress    = */ (uint32)&_lc_ge_DSC_RAM_DEFAULT  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
  },
  {
    /* MPU region: MR_ALL_Core2 */
    /* .StartAddress  = */ (uint32)0x00000000UL,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .EndAddress    = */ (uint32)0xFFFFFFFFUL  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
  },
  {
    /* MPU region: ram__pspr2__MR_QM_Core2 */
    /* .StartAddress  = */ (uint32)&_lc_gb___AREA_databss_ram__pspr2__MR_QM_Core2,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .EndAddress    = */ (uint32)&_lc_ge___AREA_databss_ram__pspr2__MR_QM_Core2  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
  },
};
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore_Core_2_CodeRegions[1];
static CONST(Os_Hal_MpuRegionRangeConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore_Core_2_CodeRegions[1] =
{
  {
    /* MPU region: MR_CODE_Core2 */
    /* .StartAddress  = */ (uint32)0x00000000UL,  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .EndAddress    = */ (uint32)0xFFFFFFFFUL  /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
  },
};
CONST(Os_Hal_MpCoreConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore_Core_2 =
{
  /* .MpuDataRegionStartSlot           = */ 0,
  /* .MpuDataRegionCount               = */ 10,
  /* .MpuDataRegions                   = */ OsCfg_Hal_Mp_OsCore_Core_2_DataRegions,
  {
  /* Read access bit mask */
  /* MpuDataRegionReadEnablePS0        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_DISABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_ENABLE_REGION8 | OS_HAL_COREMPU_DISABLE_REGION9,
  /* MpuDataRegionReadEnablePS1        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_DISABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_ENABLE_REGION8 | OS_HAL_COREMPU_DISABLE_REGION9,
  /* MpuDataRegionReadEnablePS2        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_DISABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_ENABLE_REGION8 | OS_HAL_COREMPU_DISABLE_REGION9,
  /* MpuDataRegionReadEnablePS3        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_DISABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_ENABLE_REGION8 | OS_HAL_COREMPU_DISABLE_REGION9,
  /* MpuDataRegionReadEnablePS4        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_DISABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_ENABLE_REGION8 | OS_HAL_COREMPU_DISABLE_REGION9,
  /* MpuDataRegionReadEnablePS5        = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_DISABLE_REGION5 | OS_HAL_COREMPU_DISABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_ENABLE_REGION8 | OS_HAL_COREMPU_DISABLE_REGION9,
  },
  {
  /* Write access bit mask */
  /* MpuDataRegionWriteEnablePS0       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_ENABLE_REGION5 | OS_HAL_COREMPU_DISABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_ENABLE_REGION8 | OS_HAL_COREMPU_DISABLE_REGION9,
  /* MpuDataRegionWriteEnablePS1       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_ENABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8 | OS_HAL_COREMPU_DISABLE_REGION9,
  /* MpuDataRegionWriteEnablePS2       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_ENABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8 | OS_HAL_COREMPU_DISABLE_REGION9,
  /* MpuDataRegionWriteEnablePS3       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_ENABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8 | OS_HAL_COREMPU_DISABLE_REGION9,
  /* MpuDataRegionWriteEnablePS4       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_ENABLE_REGION1 | OS_HAL_COREMPU_ENABLE_REGION2 | OS_HAL_COREMPU_ENABLE_REGION3 | OS_HAL_COREMPU_ENABLE_REGION4 | OS_HAL_COREMPU_ENABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6 | OS_HAL_COREMPU_ENABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8 | OS_HAL_COREMPU_ENABLE_REGION9,
  /* MpuDataRegionWriteEnablePS5       = */ OS_HAL_COREMPU_ENABLE_REGION0 | OS_HAL_COREMPU_DISABLE_REGION1 | OS_HAL_COREMPU_DISABLE_REGION2 | OS_HAL_COREMPU_DISABLE_REGION3 | OS_HAL_COREMPU_DISABLE_REGION4 | OS_HAL_COREMPU_ENABLE_REGION5 | OS_HAL_COREMPU_ENABLE_REGION6 | OS_HAL_COREMPU_DISABLE_REGION7 | OS_HAL_COREMPU_DISABLE_REGION8 | OS_HAL_COREMPU_DISABLE_REGION9,
  },
  
  /* .MpuCodeRegionStartSlot           = */ 0,
  /* .MpuCodeRegionCount               = */ 1,
  /* .MpuCodeRegions                   = */ OsCfg_Hal_Mp_OsCore_Core_2_CodeRegions,
  {
  /* Execution right bit mask */
  /* MpuCodeRegionExecutionEnablePS0   = */ 0 | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS1   = */ 0 | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS2   = */ 0 | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS3   = */ 0 | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS4   = */ 0 | OS_HAL_COREMPU_ENABLE_REGION0,
  /* MpuCodeRegionExecutionEnablePS5   = */ 0 | OS_HAL_COREMPU_ENABLE_REGION0,
  }
};

/*! HAL memory protection configuration data: OsAppl_Privileged_Core_2 */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_OsAppl_Privileged_Core_2 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsAppl_QM_Core_2 */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_OsAppl_QM_Core_2 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: SystemApplication_OsCore_Core_2 */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_SystemApplication_OsCore_Core_2 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: CounterIsr_SystemTimer_2 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CounterIsr_SystemTimer_2 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: XSignalIsr_OsCore_Core2 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_XSignalIsr_OsCore_Core2 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: IdleTask_OsCore_Core_2 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_IdleTask_OsCore_Core_2 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_BSW_Init_C2 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_Init_C2 =
{
  /* .ProtectionSet                   = */ 0,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_BSW_cyclic_10ms_C2 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_cyclic_10ms_C2 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_BSW_cyclic_20ms_C2 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_BSW_cyclic_20ms_C2 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_ServerRunnables_1_QM_C2 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_ServerRunnables_1_QM_C2 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_ServerRunnables_2_QM_C2 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_ServerRunnables_2_QM_C2 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_cyclic_Tc40ms_1_QM_C2 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_cyclic_Tc40ms_1_QM_C2 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_noncyclic_QM_C2 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_noncyclic_QM_C2 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: OsTask_services_Tc100ms_QM_C2 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_services_Tc100ms_QM_C2 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

/*! HAL memory protection configuration data: Task_UserIdle_C2 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_UserIdle_C2 =
{
  /* .ProtectionSet                   = */ 4,
  
  /* .MpuDataRegionStartSlot          = */ 10,
  /* .MpuDataRegionCount              = */ 0,
  /* .MpuDataRegions                  = */ NULL_PTR,
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 1,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0,
};

#define OS_STOP_SEC_CORE1_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

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
  /* .MpuDataRegionEnableMask         = */ 0,
  /* .MpuDataRegionReadEnable         = */ 0,
  /* .MpuDataRegionWriteEnable        = */ 0,
  
  /* .MpuCodeRegionStartSlot          = */ 0,
  /* .MpuCodeRegionCount              = */ 0,
  /* .MpuCodeRegions                  = */ NULL_PTR,
  /* .MpuCodeRegionEnableMask         = */ 0,
  /* .MpuCodeRegionExecutionEnable    = */ 0
};

#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
