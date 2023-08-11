/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_DXE_PCH_POLICY_LIB_API_H_
#define _DSA_DXE_PCH_POLICY_LIB_API_H_

#include <Base.h>
#include <Library/DxePchPolicyLib.h>
//@AdditionalIncludes

#define DSA_DXE_PCH_POLICY_LIB_API_GUID { 0x95E42ADD, 0xB50B, 0x4F90, { 0x99, 0xB0, 0x08, 0xE8, 0x74, 0x86, 0xCA, 0x5B } }

#define DSA_DXE_PCH_POLICY_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_DXE_PCH_POLICY_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\Pch\Library\DxePchPolicyLib\DxePchPolicyLib.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/DxePchPolicyLib.h:61
typedef
EFI_STATUS
(EFIAPI *DSA_CreatePchDxeConfigBlocks) (
  PCH_POLICY_PROTOCOL ** PchPolicy
  );

// From: v:\intel\ClientOneSiliconPkg\Pch\Library\DxePchPolicyLib\DxePchPolicyLib.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/DxePchPolicyLib.h:79
typedef
EFI_STATUS
(EFIAPI *DSA_PchInstallPolicyProtocol) (
  EFI_HANDLE ImageHandle,
  PCH_POLICY_PROTOCOL * PchPolicy
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_CreatePchDxeConfigBlocks CreatePchDxeConfigBlocks; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/DxePchPolicyLib.h:61
  DSA_PchInstallPolicyProtocol PchInstallPolicyProtocol; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/DxePchPolicyLib.h:79
//@AdditionalApiStruct
} DSA_DXE_PCH_POLICY_LIB_API;

#endif // _DSA_DXE_PCH_POLICY_LIB_API_H_
