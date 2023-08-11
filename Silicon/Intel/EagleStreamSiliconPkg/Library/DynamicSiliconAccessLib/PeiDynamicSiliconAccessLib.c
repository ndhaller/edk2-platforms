/** @file
  Implements silicon library dynamically linked functions

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#include <Base.h>
#include <Library/DebugLib.h>
#include <Library/BasicIpBlockServicesLib.h>

#include <Include/Guid/Dsa/DsaEmulationConfigurationLibApi.h>
#include <Include/Guid/Dsa/DsaCpuAndRevisionLibApi.h>
#include <Include/Guid/Dsa/DsaMemMapDataLibApi.h>
#include <Include/Guid/Dsa/DsaSystemInfoLibApi.h>
#include <Include/Guid/Dsa/DsaKtiApiLibApi.h>
#include <Include/Guid/Dsa/DsaPmcLibApi.h>
#include <Include/Guid/Dsa/DsaIoAccessLibApi.h>
#include <Include/Guid/Dsa/DsaSiliconWorkaroundLibApi.h>
#include <Include/Guid/Dsa/DsaX2ApicIdDetectLibApi.h>
#include <Include/Guid/Dsa/DsaIioSysInfoLibApi.h>
#include <Include/Guid/Dsa/DsaPchCycleDecodingLibApi.h>
#include <Include/Guid/Dsa/DsaTcoLibApi.h>
#include <Include/Guid/Dsa/DsaGpioLibApi.h>
#include <Include/Guid/Dsa/DsaGpioSocLibApi.h>
#include <Include/Guid/Dsa/DsaPeiIioSiPolicyLibApi.h>
#include <Include/Guid/Dsa/DsaSiPolicyLibApi.h>
#include <Include/Guid/Dsa/DsaRasRcPolicyPpiLibApi.h>
#include <Include/Guid/Dsa/DsaPeiUpiPolicyLibApi.h>
#include <Include/Guid/Dsa/DsaMemoryPolicyLibApi.h>
#include <Include/Guid/Dsa/DsaPchInfoLibApi.h>
#include <Include/Guid/Dsa/DsaMeConfigLibApi.h>
#include <Include/Guid/Dsa/DsaMeUtilsLibApi.h>
#include <Include/Guid/Dsa/DsaMeFiaMuxLibApi.h>
#include <Include/Guid/Dsa/DsaSecurityPolicyLibApi.h>
#include <Include/Guid/Dsa/DsaSecurityApiLibApi.h>
#include <Include/Guid/Dsa/DsaPsmiPolicyLibApi.h>
#include <Include/Guid/Dsa/DsaCpuPreMemPolicyLibApi.h>
#include <Include/Guid/Dsa/DsaMmPciLibApi.h>
#include <Include/Guid/Dsa/DsaMeTypeLibApi.h>
#include <Include/Guid/Dsa/DsaCrcLibApi.h>
#include <Include/Guid/Dsa/DsaBaseMemoryServicesLibApi.h>
#include <Include/Guid/Dsa/DsaModuleAddrCalcLibApi.h>
#include <Include/Guid/Dsa/DsaEspiLibApi.h>
#include <Include/Guid/Dsa/DsaSysHostPointerLibApi.h>
#include <Include/Guid/Dsa/DsaBiosGuardInitLibApi.h>
#include <Include/Guid/Dsa/DsaPchPciBdfLibApi.h>
#include <Include/Guid/Dsa/DsaGbeLibApi.h>
#include <Include/Guid/Dsa/DsaPchRtcLibApi.h>
#include <Include/Guid/Dsa/DsaPchPolicyLibApi.h>
#include <Include/Guid/Dsa/DsaSataSocLibApi.h>
#include <Include/Guid/Dsa/DsaChaIpLibApi.h>
#include <Include/Guid/Dsa/DsaMeGetConfigBlockApi.h>
#include <Include/Guid/Dsa/DsaPeiMeLibApi.h>
#include <Include/Guid/Dsa/DsaGpioGsxLibApi.h>
#include <Include/Guid/Dsa/DsaSpsPeiLibApi.h>
#include <Include/Guid/Dsa/DsaUboxIpInterfaceApi.h>
#include <Include/Guid/Dsa/DsaBasePcieHelperLibApi.h>
#include <Include/Guid/Dsa/DsaPchPcieRpLibApi.h>
#include <Include/Guid/Dsa/DsaUpiHostDataLibApi.h>
//@AdditionalIncludes

// v:/intel/ServerSiliconPkg/Include/Library/UpiHostDataLib.h:47
VOID *
GetKtiHostDataPtr (
  KTI_HOST_TYPE KtiHostType
  )
{
  VOID * ReturnValue = 0;
  DSA_UPI_HOST_DATA_LIB_API *DsaUpiHostDataLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaUpiHostDataLibApiGuid = DSA_UPI_HOST_DATA_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaUpiHostDataLibApiGuid, 0, (VOID **)&DsaUpiHostDataLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaUpiHostDataLibApiPtr->GetKtiHostDataPtr (KtiHostType);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/KtiApi.h:299
VOID
GetStackResource (
  UINT8 SocId,
  UINT8 Stack,
  KTI_STACK_RESOURCE * StackResouce
  )
{
  DSA_KTI_API_LIB_API *DsaKtiApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaKtiApiLibApiGuid = DSA_KTI_API_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaKtiApiLibApiGuid, 0, (VOID **)&DsaKtiApiLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  DsaKtiApiLibApiPtr->GetStackResource (SocId, Stack, StackResouce);
  return;
}

// v:/intel/CpRcPkg/Include/Library/KtiApi.h:329
UINT8
GetSegmentNum (
  UINT8 SocId
  )
{
  UINT8 ReturnValue = 0;
  DSA_KTI_API_LIB_API *DsaKtiApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaKtiApiLibApiGuid = DSA_KTI_API_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaKtiApiLibApiGuid, 0, (VOID **)&DsaKtiApiLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaKtiApiLibApiPtr->GetSegmentNum (SocId);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/MmPciBaseLib.h:44
UINTN
MmPciBase (
  UINT32 Bus,
  UINT32 Device,
  UINT32 Function
  )
{
  UINTN ReturnValue = 0;
  DSA_MM_PCI_LIB_API *DsaMmPciLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMmPciLibApiGuid = DSA_MM_PCI_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaMmPciLibApiGuid, 0, (VOID **)&DsaMmPciLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaMmPciLibApiPtr->MmPciBase (Bus, Device, Function);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Guid/UboxIpInterface.h:490
EFI_STATUS
UBoxSetInDirtyWarmResetModeFlagInScratchpad (
  UINT8 SocId,
  UINT8 BoxInst,
  UINT8 Flag
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_UBOX_IP_INTERFACE_API *DsaUboxIpInterfaceApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaUboxIpInterfaceApiGuid = DSA_UBOX_IP_INTERFACE_API_GUID;

  DsaStatus = LocateInterface (&gDsaUboxIpInterfaceApiGuid, 0, (VOID **)&DsaUboxIpInterfaceApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaUboxIpInterfaceApiPtr->UBoxSetInDirtyWarmResetModeFlagInScratchpad (SocId, BoxInst, Flag);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Guid/UboxIpInterface.h:550
EFI_STATUS
UBoxSetDirtyWarmResetFlowCompletedFlagInScratchpad (
  UINT8 SocId,
  UINT8 BoxInst,
  UINT8 Flag
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_UBOX_IP_INTERFACE_API *DsaUboxIpInterfaceApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaUboxIpInterfaceApiGuid = DSA_UBOX_IP_INTERFACE_API_GUID;

  DsaStatus = LocateInterface (&gDsaUboxIpInterfaceApiGuid, 0, (VOID **)&DsaUboxIpInterfaceApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaUboxIpInterfaceApiPtr->UBoxSetDirtyWarmResetFlowCompletedFlagInScratchpad (SocId, BoxInst, Flag);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/PchPcieRpLib.h:126
UINT64
PchPcieBase (
  UINT32 RpIndex
  )
{
  UINT64 ReturnValue = 0;
  DSA_PCH_PCIE_RP_LIB_API *DsaPchPcieRpLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchPcieRpLibApiGuid = DSA_PCH_PCIE_RP_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPchPcieRpLibApiGuid, 0, (VOID **)&DsaPchPcieRpLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPchPcieRpLibApiPtr->PchPcieBase (RpIndex);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/PcieHelperLib.h:253
UINT64
PcieRpSetSubordSecondBus (
  UINT64 RpBase,
  UINT8 Segment,
  UINT8 TempPciBus
  )
{
  UINT64 ReturnValue = 0;
  DSA_BASE_PCIE_HELPER_LIB_API *DsaBasePcieHelperLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaBasePcieHelperLibApiGuid = DSA_BASE_PCIE_HELPER_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaBasePcieHelperLibApiGuid, 0, (VOID **)&DsaBasePcieHelperLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaBasePcieHelperLibApiPtr->PcieRpSetSubordSecondBus (RpBase, Segment, TempPciBus);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Guid/UboxIpInterface.h:460
EFI_STATUS
UBoxGetDirtyWarmResetStallFlagInScratchpad (
  UINT8 SocId,
  UINT8 BoxInst,
  UINT8 * DwrBiosStall
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_UBOX_IP_INTERFACE_API *DsaUboxIpInterfaceApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaUboxIpInterfaceApiGuid = DSA_UBOX_IP_INTERFACE_API_GUID;

  DsaStatus = LocateInterface (&gDsaUboxIpInterfaceApiGuid, 0, (VOID **)&DsaUboxIpInterfaceApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaUboxIpInterfaceApiPtr->UBoxGetDirtyWarmResetStallFlagInScratchpad (SocId, BoxInst, DwrBiosStall);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Guid/UboxIpInterface.h:430
EFI_STATUS
UBoxSetDirtyWarmResetStallFlagInScratchpad (
  UINT8 SocId,
  UINT8 BoxInst,
  UINT8 Flag
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_UBOX_IP_INTERFACE_API *DsaUboxIpInterfaceApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaUboxIpInterfaceApiGuid = DSA_UBOX_IP_INTERFACE_API_GUID;

  DsaStatus = LocateInterface (&gDsaUboxIpInterfaceApiGuid, 0, (VOID **)&DsaUboxIpInterfaceApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaUboxIpInterfaceApiPtr->UBoxSetDirtyWarmResetStallFlagInScratchpad (SocId, BoxInst, Flag);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Guid/UboxIpInterface.h:520
EFI_STATUS
UBoxGetInDirtyWarmResetModeFlagInScratchpad (
  UINT8 SocId,
  UINT8 BoxInst,
  UINT8 * InDwr
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_UBOX_IP_INTERFACE_API *DsaUboxIpInterfaceApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaUboxIpInterfaceApiGuid = DSA_UBOX_IP_INTERFACE_API_GUID;

  DsaStatus = LocateInterface (&gDsaUboxIpInterfaceApiGuid, 0, (VOID **)&DsaUboxIpInterfaceApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaUboxIpInterfaceApiPtr->UBoxGetInDirtyWarmResetModeFlagInScratchpad (SocId, BoxInst, InDwr);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/IpBlock/Sps/Include/Library/SpsPeiLib.h:56
EFI_STATUS
PeiGetCurrenClockingMode (
  SPS_CLOCKING_MODES * ClockingMode
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_SPS_PEI_LIB_API *DsaSpsPeiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSpsPeiLibApiGuid = DSA_SPS_PEI_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaSpsPeiLibApiGuid, 0, (VOID **)&DsaSpsPeiLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaSpsPeiLibApiPtr->PeiGetCurrenClockingMode (ClockingMode);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/GpioGsxLib.h:42
EFI_STATUS
InitGSX (
  UINT16 GpioCom,
  UINT16 NIn,
  UINT16 NOut
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_GPIO_GSX_LIB_API *DsaGpioGsxLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaGpioGsxLibApiGuid = DSA_GPIO_GSX_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaGpioGsxLibApiGuid, 0, (VOID **)&DsaGpioGsxLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaGpioGsxLibApiPtr->InitGSX (GpioCom, NIn, NOut);
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:77
UINT8
GetMaxPortNumPerIou (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  DSA_IIO_SYS_INFO_LIB_API *DsaIioSysInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaIioSysInfoLibApiGuid = DSA_IIO_SYS_INFO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaIioSysInfoLibApiGuid, 0, (VOID **)&DsaIioSysInfoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaIioSysInfoLibApiPtr->GetMaxPortNumPerIou ();
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:51
UINT8
GetMaxIouNumPerSocket (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  DSA_IIO_SYS_INFO_LIB_API *DsaIioSysInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaIioSysInfoLibApiGuid = DSA_IIO_SYS_INFO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaIioSysInfoLibApiGuid, 0, (VOID **)&DsaIioSysInfoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaIioSysInfoLibApiPtr->GetMaxIouNumPerSocket ();
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:196
UINT8
GetPortIndexbyStack (
  UINT8 StackIndex,
  UINT8 PortIndex
  )
{
  UINT8 ReturnValue = 0;
  DSA_IIO_SYS_INFO_LIB_API *DsaIioSysInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaIioSysInfoLibApiGuid = DSA_IIO_SYS_INFO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaIioSysInfoLibApiGuid, 0, (VOID **)&DsaIioSysInfoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaIioSysInfoLibApiPtr->GetPortIndexbyStack (StackIndex, PortIndex);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/GpioGsxLib.h:59
EFI_STATUS
GsxRead (
  UINT16 GpioCom,
  UINT32 * Data
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_GPIO_GSX_LIB_API *DsaGpioGsxLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaGpioGsxLibApiGuid = DSA_GPIO_GSX_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaGpioGsxLibApiGuid, 0, (VOID **)&DsaGpioGsxLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaGpioGsxLibApiPtr->GsxRead (GpioCom, Data);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:474
EFI_STATUS
GpioUnlockPadCfg (
  GPIO_PAD GpioPad
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_GPIO_LIB_API *DsaGpioLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaGpioLibApiGuid = DSA_GPIO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaGpioLibApiGuid, 0, (VOID **)&DsaGpioLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaGpioLibApiPtr->GpioUnlockPadCfg (GpioPad);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/PeiMeLib.h:93
EFI_STATUS
PeiHeciGetFwCapsSkuMsg (
  MEFWCAPS_SKU * RuleData
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_PEI_ME_LIB_API *DsaPeiMeLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPeiMeLibApiGuid = DSA_PEI_ME_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPeiMeLibApiGuid, 0, (VOID **)&DsaPeiMeLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPeiMeLibApiPtr->PeiHeciGetFwCapsSkuMsg (RuleData);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/PeiMeLib.h:132
EFI_STATUS
PeiHeciGetFwFeatureStateMsg (
  MEFWCAPS_SKU * RuleData
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_PEI_ME_LIB_API *DsaPeiMeLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPeiMeLibApiGuid = DSA_PEI_ME_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPeiMeLibApiGuid, 0, (VOID **)&DsaPeiMeLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPeiMeLibApiPtr->PeiHeciGetFwFeatureStateMsg (RuleData);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/MeGetConfigBlock.h:95
ME_PEI_PREMEM_CONFIG *
GetMePreMemConfigBlock (
  SI_PREMEM_POLICY_PPI * SiPreMemPolicy
  )
{
  ME_PEI_PREMEM_CONFIG * ReturnValue = 0;
  DSA_ME_GET_CONFIG_BLOCK_API *DsaMeGetConfigBlockApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMeGetConfigBlockApiGuid = DSA_ME_GET_CONFIG_BLOCK_API_GUID;

  DsaStatus = LocateInterface (&gDsaMeGetConfigBlockApiGuid, 0, (VOID **)&DsaMeGetConfigBlockApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaMeGetConfigBlockApiPtr->GetMePreMemConfigBlock (SiPreMemPolicy);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/MeTypeLib.h:81
BOOLEAN
MeTypeIsDisabled (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_ME_TYPE_LIB_API *DsaMeTypeLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMeTypeLibApiGuid = DSA_ME_TYPE_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaMeTypeLibApiGuid, 0, (VOID **)&DsaMeTypeLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaMeTypeLibApiPtr->MeTypeIsDisabled ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/MeTypeLib.h:70
BOOLEAN
MeTypeIsDfx (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_ME_TYPE_LIB_API *DsaMeTypeLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMeTypeLibApiGuid = DSA_ME_TYPE_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaMeTypeLibApiGuid, 0, (VOID **)&DsaMeTypeLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaMeTypeLibApiPtr->MeTypeIsDfx ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/MeUtilsLib.h:162
BOOLEAN
MeSkuIsClient (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_ME_UTILS_LIB_API *DsaMeUtilsLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMeUtilsLibApiGuid = DSA_ME_UTILS_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaMeUtilsLibApiGuid, 0, (VOID **)&DsaMeUtilsLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaMeUtilsLibApiPtr->MeSkuIsClient ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/GbeLib.h:57
BOOLEAN
IsGbePresent (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_GBE_LIB_API *DsaGbeLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaGbeLibApiGuid = DSA_GBE_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaGbeLibApiGuid, 0, (VOID **)&DsaGbeLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaGbeLibApiPtr->IsGbePresent ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:292
UINT8
GetPchMaxSerialIoUartControllersNum (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  DSA_PCH_INFO_LIB_API *DsaPchInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchInfoLibApiGuid = DSA_PCH_INFO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPchInfoLibApiGuid, 0, (VOID **)&DsaPchInfoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPchInfoLibApiPtr->GetPchMaxSerialIoUartControllersNum ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:222
UINT8
GetPchUsb2MaxPhysicalPortNum (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  DSA_PCH_INFO_LIB_API *DsaPchInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchInfoLibApiGuid = DSA_PCH_INFO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPchInfoLibApiGuid, 0, (VOID **)&DsaPchInfoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPchInfoLibApiPtr->GetPchUsb2MaxPhysicalPortNum ();
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Include/Library/ChaLib.h:246
EFI_STATUS
ChaGetLtTargetAndStatus (
  UINT8 SocId,
  UINT8 BoxInst,
  UINT32 * LtTarget,
  UINT32 * LtTargetEnabled
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_CHA_IP_LIB_API *DsaChaIpLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaChaIpLibApiGuid = DSA_CHA_IP_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaChaIpLibApiGuid, 0, (VOID **)&DsaChaIpLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaChaIpLibApiPtr->ChaGetLtTargetAndStatus (SocId, BoxInst, LtTarget, LtTargetEnabled);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:306
UINT8
GetSysSbspSocketIdNv (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  DSA_SYSTEM_INFO_LIB_API *DsaSystemInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSystemInfoLibApiGuid = DSA_SYSTEM_INFO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaSystemInfoLibApiGuid, 0, (VOID **)&DsaSystemInfoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaSystemInfoLibApiPtr->GetSysSbspSocketIdNv ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/IpBlock/Sps/Include/Library/CpuAndRevisionLib.h:67
BOOLEAN
IsCpuAndRevisionOrLater (
  UINT8 CpuType,
  UINT16 Revision
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_CPU_AND_REVISION_LIB_API *DsaCpuAndRevisionLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaCpuAndRevisionLibApiGuid = DSA_CPU_AND_REVISION_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaCpuAndRevisionLibApiGuid, 0, (VOID **)&DsaCpuAndRevisionLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaCpuAndRevisionLibApiPtr->IsCpuAndRevisionOrLater (CpuType, Revision);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/SataSocLib.h:66
UINT8
MaxSataPortNum (
  UINT32 SataCtrlIndex
  )
{
  UINT8 ReturnValue = 0;
  DSA_SATA_SOC_LIB_API *DsaSataSocLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSataSocLibApiGuid = DSA_SATA_SOC_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaSataSocLibApiGuid, 0, (VOID **)&DsaSataSocLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaSataSocLibApiPtr->MaxSataPortNum (SataCtrlIndex);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/MeTypeLib.h:103
BOOLEAN
MeTypeIsIgnition (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_ME_TYPE_LIB_API *DsaMeTypeLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMeTypeLibApiGuid = DSA_ME_TYPE_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaMeTypeLibApiGuid, 0, (VOID **)&DsaMeTypeLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaMeTypeLibApiPtr->MeTypeIsIgnition ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/MemoryServicesLib.h:1643
BOOLEAN
IsDcpmmEnabledSocket (
  UINT8 Socket
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_BASE_MEMORY_SERVICES_LIB_API *DsaBaseMemoryServicesLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaBaseMemoryServicesLibApiGuid = DSA_BASE_MEMORY_SERVICES_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaBaseMemoryServicesLibApiGuid, 0, (VOID **)&DsaBaseMemoryServicesLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaBaseMemoryServicesLibApiPtr->IsDcpmmEnabledSocket (Socket);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchPolicyLib.h:135
RST_CONFIG *
GetPchRstConfig (
  SI_POLICY_PPI * SiPolicy,
  UINT32 SataCtrlIndex
  )
{
  RST_CONFIG * ReturnValue = 0;
  DSA_PCH_POLICY_LIB_API *DsaPchPolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchPolicyLibApiGuid = DSA_PCH_POLICY_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPchPolicyLibApiGuid, 0, (VOID **)&DsaPchPolicyLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPchPolicyLibApiPtr->GetPchRstConfig (SiPolicy, SataCtrlIndex);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:242
UINT8
GetPchXhciMaxUsb3PortNum (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  DSA_PCH_INFO_LIB_API *DsaPchInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchInfoLibApiGuid = DSA_PCH_INFO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPchInfoLibApiGuid, 0, (VOID **)&DsaPchInfoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPchInfoLibApiPtr->GetPchXhciMaxUsb3PortNum ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/SataSocLib.h:54
UINT8
MaxSataControllerNum (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  DSA_SATA_SOC_LIB_API *DsaSataSocLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSataSocLibApiGuid = DSA_SATA_SOC_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaSataSocLibApiGuid, 0, (VOID **)&DsaSataSocLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaSataSocLibApiPtr->MaxSataControllerNum ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchPolicyLib.h:121
SATA_CONFIG *
GetPchSataConfig (
  SI_POLICY_PPI * SiPolicy,
  UINT32 SataCtrlIndex
  )
{
  SATA_CONFIG * ReturnValue = 0;
  DSA_PCH_POLICY_LIB_API *DsaPchPolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchPolicyLibApiGuid = DSA_PCH_POLICY_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPchPolicyLibApiGuid, 0, (VOID **)&DsaPchPolicyLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPchPolicyLibApiPtr->GetPchSataConfig (SiPolicy, SataCtrlIndex);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/SiPolicyLib.h:134
EFI_STATUS
SiInstallPolicyPpi (
  SI_POLICY_PPI * SiPolicyPpi
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_SI_POLICY_LIB_API *DsaSiPolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSiPolicyLibApiGuid = DSA_SI_POLICY_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaSiPolicyLibApiGuid, 0, (VOID **)&DsaSiPolicyLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaSiPolicyLibApiPtr->SiInstallPolicyPpi (SiPolicyPpi);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/SiPolicyLib.h:88
EFI_STATUS
SiCreateConfigBlocks (
  SI_POLICY_PPI ** SiPolicyPpi
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_SI_POLICY_LIB_API *DsaSiPolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSiPolicyLibApiGuid = DSA_SI_POLICY_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaSiPolicyLibApiGuid, 0, (VOID **)&DsaSiPolicyLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaSiPolicyLibApiPtr->SiCreateConfigBlocks (SiPolicyPpi);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchPciBdfLib.h:354
UINT64
SpiPciCfgBase (
   VOID
  )
{
  UINT64 ReturnValue = 0;
  DSA_PCH_PCI_BDF_LIB_API *DsaPchPciBdfLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchPciBdfLibApiGuid = DSA_PCH_PCI_BDF_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPchPciBdfLibApiGuid, 0, (VOID **)&DsaPchPciBdfLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPchPciBdfLibApiPtr->SpiPciCfgBase ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/SysHostPointerLib.h:446
VOID *
GetEmulationSettingPointer (
   VOID
  )
{
  VOID * ReturnValue = 0;
  DSA_SYS_HOST_POINTER_LIB_API *DsaSysHostPointerLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSysHostPointerLibApiGuid = DSA_SYS_HOST_POINTER_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaSysHostPointerLibApiGuid, 0, (VOID **)&DsaSysHostPointerLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaSysHostPointerLibApiPtr->GetEmulationSettingPointer ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/ModuleAddrCalcLib.h:49
EFI_STATUS
ModuleOffsetCalculator (
  EFI_PEI_FILE_HANDLE FileHandle,
  EFI_GUID * CallerGuid,
  UINTN * ModuleOffset,
  BOOLEAN * ModulePositive
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_MODULE_ADDR_CALC_LIB_API *DsaModuleAddrCalcLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaModuleAddrCalcLibApiGuid = DSA_MODULE_ADDR_CALC_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaModuleAddrCalcLibApiGuid, 0, (VOID **)&DsaModuleAddrCalcLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaModuleAddrCalcLibApiPtr->ModuleOffsetCalculator (FileHandle, CallerGuid, ModuleOffset, ModulePositive);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchRtcLib.h:59
UINT8
ReadNmiEn (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  DSA_PCH_RTC_LIB_API *DsaPchRtcLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchRtcLibApiGuid = DSA_PCH_RTC_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPchRtcLibApiGuid, 0, (VOID **)&DsaPchRtcLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPchRtcLibApiPtr->ReadNmiEn ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/PmcLib.h:154
BOOLEAN
PmcIsRtcBatteryGood (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_PMC_LIB_API *DsaPmcLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPmcLibApiGuid = DSA_PMC_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPmcLibApiGuid, 0, (VOID **)&DsaPmcLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPmcLibApiPtr->PmcIsRtcBatteryGood ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/GbeLib.h:46
BOOLEAN
IsGbeRegionValid (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_GBE_LIB_API *DsaGbeLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaGbeLibApiGuid = DSA_GBE_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaGbeLibApiGuid, 0, (VOID **)&DsaGbeLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaGbeLibApiPtr->IsGbeRegionValid ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:83
PCH_SERIES
PchSeries (
   VOID
  )
{
  PCH_SERIES ReturnValue = 0;
  DSA_PCH_INFO_LIB_API *DsaPchInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchInfoLibApiGuid = DSA_PCH_INFO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPchInfoLibApiGuid, 0, (VOID **)&DsaPchInfoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPchInfoLibApiPtr->PchSeries ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:52
UINT16
PchGetLpcDid (
   VOID
  )
{
  UINT16 ReturnValue = 0;
  DSA_PCH_INFO_LIB_API *DsaPchInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchInfoLibApiGuid = DSA_PCH_INFO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPchInfoLibApiGuid, 0, (VOID **)&DsaPchInfoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPchInfoLibApiPtr->PchGetLpcDid ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:62
PCH_STEPPING
PchStepping (
   VOID
  )
{
  PCH_STEPPING ReturnValue = 0;
  DSA_PCH_INFO_LIB_API *DsaPchInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchInfoLibApiGuid = DSA_PCH_INFO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPchInfoLibApiGuid, 0, (VOID **)&DsaPchInfoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPchInfoLibApiPtr->PchStepping ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/MeTypeLib.h:114
BOOLEAN
MeTypeIsClient (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_ME_TYPE_LIB_API *DsaMeTypeLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMeTypeLibApiGuid = DSA_ME_TYPE_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaMeTypeLibApiGuid, 0, (VOID **)&DsaMeTypeLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaMeTypeLibApiPtr->MeTypeIsClient ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchPciBdfLib.h:646
UINT8
LpcDevNumber (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  DSA_PCH_PCI_BDF_LIB_API *DsaPchPciBdfLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchPciBdfLibApiGuid = DSA_PCH_PCI_BDF_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPchPciBdfLibApiGuid, 0, (VOID **)&DsaPchPciBdfLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPchPciBdfLibApiPtr->LpcDevNumber ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:73
BOOLEAN
IsPchSupported (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_PCH_INFO_LIB_API *DsaPchInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchInfoLibApiGuid = DSA_PCH_INFO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPchInfoLibApiGuid, 0, (VOID **)&DsaPchInfoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPchInfoLibApiPtr->IsPchSupported ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/PmcLib.h:453
VOID
ClearSmiAndWake (
   VOID
  )
{
  DSA_PMC_LIB_API *DsaPmcLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPmcLibApiGuid = DSA_PMC_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPmcLibApiGuid, 0, (VOID **)&DsaPmcLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  DsaPmcLibApiPtr->ClearSmiAndWake ();
  return;
}

// v:/intel/ServerSecurityPkg/Library/BiosGuardInitLib/BiosGuardInit.h:90
VOID
BiosGuardInit (
  EFI_PEI_SERVICES ** PeiServices,
  SYSTEM_CONFIGURATION * TotalSystemConfigurationPtr
  )
{
  DSA_BIOS_GUARD_INIT_LIB_API *DsaBiosGuardInitLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaBiosGuardInitLibApiGuid = DSA_BIOS_GUARD_INIT_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaBiosGuardInitLibApiGuid, 0, (VOID **)&DsaBiosGuardInitLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  DsaBiosGuardInitLibApiPtr->BiosGuardInit (PeiServices, TotalSystemConfigurationPtr);
  return;
}

// v:/intel/CpRcPkg/Include/Library/SysHostPointerLib.h:276
VOID *
GetSysSetupPointer (
   VOID
  )
{
  VOID * ReturnValue = 0;
  DSA_SYS_HOST_POINTER_LIB_API *DsaSysHostPointerLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSysHostPointerLibApiGuid = DSA_SYS_HOST_POINTER_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaSysHostPointerLibApiGuid, 0, (VOID **)&DsaSysHostPointerLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaSysHostPointerLibApiPtr->GetSysSetupPointer ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/EspiLib.h:73
BOOLEAN
IsEspiEnabled (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_ESPI_LIB_API *DsaEspiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaEspiLibApiGuid = DSA_ESPI_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaEspiLibApiGuid, 0, (VOID **)&DsaEspiLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaEspiLibApiPtr->IsEspiEnabled ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/IpBlock/Sps/Include/Library/MeConfigLib.h:73
VOID
SetMeServerPeiPolicyDefaults (
  ME_SERVER_PEI_CONFIG * MeServerPeiConfig
  )
{
  DSA_ME_CONFIG_LIB_API *DsaMeConfigLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMeConfigLibApiGuid = DSA_ME_CONFIG_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaMeConfigLibApiGuid, 0, (VOID **)&DsaMeConfigLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  DsaMeConfigLibApiPtr->SetMeServerPeiPolicyDefaults (MeServerPeiConfig);
  return;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:104
EFI_STATUS
GpioSetPadConfig (
  GPIO_PAD GpioPad,
  GPIO_CONFIG * GpioData
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_GPIO_LIB_API *DsaGpioLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaGpioLibApiGuid = DSA_GPIO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaGpioLibApiGuid, 0, (VOID **)&DsaGpioLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaGpioLibApiPtr->GpioSetPadConfig (GpioPad, GpioData);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:156
EFI_STATUS
GpioGetInputValue (
  GPIO_PAD GpioPad,
  UINT32 * InputVal
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_GPIO_LIB_API *DsaGpioLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaGpioLibApiGuid = DSA_GPIO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaGpioLibApiGuid, 0, (VOID **)&DsaGpioLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaGpioLibApiPtr->GpioGetInputValue (GpioPad, InputVal);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/ModuleAddrCalcLib.h:26
UINTN
ModuleOffsetCalc (
  EFI_GUID * CallerGuid,
  UINTN FlashFuncAddr
  )
{
  UINTN ReturnValue = 0;
  DSA_MODULE_ADDR_CALC_LIB_API *DsaModuleAddrCalcLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaModuleAddrCalcLibApiGuid = DSA_MODULE_ADDR_CALC_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaModuleAddrCalcLibApiGuid, 0, (VOID **)&DsaModuleAddrCalcLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaModuleAddrCalcLibApiPtr->ModuleOffsetCalc (CallerGuid, FlashFuncAddr);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/EmulationConfigurationLib.h:231
BOOLEAN
UbiosGenerationOrHsleEnabled (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_EMULATION_CONFIGURATION_LIB_API *DsaEmulationConfigurationLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaEmulationConfigurationLibApiGuid = DSA_EMULATION_CONFIGURATION_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaEmulationConfigurationLibApiGuid, 0, (VOID **)&DsaEmulationConfigurationLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaEmulationConfigurationLibApiPtr->UbiosGenerationOrHsleEnabled ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/MemoryServicesLib.h:805
VOID
SetWipeMemory (
   VOID
  )
{
  DSA_BASE_MEMORY_SERVICES_LIB_API *DsaBaseMemoryServicesLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaBaseMemoryServicesLibApiGuid = DSA_BASE_MEMORY_SERVICES_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaBaseMemoryServicesLibApiGuid, 0, (VOID **)&DsaBaseMemoryServicesLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  DsaBaseMemoryServicesLibApiPtr->SetWipeMemory ();
  return;
}

// v:/intel/CpRcPkg/Include/Library/CrcLib.h:55
EFI_STATUS
CalculateCrc16 (
  VOID * Data,
  UINTN DataSize,
  UINT16 * CrcOut
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_CRC_LIB_API *DsaCrcLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaCrcLibApiGuid = DSA_CRC_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaCrcLibApiGuid, 0, (VOID **)&DsaCrcLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaCrcLibApiPtr->CalculateCrc16 (Data, DataSize, CrcOut);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/MeTypeLib.h:92
BOOLEAN
MeTypeIsSps (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_ME_TYPE_LIB_API *DsaMeTypeLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMeTypeLibApiGuid = DSA_ME_TYPE_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaMeTypeLibApiGuid, 0, (VOID **)&DsaMeTypeLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaMeTypeLibApiPtr->MeTypeIsSps ();
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Cpu/Include/Library/CpuPreMemPolicyLib.h:91
EFI_STATUS
SetCpuPreMemPolicy (
  VOID * CpuPolicy,
  UINTN DataSize
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_CPU_PRE_MEM_POLICY_LIB_API *DsaCpuPreMemPolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaCpuPreMemPolicyLibApiGuid = DSA_CPU_PRE_MEM_POLICY_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaCpuPreMemPolicyLibApiGuid, 0, (VOID **)&DsaCpuPreMemPolicyLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaCpuPreMemPolicyLibApiPtr->SetCpuPreMemPolicy (CpuPolicy, DataSize);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/MmPciBaseLib.h:62
UINTN
MmPciAddress (
  UINT32 Seg,
  UINT32 Bus,
  UINT32 Device,
  UINT32 Function,
  UINT32 Register
  )
{
  UINTN ReturnValue = 0;
  DSA_MM_PCI_LIB_API *DsaMmPciLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMmPciLibApiGuid = DSA_MM_PCI_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaMmPciLibApiGuid, 0, (VOID **)&DsaMmPciLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaMmPciLibApiPtr->MmPciAddress (Seg, Bus, Device, Function, Register);
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Cpu/Include/Library/CpuPreMemPolicyLib.h:106
CPU_PRE_MEM_POLICY *
GetCpuPreMemPolicy (

  )
{
  CPU_PRE_MEM_POLICY * ReturnValue = 0;
  DSA_CPU_PRE_MEM_POLICY_LIB_API *DsaCpuPreMemPolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaCpuPreMemPolicyLibApiGuid = DSA_CPU_PRE_MEM_POLICY_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaCpuPreMemPolicyLibApiGuid, 0, (VOID **)&DsaCpuPreMemPolicyLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaCpuPreMemPolicyLibApiPtr->GetCpuPreMemPolicy ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/PmcLib.h:465
BOOLEAN
PmcIsDwrBootMode (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_PMC_LIB_API *DsaPmcLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPmcLibApiGuid = DSA_PMC_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPmcLibApiGuid, 0, (VOID **)&DsaPmcLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPmcLibApiPtr->PmcIsDwrBootMode ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/MeUtilsLib.h:290
BOOLEAN
MeSpsIsNm (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_ME_UTILS_LIB_API *DsaMeUtilsLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMeUtilsLibApiGuid = DSA_ME_UTILS_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaMeUtilsLibApiGuid, 0, (VOID **)&DsaMeUtilsLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaMeUtilsLibApiPtr->MeSpsIsNm ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/EmulationConfigurationLib.h:99
BOOLEAN
HybridSystemLevelEmulationEnabled (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_EMULATION_CONFIGURATION_LIB_API *DsaEmulationConfigurationLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaEmulationConfigurationLibApiGuid = DSA_EMULATION_CONFIGURATION_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaEmulationConfigurationLibApiGuid, 0, (VOID **)&DsaEmulationConfigurationLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaEmulationConfigurationLibApiPtr->HybridSystemLevelEmulationEnabled ();
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Include/Library/PsmiPolicyLib.h:82
PSMI_SETUP *
GetPsmiPolicy (

  )
{
  PSMI_SETUP * ReturnValue = 0;
  DSA_PSMI_POLICY_LIB_API *DsaPsmiPolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPsmiPolicyLibApiGuid = DSA_PSMI_POLICY_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPsmiPolicyLibApiGuid, 0, (VOID **)&DsaPsmiPolicyLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPsmiPolicyLibApiPtr->GetPsmiPolicy ();
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Security/IDE/Include/Library/SecurityPolicyLib.h:45
EFI_STATUS
InitializeSecurityPolicyHobPreMem (
   VOID
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_SECURITY_POLICY_LIB_API *DsaSecurityPolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSecurityPolicyLibApiGuid = DSA_SECURITY_POLICY_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaSecurityPolicyLibApiGuid, 0, (VOID **)&DsaSecurityPolicyLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaSecurityPolicyLibApiPtr->InitializeSecurityPolicyHobPreMem ();
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Security/IDE/Include/Library/SecurityApiLib.h:46
EFI_STATUS
InitializeSecurityApiHobPreMem (
   VOID
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_SECURITY_API_LIB_API *DsaSecurityApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSecurityApiLibApiGuid = DSA_SECURITY_API_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaSecurityApiLibApiGuid, 0, (VOID **)&DsaSecurityApiLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaSecurityApiLibApiPtr->InitializeSecurityApiHobPreMem ();
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Security/IDE/Include/Library/SecurityPolicyLib.h:98
SECURITY_POLICY *
GetSecurityPolicy (
   VOID
  )
{
  SECURITY_POLICY * ReturnValue = 0;
  DSA_SECURITY_POLICY_LIB_API *DsaSecurityPolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSecurityPolicyLibApiGuid = DSA_SECURITY_POLICY_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaSecurityPolicyLibApiGuid, 0, (VOID **)&DsaSecurityPolicyLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaSecurityPolicyLibApiPtr->GetSecurityPolicy ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/MeFiaMuxLib.h:148
UINT8
GetHsioLanes (
  UINT8 * LaneGapLow,
  UINT8 * LaneGapHi
  )
{
  UINT8 ReturnValue = 0;
  DSA_ME_FIA_MUX_LIB_API *DsaMeFiaMuxLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMeFiaMuxLibApiGuid = DSA_ME_FIA_MUX_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaMeFiaMuxLibApiGuid, 0, (VOID **)&DsaMeFiaMuxLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaMeFiaMuxLibApiPtr->GetHsioLanes (LaneGapLow, LaneGapHi);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/MeUtilsLib.h:235
BOOLEAN
MeClientIsCorporate (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_ME_UTILS_LIB_API *DsaMeUtilsLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMeUtilsLibApiGuid = DSA_ME_UTILS_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaMeUtilsLibApiGuid, 0, (VOID **)&DsaMeUtilsLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaMeUtilsLibApiPtr->MeClientIsCorporate ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/IpBlock/Sps/Include/Library/MeConfigLib.h:61
UINT32
MeConfigDeviceAutoResolve (
  ME_AUTO_CONFIG Device,
  UINT32 ConfigToResolve,
  BOOLEAN MeIsCorporateAmt
  )
{
  UINT32 ReturnValue = 0;
  DSA_ME_CONFIG_LIB_API *DsaMeConfigLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMeConfigLibApiGuid = DSA_ME_CONFIG_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaMeConfigLibApiGuid, 0, (VOID **)&DsaMeConfigLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaMeConfigLibApiPtr->MeConfigDeviceAutoResolve (Device, ConfigToResolve, MeIsCorporateAmt);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:212
UINT8
GetPchMaxPcieClockNum (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  DSA_PCH_INFO_LIB_API *DsaPchInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchInfoLibApiGuid = DSA_PCH_INFO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPchInfoLibApiGuid, 0, (VOID **)&DsaPchInfoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPchInfoLibApiPtr->GetPchMaxPcieClockNum ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:202
UINT8
GetPchMaxPcieControllerNum (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  DSA_PCH_INFO_LIB_API *DsaPchInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchInfoLibApiGuid = DSA_PCH_INFO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPchInfoLibApiGuid, 0, (VOID **)&DsaPchInfoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPchInfoLibApiPtr->GetPchMaxPcieControllerNum ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:192
UINT8
GetPchMaxPciePortNum (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  DSA_PCH_INFO_LIB_API *DsaPchInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchInfoLibApiGuid = DSA_PCH_INFO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPchInfoLibApiGuid, 0, (VOID **)&DsaPchInfoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPchInfoLibApiPtr->GetPchMaxPciePortNum ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/PeiMemoryPolicyLib.h:50
EFI_STATUS
SetMemoryPolicyDefaults (
  MEMORY_POLICY_PPI * PolicyPpi
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_MEMORY_POLICY_LIB_API *DsaMemoryPolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMemoryPolicyLibApiGuid = DSA_MEMORY_POLICY_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaMemoryPolicyLibApiGuid, 0, (VOID **)&DsaMemoryPolicyLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaMemoryPolicyLibApiPtr->SetMemoryPolicyDefaults (PolicyPpi);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/PeiMemoryPolicyLib.h:69
EFI_STATUS
InstallMemoryPolicyPpi (
  MEMORY_POLICY_PPI * PolicyPpi
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_MEMORY_POLICY_LIB_API *DsaMemoryPolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMemoryPolicyLibApiGuid = DSA_MEMORY_POLICY_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaMemoryPolicyLibApiGuid, 0, (VOID **)&DsaMemoryPolicyLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaMemoryPolicyLibApiPtr->InstallMemoryPolicyPpi (PolicyPpi);
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Include/Library/RasRcPolicyPpiLib.h:66
EFI_STATUS
InstallRasRcPolicyPpi (
  RAS_RC_POLICY_PPI * RasRcPolicyPpi
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_RAS_RC_POLICY_PPI_LIB_API *DsaRasRcPolicyPpiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaRasRcPolicyPpiLibApiGuid = DSA_RAS_RC_POLICY_PPI_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaRasRcPolicyPpiLibApiGuid, 0, (VOID **)&DsaRasRcPolicyPpiLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaRasRcPolicyPpiLibApiPtr->InstallRasRcPolicyPpi (RasRcPolicyPpi);
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Include/Library/PeiUpiPolicyLib.h:44
EFI_STATUS
UpiCreatePolicyDefaults (
  UPI_POLICY_PPI * UpiPolicyPpi
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_PEI_UPI_POLICY_LIB_API *DsaPeiUpiPolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPeiUpiPolicyLibApiGuid = DSA_PEI_UPI_POLICY_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPeiUpiPolicyLibApiGuid, 0, (VOID **)&DsaPeiUpiPolicyLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPeiUpiPolicyLibApiPtr->UpiCreatePolicyDefaults (UpiPolicyPpi);
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Include/Library/PeiUpiPolicyLib.h:60
EFI_STATUS
UpiInstallPolicyPpi (
  UPI_POLICY_PPI * UpiPolicyPpi
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_PEI_UPI_POLICY_LIB_API *DsaPeiUpiPolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPeiUpiPolicyLibApiGuid = DSA_PEI_UPI_POLICY_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPeiUpiPolicyLibApiGuid, 0, (VOID **)&DsaPeiUpiPolicyLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPeiUpiPolicyLibApiPtr->UpiInstallPolicyPpi (UpiPolicyPpi);
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Include/Library/RasRcPolicyPpiLib.h:47
EFI_STATUS
SetRasRcPolicyPpiDefaults (
  RAS_RC_POLICY_PPI * RasRcPolicyPpi
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_RAS_RC_POLICY_PPI_LIB_API *DsaRasRcPolicyPpiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaRasRcPolicyPpiLibApiGuid = DSA_RAS_RC_POLICY_PPI_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaRasRcPolicyPpiLibApiGuid, 0, (VOID **)&DsaRasRcPolicyPpiLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaRasRcPolicyPpiLibApiPtr->SetRasRcPolicyPpiDefaults (RasRcPolicyPpi);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/SiPolicyLib.h:73
EFI_STATUS
SiCreatePreMemConfigBlocks (
  SI_PREMEM_POLICY_PPI ** SiPreMemPolicyPpi
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_SI_POLICY_LIB_API *DsaSiPolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSiPolicyLibApiGuid = DSA_SI_POLICY_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaSiPolicyLibApiGuid, 0, (VOID **)&DsaSiPolicyLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaSiPolicyLibApiPtr->SiCreatePreMemConfigBlocks (SiPreMemPolicyPpi);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/SiPolicyLib.h:104
EFI_STATUS
SiPreMemInstallPolicyPpi (
  SI_PREMEM_POLICY_PPI * SiPreMemPolicyPpi
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_SI_POLICY_LIB_API *DsaSiPolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSiPolicyLibApiGuid = DSA_SI_POLICY_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaSiPolicyLibApiGuid, 0, (VOID **)&DsaSiPolicyLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaSiPolicyLibApiPtr->SiPreMemInstallPolicyPpi (SiPreMemPolicyPpi);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/SiPolicyLib.h:118
EFI_STATUS
SiPreMemInstallPolicyReadyPpi (
   VOID
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_SI_POLICY_LIB_API *DsaSiPolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSiPolicyLibApiGuid = DSA_SI_POLICY_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaSiPolicyLibApiGuid, 0, (VOID **)&DsaSiPolicyLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaSiPolicyLibApiPtr->SiPreMemInstallPolicyReadyPpi ();
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Include/Library/PeiIioSiPolicyLib.h:40
EFI_STATUS
CreateDefaultIioSiPolicy (
   VOID
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_PEI_IIO_SI_POLICY_LIB_API *DsaPeiIioSiPolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPeiIioSiPolicyLibApiGuid = DSA_PEI_IIO_SI_POLICY_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPeiIioSiPolicyLibApiGuid, 0, (VOID **)&DsaPeiIioSiPolicyLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPeiIioSiPolicyLibApiPtr->CreateDefaultIioSiPolicy ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:124
EFI_STATUS
GpioSetOutputValue (
  GPIO_PAD GpioPad,
  UINT32 Value
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_GPIO_LIB_API *DsaGpioLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaGpioLibApiGuid = DSA_GPIO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaGpioLibApiGuid, 0, (VOID **)&DsaGpioLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaGpioLibApiPtr->GpioSetOutputValue (GpioPad, Value);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/GpioSocLib.h:47
EFI_STATUS
GpioIoeConfigurePads (
  UINT32 NumberOfItems,
  GPIO_INIT_CONFIG * GpioInitTableAddress
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_GPIO_SOC_LIB_API *DsaGpioSocLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaGpioSocLibApiGuid = DSA_GPIO_SOC_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaGpioSocLibApiGuid, 0, (VOID **)&DsaGpioSocLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaGpioSocLibApiPtr->GpioIoeConfigurePads (NumberOfItems, GpioInitTableAddress);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:70
EFI_STATUS
GpioConfigurePads (
  UINT32 NumberOfItems,
  GPIO_INIT_CONFIG * GpioInitTableAddress
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_GPIO_LIB_API *DsaGpioLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaGpioLibApiGuid = DSA_GPIO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaGpioLibApiGuid, 0, (VOID **)&DsaGpioLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaGpioLibApiPtr->GpioConfigurePads (NumberOfItems, GpioInitTableAddress);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchCycleDecodingLib.h:339
EFI_STATUS
PchLpcIoEnableDecodingSet (
  UINT16 LpcIoEnableDecoding
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_PCH_CYCLE_DECODING_LIB_API *DsaPchCycleDecodingLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchCycleDecodingLibApiGuid = DSA_PCH_CYCLE_DECODING_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPchCycleDecodingLibApiGuid, 0, (VOID **)&DsaPchCycleDecodingLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPchCycleDecodingLibApiPtr->PchLpcIoEnableDecodingSet (LpcIoEnableDecoding);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/TcoLib.h:53
VOID
TcoClearSecondToStatus (
   VOID
  )
{
  DSA_TCO_LIB_API *DsaTcoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaTcoLibApiGuid = DSA_TCO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaTcoLibApiGuid, 0, (VOID **)&DsaTcoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  DsaTcoLibApiPtr->TcoClearSecondToStatus ();
  return;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/TcoLib.h:72
VOID
TcoHaltTimer (
   VOID
  )
{
  DSA_TCO_LIB_API *DsaTcoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaTcoLibApiGuid = DSA_TCO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaTcoLibApiGuid, 0, (VOID **)&DsaTcoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  DsaTcoLibApiPtr->TcoHaltTimer ();
  return;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchCycleDecodingLib.h:322
EFI_STATUS
PchLpcIoDecodeRangesSet (
  UINT16 LpcIoDecodeRanges
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_PCH_CYCLE_DECODING_LIB_API *DsaPchCycleDecodingLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchCycleDecodingLibApiGuid = DSA_PCH_CYCLE_DECODING_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPchCycleDecodingLibApiGuid, 0, (VOID **)&DsaPchCycleDecodingLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPchCycleDecodingLibApiPtr->PchLpcIoDecodeRangesSet (LpcIoDecodeRanges);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchCycleDecodingLib.h:119
EFI_STATUS
PchLpcGenIoRangeSet (
  UINT16 Address,
  UINTN Length
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_PCH_CYCLE_DECODING_LIB_API *DsaPchCycleDecodingLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchCycleDecodingLibApiGuid = DSA_PCH_CYCLE_DECODING_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPchCycleDecodingLibApiGuid, 0, (VOID **)&DsaPchCycleDecodingLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPchCycleDecodingLibApiPtr->PchLpcGenIoRangeSet (Address, Length);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/PmcLib.h:165
BOOLEAN
PmcIsPowerFailureDetected (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_PMC_LIB_API *DsaPmcLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPmcLibApiGuid = DSA_PMC_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPmcLibApiGuid, 0, (VOID **)&DsaPmcLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPmcLibApiPtr->PmcIsPowerFailureDetected ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/PmcLib.h:184
VOID
PmcClearPowerFailureStatus (
   VOID
  )
{
  DSA_PMC_LIB_API *DsaPmcLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPmcLibApiGuid = DSA_PMC_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPmcLibApiGuid, 0, (VOID **)&DsaPmcLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  DsaPmcLibApiPtr->PmcClearPowerFailureStatus ();
  return;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/PmcLib.h:219
VOID
PmcSetPlatformStateAfterPowerFailure (
  UINT8 PowerStateAfterG3
  )
{
  DSA_PMC_LIB_API *DsaPmcLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPmcLibApiGuid = DSA_PMC_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPmcLibApiGuid, 0, (VOID **)&DsaPmcLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  DsaPmcLibApiPtr->PmcSetPlatformStateAfterPowerFailure (PowerStateAfterG3);
  return;
}

// v:/intel/CpRcPkg/Include/Library/KtiApi.h:706
UINT8
GetLatestConsumePA (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  DSA_KTI_API_LIB_API *DsaKtiApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaKtiApiLibApiGuid = DSA_KTI_API_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaKtiApiLibApiGuid, 0, (VOID **)&DsaKtiApiLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaKtiApiLibApiPtr->GetLatestConsumePA ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/KtiApi.h:315
UINT8
GetIoDcMode (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  DSA_KTI_API_LIB_API *DsaKtiApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaKtiApiLibApiGuid = DSA_KTI_API_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaKtiApiLibApiGuid, 0, (VOID **)&DsaKtiApiLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaKtiApiLibApiPtr->GetIoDcMode ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/KtiApi.h:420
BOOLEAN
SocketPresent (
  UINT32 SocId
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_KTI_API_LIB_API *DsaKtiApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaKtiApiLibApiGuid = DSA_KTI_API_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaKtiApiLibApiGuid, 0, (VOID **)&DsaKtiApiLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaKtiApiLibApiPtr->SocketPresent (SocId);
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:131
EFI_STATUS
IioGetIouIndexByStackIndex (
  UINT8 Stack,
  UINT8 * IouIndex
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_IIO_SYS_INFO_LIB_API *DsaIioSysInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaIioSysInfoLibApiGuid = DSA_IIO_SYS_INFO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaIioSysInfoLibApiGuid, 0, (VOID **)&DsaIioSysInfoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaIioSysInfoLibApiPtr->IioGetIouIndexByStackIndex (Stack, IouIndex);
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:39
UINT8
GetMaxPortNumPerSocket (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  DSA_IIO_SYS_INFO_LIB_API *DsaIioSysInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaIioSysInfoLibApiGuid = DSA_IIO_SYS_INFO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaIioSysInfoLibApiGuid, 0, (VOID **)&DsaIioSysInfoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaIioSysInfoLibApiPtr->GetMaxPortNumPerSocket ();
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:91
UINT8
GetMaxStackNumPerSocket (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  DSA_IIO_SYS_INFO_LIB_API *DsaIioSysInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaIioSysInfoLibApiGuid = DSA_IIO_SYS_INFO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaIioSysInfoLibApiGuid, 0, (VOID **)&DsaIioSysInfoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaIioSysInfoLibApiPtr->GetMaxStackNumPerSocket ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:112
UINT8
GetEmulation (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  DSA_SYSTEM_INFO_LIB_API *DsaSystemInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSystemInfoLibApiGuid = DSA_SYSTEM_INFO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaSystemInfoLibApiGuid, 0, (VOID **)&DsaSystemInfoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaSystemInfoLibApiPtr->GetEmulation ();
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:163
EFI_STATUS
GetNtbPortPerPortIndex (
  UINT8 PortIndex,
  UINT8 * NtbPortIndex
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_IIO_SYS_INFO_LIB_API *DsaIioSysInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaIioSysInfoLibApiGuid = DSA_IIO_SYS_INFO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaIioSysInfoLibApiGuid, 0, (VOID **)&DsaIioSysInfoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaIioSysInfoLibApiPtr->GetNtbPortPerPortIndex (PortIndex, NtbPortIndex);
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:211
UINT8
IioPortIndexToStackPort (
  UINT8 PortIdx,
  UINT8 * StackPtr
  )
{
  UINT8 ReturnValue = 0;
  DSA_IIO_SYS_INFO_LIB_API *DsaIioSysInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaIioSysInfoLibApiGuid = DSA_IIO_SYS_INFO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaIioSysInfoLibApiGuid, 0, (VOID **)&DsaIioSysInfoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaIioSysInfoLibApiPtr->IioPortIndexToStackPort (PortIdx, StackPtr);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/KtiApi.h:90
BOOLEAN
IsFeatureEnabled (
  UINT8 TypeFeature
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_KTI_API_LIB_API *DsaKtiApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaKtiApiLibApiGuid = DSA_KTI_API_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaKtiApiLibApiGuid, 0, (VOID **)&DsaKtiApiLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaKtiApiLibApiPtr->IsFeatureEnabled (TypeFeature);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/KtiApi.h:233
UINT8
GetSystemRasType (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  DSA_KTI_API_LIB_API *DsaKtiApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaKtiApiLibApiGuid = DSA_KTI_API_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaKtiApiLibApiGuid, 0, (VOID **)&DsaKtiApiLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaKtiApiLibApiPtr->GetSystemRasType ();
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:63
UINT8
GetMaxNtbNumPerSocket (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  DSA_IIO_SYS_INFO_LIB_API *DsaIioSysInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaIioSysInfoLibApiGuid = DSA_IIO_SYS_INFO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaIioSysInfoLibApiGuid, 0, (VOID **)&DsaIioSysInfoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaIioSysInfoLibApiPtr->GetMaxNtbNumPerSocket ();
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Cpu/Include/Library/X2ApicIdDetectLib.h:40
BOOLEAN
X2ApicIdDetect (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_X2_APIC_ID_DETECT_LIB_API *DsaX2ApicIdDetectLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaX2ApicIdDetectLibApiGuid = DSA_X2_APIC_ID_DETECT_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaX2ApicIdDetectLibApiGuid, 0, (VOID **)&DsaX2ApicIdDetectLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaX2ApicIdDetectLibApiPtr->X2ApicIdDetect ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/KtiApi.h:265
BOOLEAN
GetStackPersonality (
  UINT8 SocId,
  UINT8 StackId,
  UINT8 Personality
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_KTI_API_LIB_API *DsaKtiApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaKtiApiLibApiGuid = DSA_KTI_API_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaKtiApiLibApiGuid, 0, (VOID **)&DsaKtiApiLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaKtiApiLibApiPtr->GetStackPersonality (SocId, StackId, Personality);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:138
UINT32
GetMeRequestedSize (
   VOID
  )
{
  UINT32 ReturnValue = 0;
  DSA_SYSTEM_INFO_LIB_API *DsaSystemInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSystemInfoLibApiGuid = DSA_SYSTEM_INFO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaSystemInfoLibApiGuid, 0, (VOID **)&DsaSystemInfoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaSystemInfoLibApiPtr->GetMeRequestedSize ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/SiliconWorkaroundLib.h:56
BOOLEAN
IsSiliconWorkaroundEnabled (
  CONST CHAR8 * WorkaroundName
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_SILICON_WORKAROUND_LIB_API *DsaSiliconWorkaroundLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSiliconWorkaroundLibApiGuid = DSA_SILICON_WORKAROUND_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaSiliconWorkaroundLibApiGuid, 0, (VOID **)&DsaSiliconWorkaroundLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaSiliconWorkaroundLibApiPtr->IsSiliconWorkaroundEnabled (WorkaroundName);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/IoAccessLib.h:89
UINT8
InPort8 (
  UINT16 IoAddress
  )
{
  UINT8 ReturnValue = 0;
  DSA_IO_ACCESS_LIB_API *DsaIoAccessLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaIoAccessLibApiGuid = DSA_IO_ACCESS_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaIoAccessLibApiGuid, 0, (VOID **)&DsaIoAccessLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaIoAccessLibApiPtr->InPort8 (IoAddress);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/IoAccessLib.h:133
VOID
OutPort8 (
  UINT16 IoAddress,
  UINT8 Data
  )
{
  DSA_IO_ACCESS_LIB_API *DsaIoAccessLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaIoAccessLibApiGuid = DSA_IO_ACCESS_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaIoAccessLibApiGuid, 0, (VOID **)&DsaIoAccessLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  DsaIoAccessLibApiPtr->OutPort8 (IoAddress, Data);
  return;
}

// v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:90
VOID
SetSysResetRequired (
  UINT8 ResetRequired
  )
{
  DSA_SYSTEM_INFO_LIB_API *DsaSystemInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSystemInfoLibApiGuid = DSA_SYSTEM_INFO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaSystemInfoLibApiGuid, 0, (VOID **)&DsaSystemInfoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  DsaSystemInfoLibApiPtr->SetSysResetRequired (ResetRequired);
  return;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/PmcLib.h:122
UINT16
PmcGetAcpiBase (
   VOID
  )
{
  UINT16 ReturnValue = 0;
  DSA_PMC_LIB_API *DsaPmcLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPmcLibApiGuid = DSA_PMC_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaPmcLibApiGuid, 0, (VOID **)&DsaPmcLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaPmcLibApiPtr->PmcGetAcpiBase ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/KtiApi.h:433
UINT8
GetSocketsAvailable (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  DSA_KTI_API_LIB_API *DsaKtiApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaKtiApiLibApiGuid = DSA_KTI_API_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaKtiApiLibApiGuid, 0, (VOID **)&DsaKtiApiLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaKtiApiLibApiPtr->GetSocketsAvailable ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:77
UINT8
GetSysResetRequired (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  DSA_SYSTEM_INFO_LIB_API *DsaSystemInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSystemInfoLibApiGuid = DSA_SYSTEM_INFO_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaSystemInfoLibApiGuid, 0, (VOID **)&DsaSystemInfoLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaSystemInfoLibApiPtr->GetSysResetRequired ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/EmulationConfigurationLib.h:115
BOOLEAN
UbiosGenerationEnabled (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_EMULATION_CONFIGURATION_LIB_API *DsaEmulationConfigurationLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaEmulationConfigurationLibApiGuid = DSA_EMULATION_CONFIGURATION_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaEmulationConfigurationLibApiGuid, 0, (VOID **)&DsaEmulationConfigurationLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaEmulationConfigurationLibApiPtr->UbiosGenerationEnabled ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/MemMapDataLib.h:61
SYSTEM_MEMORY_MAP_HOB *
GetSystemMemoryMapData (
   VOID
  )
{
  SYSTEM_MEMORY_MAP_HOB * ReturnValue = 0;
  DSA_MEM_MAP_DATA_LIB_API *DsaMemMapDataLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMemMapDataLibApiGuid = DSA_MEM_MAP_DATA_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaMemMapDataLibApiGuid, 0, (VOID **)&DsaMemMapDataLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaMemMapDataLibApiPtr->GetSystemMemoryMapData ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/EmulationConfigurationLib.h:339
EFI_STATUS
UbiosCall (
  CHAR8 * CallName,
  UINT8 Scope
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_EMULATION_CONFIGURATION_LIB_API *DsaEmulationConfigurationLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaEmulationConfigurationLibApiGuid = DSA_EMULATION_CONFIGURATION_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaEmulationConfigurationLibApiGuid, 0, (VOID **)&DsaEmulationConfigurationLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaEmulationConfigurationLibApiPtr->UbiosCall (CallName, Scope);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/IpBlock/Sps/Include/Library/CpuAndRevisionLib.h:48
BOOLEAN
IsCpuAndRevision (
  UINT8 CpuType,
  UINT16 Revision
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_CPU_AND_REVISION_LIB_API *DsaCpuAndRevisionLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaCpuAndRevisionLibApiGuid = DSA_CPU_AND_REVISION_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaCpuAndRevisionLibApiGuid, 0, (VOID **)&DsaCpuAndRevisionLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaCpuAndRevisionLibApiPtr->IsCpuAndRevision (CpuType, Revision);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/EmulationConfigurationLib.h:247
BOOLEAN
MsrTraceEnabled (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  DSA_EMULATION_CONFIGURATION_LIB_API *DsaEmulationConfigurationLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaEmulationConfigurationLibApiGuid = DSA_EMULATION_CONFIGURATION_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaEmulationConfigurationLibApiGuid, 0, (VOID **)&DsaEmulationConfigurationLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaEmulationConfigurationLibApiPtr->MsrTraceEnabled ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/EmulationConfigurationLib.h:280
EFI_STATUS
SetMsrTraceOutputMode (
  UINT8 Value
  )
{
  EFI_STATUS ReturnValue = 0;
  DSA_EMULATION_CONFIGURATION_LIB_API *DsaEmulationConfigurationLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaEmulationConfigurationLibApiGuid = DSA_EMULATION_CONFIGURATION_LIB_API_GUID;

  DsaStatus = LocateInterface (&gDsaEmulationConfigurationLibApiGuid, 0, (VOID **)&DsaEmulationConfigurationLibApiPtr);
  ASSERT_RETURN_ERROR (DsaStatus);

  ReturnValue = DsaEmulationConfigurationLibApiPtr->SetMsrTraceOutputMode (Value);
  return ReturnValue;
}
