/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_UBOX_IP_INTERFACE_API_H_
#define _DSA_UBOX_IP_INTERFACE_API_H_

#include <Base.h>
#include <Guid/UboxIpInterface.h>
//@AdditionalIncludes

#define DSA_UBOX_IP_INTERFACE_API_GUID { 0x3AA6BF34, 0x4409, 0x4C88, { 0xBA, 0x32, 0x69, 0xA8, 0x0F, 0xF6, 0x86, 0x7E } }

#define DSA_UBOX_IP_INTERFACE_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_UBOX_IP_INTERFACE_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Library\UboxIpLib\UboxIpLibSpr.inf// v:/intel/CpRcPkg/Include/Guid/UboxIpInterface.h:520
typedef
EFI_STATUS
(EFIAPI *DSA_UBoxGetInDirtyWarmResetModeFlagInScratchpad) (
  UINT8 SocId,
  UINT8 BoxInst,
  UINT8 * InDwr
  );

// From: v:\intel\ServerSiliconPkg\Library\UboxIpLib\UboxIpLibSpr.inf// v:/intel/CpRcPkg/Include/Guid/UboxIpInterface.h:430
typedef
EFI_STATUS
(EFIAPI *DSA_UBoxSetDirtyWarmResetStallFlagInScratchpad) (
  UINT8 SocId,
  UINT8 BoxInst,
  UINT8 Flag
  );

// From: v:\intel\ServerSiliconPkg\Library\UboxIpLib\UboxIpLibSpr.inf// v:/intel/CpRcPkg/Include/Guid/UboxIpInterface.h:460
typedef
EFI_STATUS
(EFIAPI *DSA_UBoxGetDirtyWarmResetStallFlagInScratchpad) (
  UINT8 SocId,
  UINT8 BoxInst,
  UINT8 * DwrBiosStall
  );

// From: v:\intel\ServerSiliconPkg\Library\UboxIpLib\UboxIpLibSpr.inf// v:/intel/CpRcPkg/Include/Guid/UboxIpInterface.h:550
typedef
EFI_STATUS
(EFIAPI *DSA_UBoxSetDirtyWarmResetFlowCompletedFlagInScratchpad) (
  UINT8 SocId,
  UINT8 BoxInst,
  UINT8 Flag
  );

// From: v:\intel\ServerSiliconPkg\Library\UboxIpLib\UboxIpLibSpr.inf// v:/intel/CpRcPkg/Include/Guid/UboxIpInterface.h:490
typedef
EFI_STATUS
(EFIAPI *DSA_UBoxSetInDirtyWarmResetModeFlagInScratchpad) (
  UINT8 SocId,
  UINT8 BoxInst,
  UINT8 Flag
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_UBoxGetInDirtyWarmResetModeFlagInScratchpad UBoxGetInDirtyWarmResetModeFlagInScratchpad; // v:/intel/CpRcPkg/Include/Guid/UboxIpInterface.h:520
  DSA_UBoxSetDirtyWarmResetStallFlagInScratchpad UBoxSetDirtyWarmResetStallFlagInScratchpad; // v:/intel/CpRcPkg/Include/Guid/UboxIpInterface.h:430
  DSA_UBoxGetDirtyWarmResetStallFlagInScratchpad UBoxGetDirtyWarmResetStallFlagInScratchpad; // v:/intel/CpRcPkg/Include/Guid/UboxIpInterface.h:460
  DSA_UBoxSetDirtyWarmResetFlowCompletedFlagInScratchpad UBoxSetDirtyWarmResetFlowCompletedFlagInScratchpad; // v:/intel/CpRcPkg/Include/Guid/UboxIpInterface.h:550
  DSA_UBoxSetInDirtyWarmResetModeFlagInScratchpad UBoxSetInDirtyWarmResetModeFlagInScratchpad; // v:/intel/CpRcPkg/Include/Guid/UboxIpInterface.h:490
//@AdditionalApiStruct
} DSA_UBOX_IP_INTERFACE_API;

#endif // _DSA_UBOX_IP_INTERFACE_API_H_
