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

#include <Include/Guid/Dsa/DsaPchPciBdfLibApi.h>
#include <Include/Guid/Dsa/DsaMmPciLibApi.h>
#include <Include/Guid/Dsa/DsaIioApiLibApi.h>
#include <Include/Guid/Dsa/DsaSystemInfoLibApi.h>
#include <Include/Guid/Dsa/DsaPmcLibApi.h>
#include <Include/Guid/Dsa/DsaGpioLibApi.h>
#include <Include/Guid/Dsa/DsaCpuAndRevisionLibApi.h>
#include <Include/Guid/Dsa/DsaSiliconWorkaroundLibApi.h>
#include <Include/Guid/Dsa/DsaEmulationConfigurationLibApi.h>
#include <Include/Guid/Dsa/DsaMemMapDataLibApi.h>
#include <Include/Guid/Dsa/DsaCpuPreMemPolicyLibApi.h>
#include <Include/Guid/Dsa/DsaCpuEarlyDataLibApi.h>
#include <Include/Guid/Dsa/DsaMemRcLibApi.h>
#include <Include/Guid/Dsa/DsaKtiApiLibApi.h>
#include <Include/Guid/Dsa/DsaX2ApicIdDetectLibApi.h>
#include <Include/Guid/Dsa/DsaMemCmosLibApi.h>
#include <Include/Guid/Dsa/DsaCompressedVariableLibApi.h>
#include <Include/Guid/Dsa/DsaSataSocLibApi.h>
#include <Include/Guid/Dsa/DsaDxeMePolicyLibApi.h>
#include <Include/Guid/Dsa/DsaDxePchPolicyLibApi.h>
#include <Include/Guid/Dsa/DsaDxeMeServerPolicyLibApi.h>
#include <Include/Guid/Dsa/DsaDxeAmtPolicyLibApi.h>
#include <Include/Guid/Dsa/DsaMeTypeLibApi.h>
#include <Include/Guid/Dsa/DsaMeUtilsLibApi.h>
#include <Include/Guid/Dsa/DsaMeConfigLibApi.h>
#include <Include/Guid/Dsa/DsaPcuIpLibApi.h>
#include <Include/Guid/Dsa/DsaPchCycleDecodingLibApi.h>
#include <Include/Guid/Dsa/DsaSysHostPointerLibApi.h>
#include <Include/Guid/Dsa/DsaCpuConfigLibApi.h>
#include <Include/Guid/Dsa/DsaPmemMiscLibApi.h>
#include <Include/Guid/Dsa/DsaMemTypeLibApi.h>
#include <Include/Guid/Dsa/DsaNumaAcpiTableLibApi.h>
#include <Include/Guid/Dsa/DsaIioDataHubLibApi.h>
#include <Include/Guid/Dsa/DsaFpgaConfigurationLibApi.h>
#include <Include/Guid/Dsa/DsaIioCxlApiLibApi.h>
#include <Include/Guid/Dsa/DsaPcieMmcfgLibApi.h>
#include <Include/Guid/Dsa/DsaCrcLibApi.h>
#include <Include/Guid/Dsa/DsaSpdAccessLibApi.h>
#include <Include/Guid/Dsa/DsaBaseMemoryServicesLibApi.h>
#include <Include/Guid/Dsa/DsaPchInfoLibApi.h>
#include <Include/Guid/Dsa/DsaUsraLibApi.h>
#include <Include/Guid/Dsa/DsaCpuPlatformLibApi.h>
//@AdditionalIncludes

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
  static DSA_MM_PCI_LIB_API *DsaMmPciLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMmPciLibApiGuid = DSA_MM_PCI_LIB_API_GUID;

  if (DsaMmPciLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMmPciLibApiGuid, 0, (VOID **)&DsaMmPciLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaMmPciLibApiPtr->MmPciAddress (Seg, Bus, Device, Function, Register);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/MeUtilsLib.h:224
BOOLEAN
MeClientIsReady (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_ME_UTILS_LIB_API *DsaMeUtilsLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMeUtilsLibApiGuid = DSA_ME_UTILS_LIB_API_GUID;

  if (DsaMeUtilsLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMeUtilsLibApiGuid, 0, (VOID **)&DsaMeUtilsLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaMeUtilsLibApiPtr->MeClientIsReady ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Cpu/Include/Library/CpuPlatformLib.h:223
BOOLEAN
IsBiosGuardEnabled (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_CPU_PLATFORM_LIB_API *DsaCpuPlatformLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaCpuPlatformLibApiGuid = DSA_CPU_PLATFORM_LIB_API_GUID;

  if (DsaCpuPlatformLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaCpuPlatformLibApiGuid, 0, (VOID **)&DsaCpuPlatformLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaCpuPlatformLibApiPtr->IsBiosGuardEnabled ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/MeUtilsLib.h:235
BOOLEAN
MeClientIsCorporate (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_ME_UTILS_LIB_API *DsaMeUtilsLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMeUtilsLibApiGuid = DSA_ME_UTILS_LIB_API_GUID;

  if (DsaMeUtilsLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMeUtilsLibApiGuid, 0, (VOID **)&DsaMeUtilsLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaMeUtilsLibApiPtr->MeClientIsCorporate ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchPciBdfLib.h:646
UINT8
LpcDevNumber (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  static DSA_PCH_PCI_BDF_LIB_API *DsaPchPciBdfLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchPciBdfLibApiGuid = DSA_PCH_PCI_BDF_LIB_API_GUID;

  if (DsaPchPciBdfLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaPchPciBdfLibApiGuid, 0, (VOID **)&DsaPchPciBdfLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaPchPciBdfLibApiPtr->LpcDevNumber ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/UsraAccessApi.h:51
RETURN_STATUS
RegisterRead (
  USRA_ADDRESS * Address,
  VOID * Buffer
  )
{
  RETURN_STATUS ReturnValue = 0;
  static DSA_USRA_LIB_API *DsaUsraLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaUsraLibApiGuid = DSA_USRA_LIB_API_GUID;

  if (DsaUsraLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaUsraLibApiGuid, 0, (VOID **)&DsaUsraLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaUsraLibApiPtr->RegisterRead (Address, Buffer);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/UsraAccessApi.h:67
RETURN_STATUS
RegisterWrite (
  USRA_ADDRESS * Address,
  VOID * Buffer
  )
{
  RETURN_STATUS ReturnValue = 0;
  static DSA_USRA_LIB_API *DsaUsraLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaUsraLibApiGuid = DSA_USRA_LIB_API_GUID;

  if (DsaUsraLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaUsraLibApiGuid, 0, (VOID **)&DsaUsraLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaUsraLibApiPtr->RegisterWrite (Address, Buffer);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/KtiApi.h:1280
UINT8
GetStackId (
  UINT8 Socket,
  UINT8 StackFwInstance
  )
{
  UINT8 ReturnValue = 0;
  static DSA_KTI_API_LIB_API *DsaKtiApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaKtiApiLibApiGuid = DSA_KTI_API_LIB_API_GUID;

  if (DsaKtiApiLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaKtiApiLibApiGuid, 0, (VOID **)&DsaKtiApiLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaKtiApiLibApiPtr->GetStackId (Socket, StackFwInstance);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/KtiApi.h:1114
UINT8
GetPchPresentBitMap (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  static DSA_KTI_API_LIB_API *DsaKtiApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaKtiApiLibApiGuid = DSA_KTI_API_LIB_API_GUID;

  if (DsaKtiApiLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaKtiApiLibApiGuid, 0, (VOID **)&DsaKtiApiLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaKtiApiLibApiPtr->GetPchPresentBitMap ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/KtiApi.h:1198
UINT8
GetCxlPortNumber (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  static DSA_KTI_API_LIB_API *DsaKtiApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaKtiApiLibApiGuid = DSA_KTI_API_LIB_API_GUID;

  if (DsaKtiApiLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaKtiApiLibApiGuid, 0, (VOID **)&DsaKtiApiLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaKtiApiLibApiPtr->GetCxlPortNumber ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/KtiApi.h:790
UINT8
GetCxlStatus (
  UINT8 SocId,
  UINT8 StackId
  )
{
  UINT8 ReturnValue = 0;
  static DSA_KTI_API_LIB_API *DsaKtiApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaKtiApiLibApiGuid = DSA_KTI_API_LIB_API_GUID;

  if (DsaKtiApiLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaKtiApiLibApiGuid, 0, (VOID **)&DsaKtiApiLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaKtiApiLibApiPtr->GetCxlStatus (SocId, StackId);
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioDataHubLib.h:664
BOOLEAN
IioIsLccSku (
  UINT8 IioIndex
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_IIO_DATA_HUB_LIB_API *DsaIioDataHubLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaIioDataHubLibApiGuid = DSA_IIO_DATA_HUB_LIB_API_GUID;

  if (DsaIioDataHubLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaIioDataHubLibApiGuid, 0, (VOID **)&DsaIioDataHubLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaIioDataHubLibApiPtr->IioIsLccSku (IioIndex);
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioDataHubLib.h:651
BOOLEAN
IioIsEeMccSku (
  UINT8 IioIndex
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_IIO_DATA_HUB_LIB_API *DsaIioDataHubLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaIioDataHubLibApiGuid = DSA_IIO_DATA_HUB_LIB_API_GUID;

  if (DsaIioDataHubLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaIioDataHubLibApiGuid, 0, (VOID **)&DsaIioDataHubLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaIioDataHubLibApiPtr->IioIsEeMccSku (IioIndex);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/KtiApi.h:971
BOOLEAN
IsStackCxl20Capable (
  UINT8 SocketId,
  UINT8 StackId
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_KTI_API_LIB_API *DsaKtiApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaKtiApiLibApiGuid = DSA_KTI_API_LIB_API_GUID;

  if (DsaKtiApiLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaKtiApiLibApiGuid, 0, (VOID **)&DsaKtiApiLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaKtiApiLibApiPtr->IsStackCxl20Capable (SocketId, StackId);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:372
EFI_STATUS
PchGetSteppingStr (
  CHAR8 * Buffer,
  UINT32 BufferSize
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_PCH_INFO_LIB_API *DsaPchInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchInfoLibApiGuid = DSA_PCH_INFO_LIB_API_GUID;

  if (DsaPchInfoLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaPchInfoLibApiGuid, 0, (VOID **)&DsaPchInfoLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaPchInfoLibApiPtr->PchGetSteppingStr (Buffer, BufferSize);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:394
CHAR8 *
PchGetSkuStr (
   VOID
  )
{
  CHAR8 * ReturnValue = 0;
  static DSA_PCH_INFO_LIB_API *DsaPchInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchInfoLibApiGuid = DSA_PCH_INFO_LIB_API_GUID;

  if (DsaPchInfoLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaPchInfoLibApiGuid, 0, (VOID **)&DsaPchInfoLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaPchInfoLibApiPtr->PchGetSkuStr ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:384
CHAR8 *
PchGetSeriesStr (

  )
{
  CHAR8 * ReturnValue = 0;
  static DSA_PCH_INFO_LIB_API *DsaPchInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchInfoLibApiGuid = DSA_PCH_INFO_LIB_API_GUID;

  if (DsaPchInfoLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaPchInfoLibApiGuid, 0, (VOID **)&DsaPchInfoLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaPchInfoLibApiPtr->PchGetSeriesStr ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/MemTypeLib.h:182
BOOLEAN
IsMemTypeDdr (
  MEM_TYPE MemType
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_MEM_TYPE_LIB_API *DsaMemTypeLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMemTypeLibApiGuid = DSA_MEM_TYPE_LIB_API_GUID;

  if (DsaMemTypeLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMemTypeLibApiGuid, 0, (VOID **)&DsaMemTypeLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaMemTypeLibApiPtr->IsMemTypeDdr (MemType);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:704
UINT8
GetNumChannelPerIoHbm (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  static DSA_SYSTEM_INFO_LIB_API *DsaSystemInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSystemInfoLibApiGuid = DSA_SYSTEM_INFO_LIB_API_GUID;

  if (DsaSystemInfoLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaSystemInfoLibApiGuid, 0, (VOID **)&DsaSystemInfoLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaSystemInfoLibApiPtr->GetNumChannelPerIoHbm ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/KtiApi.h:90
BOOLEAN
IsFeatureEnabled (
  UINT8 TypeFeature
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_KTI_API_LIB_API *DsaKtiApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaKtiApiLibApiGuid = DSA_KTI_API_LIB_API_GUID;

  if (DsaKtiApiLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaKtiApiLibApiGuid, 0, (VOID **)&DsaKtiApiLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaKtiApiLibApiPtr->IsFeatureEnabled (TypeFeature);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/MemTypeLib.h:91
BOOLEAN
IsMemType2lm (
  MEM_TYPE MemType
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_MEM_TYPE_LIB_API *DsaMemTypeLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMemTypeLibApiGuid = DSA_MEM_TYPE_LIB_API_GUID;

  if (DsaMemTypeLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMemTypeLibApiGuid, 0, (VOID **)&DsaMemTypeLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaMemTypeLibApiPtr->IsMemType2lm (MemType);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/MemTypeLib.h:121
BOOLEAN
IsMemType2lmHbm (
  MEM_TYPE MemType
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_MEM_TYPE_LIB_API *DsaMemTypeLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMemTypeLibApiGuid = DSA_MEM_TYPE_LIB_API_GUID;

  if (DsaMemTypeLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMemTypeLibApiGuid, 0, (VOID **)&DsaMemTypeLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaMemTypeLibApiPtr->IsMemType2lmHbm (MemType);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/MemTypeLib.h:76
BOOLEAN
IsMemType2lmDdr (
  MEM_TYPE MemType
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_MEM_TYPE_LIB_API *DsaMemTypeLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMemTypeLibApiGuid = DSA_MEM_TYPE_LIB_API_GUID;

  if (DsaMemTypeLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMemTypeLibApiGuid, 0, (VOID **)&DsaMemTypeLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaMemTypeLibApiPtr->IsMemType2lmDdr (MemType);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:740
UINT8
GetMaxIoHbm (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  static DSA_SYSTEM_INFO_LIB_API *DsaSystemInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSystemInfoLibApiGuid = DSA_SYSTEM_INFO_LIB_API_GUID;

  if (DsaSystemInfoLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaSystemInfoLibApiGuid, 0, (VOID **)&DsaSystemInfoLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaSystemInfoLibApiPtr->GetMaxIoHbm ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/MemTypeLib.h:106
BOOLEAN
IsMemTypeHbm (
  MEM_TYPE MemType
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_MEM_TYPE_LIB_API *DsaMemTypeLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMemTypeLibApiGuid = DSA_MEM_TYPE_LIB_API_GUID;

  if (DsaMemTypeLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMemTypeLibApiGuid, 0, (VOID **)&DsaMemTypeLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaMemTypeLibApiPtr->IsMemTypeHbm (MemType);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:332
BootMode
GetSysBootMode (
   VOID
  )
{
  BootMode ReturnValue = 0;
  static DSA_SYSTEM_INFO_LIB_API *DsaSystemInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSystemInfoLibApiGuid = DSA_SYSTEM_INFO_LIB_API_GUID;

  if (DsaSystemInfoLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaSystemInfoLibApiGuid, 0, (VOID **)&DsaSystemInfoLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaSystemInfoLibApiPtr->GetSysBootMode ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/CompressedVariableLib.h:98
EFI_STATUS
LoadCompressedVariable (
  CHAR16 * VariableName,
  EFI_GUID VariableGuid,
  VOID * VariableBuffer,
  UINT32 VariableBufferSize
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_COMPRESSED_VARIABLE_LIB_API *DsaCompressedVariableLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaCompressedVariableLibApiGuid = DSA_COMPRESSED_VARIABLE_LIB_API_GUID;

  if (DsaCompressedVariableLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaCompressedVariableLibApiGuid, 0, (VOID **)&DsaCompressedVariableLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaCompressedVariableLibApiPtr->LoadCompressedVariable (VariableName, VariableGuid, VariableBuffer, VariableBufferSize);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/CompressedVariableLib.h:55
EFI_STATUS
CompressAndSaveToVariable (
  CHAR16 * VariableName,
  EFI_GUID VariableGuid,
  VOID * VariableBuffer,
  UINT32 VariableBufferSize
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_COMPRESSED_VARIABLE_LIB_API *DsaCompressedVariableLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaCompressedVariableLibApiGuid = DSA_COMPRESSED_VARIABLE_LIB_API_GUID;

  if (DsaCompressedVariableLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaCompressedVariableLibApiGuid, 0, (VOID **)&DsaCompressedVariableLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaCompressedVariableLibApiPtr->CompressAndSaveToVariable (VariableName, VariableGuid, VariableBuffer, VariableBufferSize);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/MemoryServicesLib.h:2710
SUB_BOOT_MODE
GetSubBootMode (
   VOID
  )
{
  SUB_BOOT_MODE ReturnValue = 0;
  static DSA_BASE_MEMORY_SERVICES_LIB_API *DsaBaseMemoryServicesLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaBaseMemoryServicesLibApiGuid = DSA_BASE_MEMORY_SERVICES_LIB_API_GUID;

  if (DsaBaseMemoryServicesLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaBaseMemoryServicesLibApiGuid, 0, (VOID **)&DsaBaseMemoryServicesLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaBaseMemoryServicesLibApiPtr->GetSubBootMode ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/SpdAccessLib.h:79
EFI_STATUS
SpdReadByte (
  UINT8 Socket,
  UINT8 Chan,
  UINT8 Dimm,
  UINT16 ByteOffset,
  UINT8 * Data
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_SPD_ACCESS_LIB_API *DsaSpdAccessLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSpdAccessLibApiGuid = DSA_SPD_ACCESS_LIB_API_GUID;

  if (DsaSpdAccessLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaSpdAccessLibApiGuid, 0, (VOID **)&DsaSpdAccessLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaSpdAccessLibApiPtr->SpdReadByte (Socket, Chan, Dimm, ByteOffset, Data);
  return ReturnValue;
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
  static DSA_CRC_LIB_API *DsaCrcLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaCrcLibApiGuid = DSA_CRC_LIB_API_GUID;

  if (DsaCrcLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaCrcLibApiGuid, 0, (VOID **)&DsaCrcLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaCrcLibApiPtr->CalculateCrc16 (Data, DataSize, CrcOut);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/KtiApi.h:1212
UINT32
GetCxlDpUpReservedMmio32Size (
  UINT8 Socket,
  UINT8 Stack
  )
{
  UINT32 ReturnValue = 0;
  static DSA_KTI_API_LIB_API *DsaKtiApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaKtiApiLibApiGuid = DSA_KTI_API_LIB_API_GUID;

  if (DsaKtiApiLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaKtiApiLibApiGuid, 0, (VOID **)&DsaKtiApiLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaKtiApiLibApiPtr->GetCxlDpUpReservedMmio32Size (Socket, Stack);
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioDataHubLib.h:980
IIO_HCX_TYPE
GetHcxType (
  UINT8 IioIndex
  )
{
  IIO_HCX_TYPE ReturnValue = 0;
  static DSA_IIO_DATA_HUB_LIB_API *DsaIioDataHubLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaIioDataHubLibApiGuid = DSA_IIO_DATA_HUB_LIB_API_GUID;

  if (DsaIioDataHubLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaIioDataHubLibApiGuid, 0, (VOID **)&DsaIioDataHubLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaIioDataHubLibApiPtr->GetHcxType (IioIndex);
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioDataHubLib.h:967
IIO_HCX_TYPE
GetHcxTypeEx (
  UINT8 IioIndex,
  UINT8 StackIndex
  )
{
  IIO_HCX_TYPE ReturnValue = 0;
  static DSA_IIO_DATA_HUB_LIB_API *DsaIioDataHubLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaIioDataHubLibApiGuid = DSA_IIO_DATA_HUB_LIB_API_GUID;

  if (DsaIioDataHubLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaIioDataHubLibApiGuid, 0, (VOID **)&DsaIioDataHubLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaIioDataHubLibApiPtr->GetHcxTypeEx (IioIndex, StackIndex);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/PcieMmcfgLib.h:58
UINT32
GetGlobalMmcfgBaseAddress (
   VOID
  )
{
  UINT32 ReturnValue = 0;
  static DSA_PCIE_MMCFG_LIB_API *DsaPcieMmcfgLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPcieMmcfgLibApiGuid = DSA_PCIE_MMCFG_LIB_API_GUID;

  if (DsaPcieMmcfgLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaPcieMmcfgLibApiGuid, 0, (VOID **)&DsaPcieMmcfgLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaPcieMmcfgLibApiPtr->GetGlobalMmcfgBaseAddress ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/MeUtilsLib.h:162
BOOLEAN
MeSkuIsClient (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_ME_UTILS_LIB_API *DsaMeUtilsLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMeUtilsLibApiGuid = DSA_ME_UTILS_LIB_API_GUID;

  if (DsaMeUtilsLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMeUtilsLibApiGuid, 0, (VOID **)&DsaMeUtilsLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaMeUtilsLibApiPtr->MeSkuIsClient ();
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioCxlApiLib.h:87
EFI_STATUS
IioGetCxl11ResDistribution (
  UINT8 Socket,
  UINT8 Stack,
  STACK_RES_DISTRIBUTION * Cxl11ResDist
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_IIO_CXL_API_LIB_API *DsaIioCxlApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaIioCxlApiLibApiGuid = DSA_IIO_CXL_API_LIB_API_GUID;

  if (DsaIioCxlApiLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaIioCxlApiLibApiGuid, 0, (VOID **)&DsaIioCxlApiLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaIioCxlApiLibApiPtr->IioGetCxl11ResDistribution (Socket, Stack, Cxl11ResDist);
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Include/Library/FpgaConfigurationLib.h:169
EFI_STATUS
FpgaConfigurationGetValues (
  FPGA_CONFIGURATION * FpgaConfigurationPointer
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_FPGA_CONFIGURATION_LIB_API *DsaFpgaConfigurationLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaFpgaConfigurationLibApiGuid = DSA_FPGA_CONFIGURATION_LIB_API_GUID;

  if (DsaFpgaConfigurationLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaFpgaConfigurationLibApiGuid, 0, (VOID **)&DsaFpgaConfigurationLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaFpgaConfigurationLibApiPtr->FpgaConfigurationGetValues (FpgaConfigurationPointer);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/MemTypeLib.h:433
CONST CHAR8 *
GetMemTypeString (
  MEM_TYPE MemType
  )
{
  CONST CHAR8 * ReturnValue = 0;
  static DSA_MEM_TYPE_LIB_API *DsaMemTypeLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMemTypeLibApiGuid = DSA_MEM_TYPE_LIB_API_GUID;

  if (DsaMemTypeLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMemTypeLibApiGuid, 0, (VOID **)&DsaMemTypeLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaMemTypeLibApiPtr->GetMemTypeString (MemType);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/KtiApi.h:576
UINT8
GetKtiPortCnt (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  static DSA_KTI_API_LIB_API *DsaKtiApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaKtiApiLibApiGuid = DSA_KTI_API_LIB_API_GUID;

  if (DsaKtiApiLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaKtiApiLibApiGuid, 0, (VOID **)&DsaKtiApiLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaKtiApiLibApiPtr->GetKtiPortCnt ();
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioDataHubLib.h:326
BOOLEAN
IioIsPcieRootPortStack (
  UINT8 Socket,
  UINT8 Stack
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_IIO_DATA_HUB_LIB_API *DsaIioDataHubLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaIioDataHubLibApiGuid = DSA_IIO_DATA_HUB_LIB_API_GUID;

  if (DsaIioDataHubLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaIioDataHubLibApiGuid, 0, (VOID **)&DsaIioDataHubLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaIioDataHubLibApiPtr->IioIsPcieRootPortStack (Socket, Stack);
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioApiLib.h:282
IIO_KEY_CFG_TYPE
IioKeyConfigBarGet (
  UINT8 SocketIndex,
  UINT8 StackIndex,
  UINT8 PortIndex,
  UINT8 * Segment,
  UINT8 * PciBusPtr,
  UINT8 * PciDevPtr,
  UINT8 * PciFuncPtr,
  UINT64 * RegisterBaseAddr
  )
{
  IIO_KEY_CFG_TYPE ReturnValue = 0;
  static DSA_IIO_API_LIB_API *DsaIioApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaIioApiLibApiGuid = DSA_IIO_API_LIB_API_GUID;

  if (DsaIioApiLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaIioApiLibApiGuid, 0, (VOID **)&DsaIioApiLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaIioApiLibApiPtr->IioKeyConfigBarGet (SocketIndex, StackIndex, PortIndex, Segment, PciBusPtr, PciDevPtr, PciFuncPtr, RegisterBaseAddr);
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioDataHubLib.h:1062
IIO_CONTROLLER_GEN
IioGetControllerType (
  UINT8 Socket,
  UINT8 Stack,
  UINT8 Port
  )
{
  IIO_CONTROLLER_GEN ReturnValue = 0;
  static DSA_IIO_DATA_HUB_LIB_API *DsaIioDataHubLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaIioDataHubLibApiGuid = DSA_IIO_DATA_HUB_LIB_API_GUID;

  if (DsaIioDataHubLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaIioDataHubLibApiGuid, 0, (VOID **)&DsaIioDataHubLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaIioDataHubLibApiPtr->IioGetControllerType (Socket, Stack, Port);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/KtiApi.h:146
UINT8
GetNumOfClusterPerSystem (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  static DSA_KTI_API_LIB_API *DsaKtiApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaKtiApiLibApiGuid = DSA_KTI_API_LIB_API_GUID;

  if (DsaKtiApiLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaKtiApiLibApiGuid, 0, (VOID **)&DsaKtiApiLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaKtiApiLibApiPtr->GetNumOfClusterPerSystem ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/KtiApi.h:678
UINT8
GetMaxPhysicalAddrBits (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  static DSA_KTI_API_LIB_API *DsaKtiApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaKtiApiLibApiGuid = DSA_KTI_API_LIB_API_GUID;

  if (DsaKtiApiLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaKtiApiLibApiGuid, 0, (VOID **)&DsaKtiApiLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaKtiApiLibApiPtr->GetMaxPhysicalAddrBits ();
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Include/Library/NumaAcpiTableLib.h:238
VOID
DisplayProximityDomain (
   VOID
  )
{
  static DSA_NUMA_ACPI_TABLE_LIB_API *DsaNumaAcpiTableLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaNumaAcpiTableLibApiGuid = DSA_NUMA_ACPI_TABLE_LIB_API_GUID;

  if (DsaNumaAcpiTableLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaNumaAcpiTableLibApiGuid, 0, (VOID **)&DsaNumaAcpiTableLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  DsaNumaAcpiTableLibApiPtr->DisplayProximityDomain ();
  return;
}

// v:/intel/ServerSiliconPkg/Include/Library/NumaAcpiTableLib.h:211
UINT32
GetProximityDomainNum (
   VOID
  )
{
  UINT32 ReturnValue = 0;
  static DSA_NUMA_ACPI_TABLE_LIB_API *DsaNumaAcpiTableLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaNumaAcpiTableLibApiGuid = DSA_NUMA_ACPI_TABLE_LIB_API_GUID;

  if (DsaNumaAcpiTableLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaNumaAcpiTableLibApiGuid, 0, (VOID **)&DsaNumaAcpiTableLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaNumaAcpiTableLibApiPtr->GetProximityDomainNum ();
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Include/Library/NumaAcpiTableLib.h:227
PROXIMITY_DOMAIN *
GetProximityDomain (
  UINT32 DomainId
  )
{
  PROXIMITY_DOMAIN * ReturnValue = 0;
  static DSA_NUMA_ACPI_TABLE_LIB_API *DsaNumaAcpiTableLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaNumaAcpiTableLibApiGuid = DSA_NUMA_ACPI_TABLE_LIB_API_GUID;

  if (DsaNumaAcpiTableLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaNumaAcpiTableLibApiGuid, 0, (VOID **)&DsaNumaAcpiTableLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaNumaAcpiTableLibApiPtr->GetProximityDomain (DomainId);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/MemTypeLib.h:167
BOOLEAN
IsMemTypeNonVolatile (
  MEM_TYPE MemType
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_MEM_TYPE_LIB_API *DsaMemTypeLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMemTypeLibApiGuid = DSA_MEM_TYPE_LIB_API_GUID;

  if (DsaMemTypeLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMemTypeLibApiGuid, 0, (VOID **)&DsaMemTypeLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaMemTypeLibApiPtr->IsMemTypeNonVolatile (MemType);
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Include/Library/PcuIpLib.h:668
BOOLEAN
PcuGetPcpsDisable (
  UINT8 SocId
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_PCU_IP_LIB_API *DsaPcuIpLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPcuIpLibApiGuid = DSA_PCU_IP_LIB_API_GUID;

  if (DsaPcuIpLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaPcuIpLibApiGuid, 0, (VOID **)&DsaPcuIpLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaPcuIpLibApiPtr->PcuGetPcpsDisable (SocId);
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Include/Library/PcuIpLib.h:613
BOOLEAN
PcuGetLpCapability (
  UINT8 SocId
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_PCU_IP_LIB_API *DsaPcuIpLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPcuIpLibApiGuid = DSA_PCU_IP_LIB_API_GUID;

  if (DsaPcuIpLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaPcuIpLibApiGuid, 0, (VOID **)&DsaPcuIpLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaPcuIpLibApiPtr->PcuGetLpCapability (SocId);
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Include/Library/PmemMiscLib.h:359
UINT8
GetAcpiDieCount (
  UINT8 SocketId
  )
{
  UINT8 ReturnValue = 0;
  static DSA_PMEM_MISC_LIB_API *DsaPmemMiscLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPmemMiscLibApiGuid = DSA_PMEM_MISC_LIB_API_GUID;

  if (DsaPmemMiscLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaPmemMiscLibApiGuid, 0, (VOID **)&DsaPmemMiscLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaPmemMiscLibApiPtr->GetAcpiDieCount (SocketId);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:668
UINT8
GetMaxImc (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  static DSA_SYSTEM_INFO_LIB_API *DsaSystemInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSystemInfoLibApiGuid = DSA_SYSTEM_INFO_LIB_API_GUID;

  if (DsaSystemInfoLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaSystemInfoLibApiGuid, 0, (VOID **)&DsaSystemInfoLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaSystemInfoLibApiPtr->GetMaxImc ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:656
UINT8
GetNumChannelPerMc (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  static DSA_SYSTEM_INFO_LIB_API *DsaSystemInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSystemInfoLibApiGuid = DSA_SYSTEM_INFO_LIB_API_GUID;

  if (DsaSystemInfoLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaSystemInfoLibApiGuid, 0, (VOID **)&DsaSystemInfoLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaSystemInfoLibApiPtr->GetNumChannelPerMc ();
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Cpu/Include/Library/CpuConfigLib.h:249
VOID
GetProcessorLocation2 (
  UINTN ProcessorNumber,
  UINT32 * PackageNumber,
  UINT32 * DieNumber,
  UINT32 * TileNumber,
  UINT32 * ModuleNumber,
  UINT32 * CoreNumber,
  UINT32 * ThreadNumber
  )
{
  static DSA_CPU_CONFIG_LIB_API *DsaCpuConfigLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaCpuConfigLibApiGuid = DSA_CPU_CONFIG_LIB_API_GUID;

  if (DsaCpuConfigLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaCpuConfigLibApiGuid, 0, (VOID **)&DsaCpuConfigLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  DsaCpuConfigLibApiPtr->GetProcessorLocation2 (ProcessorNumber, PackageNumber, DieNumber, TileNumber, ModuleNumber, CoreNumber, ThreadNumber);
  return;
}

// v:/intel/CpRcPkg/Include/Library/SysHostPointerLib.h:412
VOID *
GetMemMapHostPointer (
   VOID
  )
{
  VOID * ReturnValue = 0;
  static DSA_SYS_HOST_POINTER_LIB_API *DsaSysHostPointerLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSysHostPointerLibApiGuid = DSA_SYS_HOST_POINTER_LIB_API_GUID;

  if (DsaSysHostPointerLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaSysHostPointerLibApiGuid, 0, (VOID **)&DsaSysHostPointerLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaSysHostPointerLibApiPtr->GetMemMapHostPointer ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchCycleDecodingLib.h:421
EFI_STATUS
PchHpetBaseGet (
  UINT32 * HpetBase
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_PCH_CYCLE_DECODING_LIB_API *DsaPchCycleDecodingLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchCycleDecodingLibApiGuid = DSA_PCH_CYCLE_DECODING_LIB_API_GUID;

  if (DsaPchCycleDecodingLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaPchCycleDecodingLibApiGuid, 0, (VOID **)&DsaPchCycleDecodingLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaPchCycleDecodingLibApiPtr->PchHpetBaseGet (HpetBase);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/KtiApi.h:1057
BOOLEAN
IsHbmSku (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_KTI_API_LIB_API *DsaKtiApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaKtiApiLibApiGuid = DSA_KTI_API_LIB_API_GUID;

  if (DsaKtiApiLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaKtiApiLibApiGuid, 0, (VOID **)&DsaKtiApiLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaKtiApiLibApiPtr->IsHbmSku ();
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Include/Library/PcuIpLib.h:598
BOOLEAN
PcuGetHwpEnable (
  UINT8 SocId
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_PCU_IP_LIB_API *DsaPcuIpLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPcuIpLibApiGuid = DSA_PCU_IP_LIB_API_GUID;

  if (DsaPcuIpLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaPcuIpLibApiGuid, 0, (VOID **)&DsaPcuIpLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaPcuIpLibApiPtr->PcuGetHwpEnable (SocId);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/IpBlock/Sps/Include/Library/MeConfigLib.h:83
VOID
MeServerSetDxePolicyDefaults (
  ME_SERVER_DXE_CONFIG * MeServerDxeConfig
  )
{
  static DSA_ME_CONFIG_LIB_API *DsaMeConfigLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMeConfigLibApiGuid = DSA_ME_CONFIG_LIB_API_GUID;

  if (DsaMeConfigLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMeConfigLibApiGuid, 0, (VOID **)&DsaMeConfigLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  DsaMeConfigLibApiPtr->MeServerSetDxePolicyDefaults (MeServerDxeConfig);
  return;
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
  static DSA_ME_CONFIG_LIB_API *DsaMeConfigLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMeConfigLibApiGuid = DSA_ME_CONFIG_LIB_API_GUID;

  if (DsaMeConfigLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMeConfigLibApiGuid, 0, (VOID **)&DsaMeConfigLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaMeConfigLibApiPtr->MeConfigDeviceAutoResolve (Device, ConfigToResolve, MeIsCorporateAmt);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/MeUtilsLib.h:198
EFI_STATUS
MeGetFirmwareSku (
  UINT8 * MeSku
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_ME_UTILS_LIB_API *DsaMeUtilsLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMeUtilsLibApiGuid = DSA_ME_UTILS_LIB_API_GUID;

  if (DsaMeUtilsLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMeUtilsLibApiGuid, 0, (VOID **)&DsaMeUtilsLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaMeUtilsLibApiPtr->MeGetFirmwareSku (MeSku);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/MeTypeLib.h:59
ME_TYPE
MeTypeGet (
   VOID
  )
{
  ME_TYPE ReturnValue = 0;
  static DSA_ME_TYPE_LIB_API *DsaMeTypeLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMeTypeLibApiGuid = DSA_ME_TYPE_LIB_API_GUID;

  if (DsaMeTypeLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMeTypeLibApiGuid, 0, (VOID **)&DsaMeTypeLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaMeTypeLibApiPtr->MeTypeGet ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/MeUtilsLib.h:213
EFI_STATUS
MeClientHfsFwSkuToMbpSku (
  UINT8 * MeSku
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_ME_UTILS_LIB_API *DsaMeUtilsLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMeUtilsLibApiGuid = DSA_ME_UTILS_LIB_API_GUID;

  if (DsaMeUtilsLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMeUtilsLibApiGuid, 0, (VOID **)&DsaMeUtilsLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaMeUtilsLibApiPtr->MeClientHfsFwSkuToMbpSku (MeSku);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/MeTypeLib.h:114
BOOLEAN
MeTypeIsClient (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_ME_TYPE_LIB_API *DsaMeTypeLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMeTypeLibApiGuid = DSA_ME_TYPE_LIB_API_GUID;

  if (DsaMeTypeLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMeTypeLibApiGuid, 0, (VOID **)&DsaMeTypeLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaMeTypeLibApiPtr->MeTypeIsClient ();
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/DxeAmtPolicyLib.h:80
EFI_STATUS
AmtInstallPolicyProtocol (
  EFI_HANDLE ImageHandle,
  AMT_POLICY_PROTOCOL * DxeAmtPolicy
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_DXE_AMT_POLICY_LIB_API *DsaDxeAmtPolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaDxeAmtPolicyLibApiGuid = DSA_DXE_AMT_POLICY_LIB_API_GUID;

  if (DsaDxeAmtPolicyLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaDxeAmtPolicyLibApiGuid, 0, (VOID **)&DsaDxeAmtPolicyLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaDxeAmtPolicyLibApiPtr->AmtInstallPolicyProtocol (ImageHandle, DxeAmtPolicy);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/DxeAmtPolicyLib.h:62
EFI_STATUS
AmtCreatePolicyDefaults (
  AMT_POLICY_PROTOCOL ** DxeAmtPolicy
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_DXE_AMT_POLICY_LIB_API *DsaDxeAmtPolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaDxeAmtPolicyLibApiGuid = DSA_DXE_AMT_POLICY_LIB_API_GUID;

  if (DsaDxeAmtPolicyLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaDxeAmtPolicyLibApiGuid, 0, (VOID **)&DsaDxeAmtPolicyLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaDxeAmtPolicyLibApiPtr->AmtCreatePolicyDefaults (DxeAmtPolicy);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/IpBlock/Sps/Include/Library/DxeMeServerPolicyLib.h:80
EFI_STATUS
MeServerInstallPolicyProtocol (
  EFI_HANDLE ImageHandle,
  ME_SERVER_POLICY_PROTOCOL * DxeMeServerPolicy
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_DXE_ME_SERVER_POLICY_LIB_API *DsaDxeMeServerPolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaDxeMeServerPolicyLibApiGuid = DSA_DXE_ME_SERVER_POLICY_LIB_API_GUID;

  if (DsaDxeMeServerPolicyLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaDxeMeServerPolicyLibApiGuid, 0, (VOID **)&DsaDxeMeServerPolicyLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaDxeMeServerPolicyLibApiPtr->MeServerInstallPolicyProtocol (ImageHandle, DxeMeServerPolicy);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/IpBlock/Sps/Include/Library/DxeMeServerPolicyLib.h:62
EFI_STATUS
MeServerCreatePolicyDefaults (
  ME_SERVER_POLICY_PROTOCOL ** DxeMeServerPolicy
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_DXE_ME_SERVER_POLICY_LIB_API *DsaDxeMeServerPolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaDxeMeServerPolicyLibApiGuid = DSA_DXE_ME_SERVER_POLICY_LIB_API_GUID;

  if (DsaDxeMeServerPolicyLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaDxeMeServerPolicyLibApiGuid, 0, (VOID **)&DsaDxeMeServerPolicyLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaDxeMeServerPolicyLibApiPtr->MeServerCreatePolicyDefaults (DxeMeServerPolicy);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/DxePchPolicyLib.h:79
EFI_STATUS
PchInstallPolicyProtocol (
  EFI_HANDLE ImageHandle,
  PCH_POLICY_PROTOCOL * PchPolicy
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_DXE_PCH_POLICY_LIB_API *DsaDxePchPolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaDxePchPolicyLibApiGuid = DSA_DXE_PCH_POLICY_LIB_API_GUID;

  if (DsaDxePchPolicyLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaDxePchPolicyLibApiGuid, 0, (VOID **)&DsaDxePchPolicyLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaDxePchPolicyLibApiPtr->PchInstallPolicyProtocol (ImageHandle, PchPolicy);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/DxePchPolicyLib.h:61
EFI_STATUS
CreatePchDxeConfigBlocks (
  PCH_POLICY_PROTOCOL ** PchPolicy
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_DXE_PCH_POLICY_LIB_API *DsaDxePchPolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaDxePchPolicyLibApiGuid = DSA_DXE_PCH_POLICY_LIB_API_GUID;

  if (DsaDxePchPolicyLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaDxePchPolicyLibApiGuid, 0, (VOID **)&DsaDxePchPolicyLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaDxePchPolicyLibApiPtr->CreatePchDxeConfigBlocks (PchPolicy);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/DxeMePolicyLib.h:80
EFI_STATUS
MeInstallPolicyProtocol (
  EFI_HANDLE ImageHandle,
  ME_POLICY_PROTOCOL * DxeMePolicy
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_DXE_ME_POLICY_LIB_API *DsaDxeMePolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaDxeMePolicyLibApiGuid = DSA_DXE_ME_POLICY_LIB_API_GUID;

  if (DsaDxeMePolicyLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaDxeMePolicyLibApiGuid, 0, (VOID **)&DsaDxeMePolicyLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaDxeMePolicyLibApiPtr->MeInstallPolicyProtocol (ImageHandle, DxeMePolicy);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/DxeMePolicyLib.h:62
EFI_STATUS
MeCreatePolicyDefaults (
  ME_POLICY_PROTOCOL ** DxeMePolicy
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_DXE_ME_POLICY_LIB_API *DsaDxeMePolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaDxeMePolicyLibApiGuid = DSA_DXE_ME_POLICY_LIB_API_GUID;

  if (DsaDxeMePolicyLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaDxeMePolicyLibApiGuid, 0, (VOID **)&DsaDxeMePolicyLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaDxeMePolicyLibApiPtr->MeCreatePolicyDefaults (DxeMePolicy);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/SataSocLib.h:54
UINT8
MaxSataControllerNum (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  static DSA_SATA_SOC_LIB_API *DsaSataSocLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSataSocLibApiGuid = DSA_SATA_SOC_LIB_API_GUID;

  if (DsaSataSocLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaSataSocLibApiGuid, 0, (VOID **)&DsaSataSocLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaSataSocLibApiPtr->MaxSataControllerNum ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:242
SYS_INFO_VAR_NVRAM *
GetSysInfoVarNvramPtr (
   VOID
  )
{
  SYS_INFO_VAR_NVRAM * ReturnValue = 0;
  static DSA_SYSTEM_INFO_LIB_API *DsaSystemInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSystemInfoLibApiGuid = DSA_SYSTEM_INFO_LIB_API_GUID;

  if (DsaSystemInfoLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaSystemInfoLibApiGuid, 0, (VOID **)&DsaSystemInfoLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaSystemInfoLibApiPtr->GetSysInfoVarNvramPtr ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/MemCmosLib.h:275
VOID
SetMemDcpmmTrainingFailCmos (
  UINT8 DdrtTrainFail
  )
{
  static DSA_MEM_CMOS_LIB_API *DsaMemCmosLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMemCmosLibApiGuid = DSA_MEM_CMOS_LIB_API_GUID;

  if (DsaMemCmosLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMemCmosLibApiGuid, 0, (VOID **)&DsaMemCmosLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  DsaMemCmosLibApiPtr->SetMemDcpmmTrainingFailCmos (DdrtTrainFail);
  return;
}

// v:/intel/CpRcPkg/Include/Library/MemCmosLib.h:111
VOID
SetCriticalRetryNumber (
  UINT8 Retry
  )
{
  static DSA_MEM_CMOS_LIB_API *DsaMemCmosLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMemCmosLibApiGuid = DSA_MEM_CMOS_LIB_API_GUID;

  if (DsaMemCmosLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMemCmosLibApiGuid, 0, (VOID **)&DsaMemCmosLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  DsaMemCmosLibApiPtr->SetCriticalRetryNumber (Retry);
  return;
}

// v:/intel/CpRcPkg/Include/Library/MemCmosLib.h:224
VOID
SetMemSncFailFlagCmos (
  UINT8 SncFlag
  )
{
  static DSA_MEM_CMOS_LIB_API *DsaMemCmosLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMemCmosLibApiGuid = DSA_MEM_CMOS_LIB_API_GUID;

  if (DsaMemCmosLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMemCmosLibApiGuid, 0, (VOID **)&DsaMemCmosLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  DsaMemCmosLibApiPtr->SetMemSncFailFlagCmos (SncFlag);
  return;
}

// v:/intel/CpRcPkg/Include/Library/MemCmosLib.h:198
VOID
SetMemUmaDowngradeCmos (
  UINT8 Value
  )
{
  static DSA_MEM_CMOS_LIB_API *DsaMemCmosLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMemCmosLibApiGuid = DSA_MEM_CMOS_LIB_API_GUID;

  if (DsaMemCmosLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMemCmosLibApiGuid, 0, (VOID **)&DsaMemCmosLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  DsaMemCmosLibApiPtr->SetMemUmaDowngradeCmos (Value);
  return;
}

// v:/intel/CpRcPkg/Include/Library/CompressedVariableLib.h:76
EFI_STATUS
SaveVariableFromHob (
  EFI_GUID HobGuid,
  CHAR16 * VariableName,
  EFI_GUID VariableGuid
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_COMPRESSED_VARIABLE_LIB_API *DsaCompressedVariableLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaCompressedVariableLibApiGuid = DSA_COMPRESSED_VARIABLE_LIB_API_GUID;

  if (DsaCompressedVariableLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaCompressedVariableLibApiGuid, 0, (VOID **)&DsaCompressedVariableLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaCompressedVariableLibApiPtr->SaveVariableFromHob (HobGuid, VariableName, VariableGuid);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/MemCmosLib.h:249
VOID
SetMemPrefetchFailFlagCmos (
  UINT8 PrefetchFlag
  )
{
  static DSA_MEM_CMOS_LIB_API *DsaMemCmosLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMemCmosLibApiGuid = DSA_MEM_CMOS_LIB_API_GUID;

  if (DsaMemCmosLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMemCmosLibApiGuid, 0, (VOID **)&DsaMemCmosLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  DsaMemCmosLibApiPtr->SetMemPrefetchFailFlagCmos (PrefetchFlag);
  return;
}

// v:/intel/CpRcPkg/Include/Library/MemCmosLib.h:71
VOID
SetColdBootSlowRequired (
  BOOLEAN ColdBootSlowRequired
  )
{
  static DSA_MEM_CMOS_LIB_API *DsaMemCmosLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMemCmosLibApiGuid = DSA_MEM_CMOS_LIB_API_GUID;

  if (DsaMemCmosLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMemCmosLibApiGuid, 0, (VOID **)&DsaMemCmosLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  DsaMemCmosLibApiPtr->SetColdBootSlowRequired (ColdBootSlowRequired);
  return;
}

// v:/intel/ServerSiliconPkg/Cpu/Include/Library/X2ApicIdDetectLib.h:40
BOOLEAN
X2ApicIdDetect (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_X2_APIC_ID_DETECT_LIB_API *DsaX2ApicIdDetectLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaX2ApicIdDetectLibApiGuid = DSA_X2_APIC_ID_DETECT_LIB_API_GUID;

  if (DsaX2ApicIdDetectLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaX2ApicIdDetectLibApiGuid, 0, (VOID **)&DsaX2ApicIdDetectLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaX2ApicIdDetectLibApiPtr->X2ApicIdDetect ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/KtiApi.h:420
BOOLEAN
SocketPresent (
  UINT32 SocId
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_KTI_API_LIB_API *DsaKtiApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaKtiApiLibApiGuid = DSA_KTI_API_LIB_API_GUID;

  if (DsaKtiApiLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaKtiApiLibApiGuid, 0, (VOID **)&DsaKtiApiLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaKtiApiLibApiPtr->SocketPresent (SocId);
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/MemRcLib.h:243
BOOLEAN
CheckSocketDcpmmPresent (
  UINT8 SocketId
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_MEM_RC_LIB_API *DsaMemRcLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMemRcLibApiGuid = DSA_MEM_RC_LIB_API_GUID;

  if (DsaMemRcLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMemRcLibApiGuid, 0, (VOID **)&DsaMemRcLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaMemRcLibApiPtr->CheckSocketDcpmmPresent (SocketId);
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Cpu/Include/Library/CpuEarlyDataLib.h:72
CPU_VAR_DATA *
GetCpuVarData (

  )
{
  CPU_VAR_DATA * ReturnValue = 0;
  static DSA_CPU_EARLY_DATA_LIB_API *DsaCpuEarlyDataLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaCpuEarlyDataLibApiGuid = DSA_CPU_EARLY_DATA_LIB_API_GUID;

  if (DsaCpuEarlyDataLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaCpuEarlyDataLibApiGuid, 0, (VOID **)&DsaCpuEarlyDataLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaCpuEarlyDataLibApiPtr->GetCpuVarData ();
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Cpu/Include/Library/CpuPreMemPolicyLib.h:117
UINT8
GetCpuPkgcStatePolicy (
   VOID
  )
{
  UINT8 ReturnValue = 0;
  static DSA_CPU_PRE_MEM_POLICY_LIB_API *DsaCpuPreMemPolicyLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaCpuPreMemPolicyLibApiGuid = DSA_CPU_PRE_MEM_POLICY_LIB_API_GUID;

  if (DsaCpuPreMemPolicyLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaCpuPreMemPolicyLibApiGuid, 0, (VOID **)&DsaCpuPreMemPolicyLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaCpuPreMemPolicyLibApiPtr->GetCpuPkgcStatePolicy ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/MemMapDataLib.h:61
SYSTEM_MEMORY_MAP_HOB *
GetSystemMemoryMapData (
   VOID
  )
{
  SYSTEM_MEMORY_MAP_HOB * ReturnValue = 0;
  static DSA_MEM_MAP_DATA_LIB_API *DsaMemMapDataLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMemMapDataLibApiGuid = DSA_MEM_MAP_DATA_LIB_API_GUID;

  if (DsaMemMapDataLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMemMapDataLibApiGuid, 0, (VOID **)&DsaMemMapDataLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaMemMapDataLibApiPtr->GetSystemMemoryMapData ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/EmulationConfigurationLib.h:99
BOOLEAN
HybridSystemLevelEmulationEnabled (
   VOID
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_EMULATION_CONFIGURATION_LIB_API *DsaEmulationConfigurationLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaEmulationConfigurationLibApiGuid = DSA_EMULATION_CONFIGURATION_LIB_API_GUID;

  if (DsaEmulationConfigurationLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaEmulationConfigurationLibApiGuid, 0, (VOID **)&DsaEmulationConfigurationLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaEmulationConfigurationLibApiPtr->HybridSystemLevelEmulationEnabled ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/SiliconWorkaroundLib.h:56
BOOLEAN
IsSiliconWorkaroundEnabled (
  CONST CHAR8 * WorkaroundName
  )
{
  BOOLEAN ReturnValue = 0;
  static DSA_SILICON_WORKAROUND_LIB_API *DsaSiliconWorkaroundLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSiliconWorkaroundLibApiGuid = DSA_SILICON_WORKAROUND_LIB_API_GUID;

  if (DsaSiliconWorkaroundLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaSiliconWorkaroundLibApiGuid, 0, (VOID **)&DsaSiliconWorkaroundLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaSiliconWorkaroundLibApiPtr->IsSiliconWorkaroundEnabled (WorkaroundName);
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
  static DSA_CPU_AND_REVISION_LIB_API *DsaCpuAndRevisionLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaCpuAndRevisionLibApiGuid = DSA_CPU_AND_REVISION_LIB_API_GUID;

  if (DsaCpuAndRevisionLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaCpuAndRevisionLibApiGuid, 0, (VOID **)&DsaCpuAndRevisionLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaCpuAndRevisionLibApiPtr->IsCpuAndRevision (CpuType, Revision);
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
  static DSA_GPIO_LIB_API *DsaGpioLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaGpioLibApiGuid = DSA_GPIO_LIB_API_GUID;

  if (DsaGpioLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaGpioLibApiGuid, 0, (VOID **)&DsaGpioLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaGpioLibApiPtr->GpioSetOutputValue (GpioPad, Value);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:742
EFI_STATUS
GpioGetGpiSmiNum (
  GPIO_PAD GpioPad,
  UINTN * GpiNum
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_GPIO_LIB_API *DsaGpioLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaGpioLibApiGuid = DSA_GPIO_LIB_API_GUID;

  if (DsaGpioLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaGpioLibApiGuid, 0, (VOID **)&DsaGpioLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaGpioLibApiPtr->GpioGetGpiSmiNum (GpioPad, GpiNum);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:203
EFI_STATUS
GpioGetInputInversion (
  GPIO_PAD GpioPad,
  UINT32 * InvertState
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_GPIO_LIB_API *DsaGpioLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaGpioLibApiGuid = DSA_GPIO_LIB_API_GUID;

  if (DsaGpioLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaGpioLibApiGuid, 0, (VOID **)&DsaGpioLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaGpioLibApiPtr->GpioGetInputInversion (GpioPad, InvertState);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:799
EFI_STATUS
GpioGetGpiSmiSts (
  GPIO_PAD GpioPad,
  BOOLEAN * SmiSts
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_GPIO_LIB_API *DsaGpioLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaGpioLibApiGuid = DSA_GPIO_LIB_API_GUID;

  if (DsaGpioLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaGpioLibApiGuid, 0, (VOID **)&DsaGpioLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaGpioLibApiPtr->GpioGetGpiSmiSts (GpioPad, SmiSts);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:104
EFI_STATUS
GpioSetPadConfig (
  GPIO_PAD GpioPad,
  GPIO_CONFIG * GpioData
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_GPIO_LIB_API *DsaGpioLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaGpioLibApiGuid = DSA_GPIO_LIB_API_GUID;

  if (DsaGpioLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaGpioLibApiGuid, 0, (VOID **)&DsaGpioLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
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
  static DSA_GPIO_LIB_API *DsaGpioLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaGpioLibApiGuid = DSA_GPIO_LIB_API_GUID;

  if (DsaGpioLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaGpioLibApiGuid, 0, (VOID **)&DsaGpioLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaGpioLibApiPtr->GpioGetInputValue (GpioPad, InputVal);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:89
EFI_STATUS
GpioGetPadConfig (
  GPIO_PAD GpioPad,
  GPIO_CONFIG * GpioData
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_GPIO_LIB_API *DsaGpioLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaGpioLibApiGuid = DSA_GPIO_LIB_API_GUID;

  if (DsaGpioLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaGpioLibApiGuid, 0, (VOID **)&DsaGpioLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaGpioLibApiPtr->GpioGetPadConfig (GpioPad, GpioData);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:187
EFI_STATUS
GpioSetInputInversion (
  GPIO_PAD GpioPad,
  UINT32 Value
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_GPIO_LIB_API *DsaGpioLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaGpioLibApiGuid = DSA_GPIO_LIB_API_GUID;

  if (DsaGpioLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaGpioLibApiGuid, 0, (VOID **)&DsaGpioLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaGpioLibApiPtr->GpioSetInputInversion (GpioPad, Value);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:707
EFI_STATUS
GpioClearGpiSmiSts (
  GPIO_PAD GpioPad
  )
{
  EFI_STATUS ReturnValue = 0;
  static DSA_GPIO_LIB_API *DsaGpioLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaGpioLibApiGuid = DSA_GPIO_LIB_API_GUID;

  if (DsaGpioLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaGpioLibApiGuid, 0, (VOID **)&DsaGpioLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaGpioLibApiPtr->GpioClearGpiSmiSts (GpioPad);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Include/Library/PmcLib.h:122
UINT16
PmcGetAcpiBase (
   VOID
  )
{
  UINT16 ReturnValue = 0;
  static DSA_PMC_LIB_API *DsaPmcLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPmcLibApiGuid = DSA_PMC_LIB_API_GUID;

  if (DsaPmcLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaPmcLibApiGuid, 0, (VOID **)&DsaPmcLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaPmcLibApiPtr->PmcGetAcpiBase ();
  return ReturnValue;
}

// v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:55
CPU_CSR_ACCESS_VAR *
GetSysCpuCsrAccessVar (
   VOID
  )
{
  CPU_CSR_ACCESS_VAR * ReturnValue = 0;
  static DSA_SYSTEM_INFO_LIB_API *DsaSystemInfoLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaSystemInfoLibApiGuid = DSA_SYSTEM_INFO_LIB_API_GUID;

  if (DsaSystemInfoLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaSystemInfoLibApiGuid, 0, (VOID **)&DsaSystemInfoLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaSystemInfoLibApiPtr->GetSysCpuCsrAccessVar ();
  return ReturnValue;
}

// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioApiLib.h:258
VOID
IioPciHookBeforeEnumeration (
  UINT8 Segment,
  UINT8 Bus,
  UINT8 Device,
  UINT8 Function,
  UINT32 DidVid
  )
{
  static DSA_IIO_API_LIB_API *DsaIioApiLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaIioApiLibApiGuid = DSA_IIO_API_LIB_API_GUID;

  if (DsaIioApiLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaIioApiLibApiGuid, 0, (VOID **)&DsaIioApiLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  DsaIioApiLibApiPtr->IioPciHookBeforeEnumeration (Segment, Bus, Device, Function, DidVid);
  return;
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
  static DSA_MM_PCI_LIB_API *DsaMmPciLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaMmPciLibApiGuid = DSA_MM_PCI_LIB_API_GUID;

  if (DsaMmPciLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaMmPciLibApiGuid, 0, (VOID **)&DsaMmPciLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaMmPciLibApiPtr->MmPciBase (Bus, Device, Function);
  return ReturnValue;
}

// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchPciBdfLib.h:384
UINT64
PchXhciPciCfgBase (
   VOID
  )
{
  UINT64 ReturnValue = 0;
  static DSA_PCH_PCI_BDF_LIB_API *DsaPchPciBdfLibApiPtr = NULL;
  RETURN_STATUS          DsaStatus = RETURN_SUCCESS;
  EFI_GUID               gDsaPchPciBdfLibApiGuid = DSA_PCH_PCI_BDF_LIB_API_GUID;

  if (DsaPchPciBdfLibApiPtr == NULL) {
    DsaStatus = LocateInterface (&gDsaPchPciBdfLibApiGuid, 0, (VOID **)&DsaPchPciBdfLibApiPtr);
    ASSERT_RETURN_ERROR (DsaStatus);

  }
  ReturnValue = DsaPchPciBdfLibApiPtr->PchXhciPciCfgBase ();
  return ReturnValue;
}
