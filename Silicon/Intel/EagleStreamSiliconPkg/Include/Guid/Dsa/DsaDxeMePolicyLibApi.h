/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_DXE_ME_POLICY_LIB_API_H_
#define _DSA_DXE_ME_POLICY_LIB_API_H_

#include <Base.h>
#include <Library/DxeMePolicyLib.h>
//@AdditionalIncludes

#define DSA_DXE_ME_POLICY_LIB_API_GUID { 0x7BF9EEC0, 0xC731, 0x4023, { 0xB0, 0xAD, 0x37, 0xC8, 0xDC, 0x57, 0xD3, 0x22 } }

#define DSA_DXE_ME_POLICY_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_DXE_ME_POLICY_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Me\Library\DxeMePolicyLib\DxeMePolicyLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/DxeMePolicyLib.h:62
typedef
EFI_STATUS
(EFIAPI *DSA_MeCreatePolicyDefaults) (
  ME_POLICY_PROTOCOL ** DxeMePolicy
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Me\Library\DxeMePolicyLib\DxeMePolicyLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/DxeMePolicyLib.h:80
typedef
EFI_STATUS
(EFIAPI *DSA_MeInstallPolicyProtocol) (
  EFI_HANDLE ImageHandle,
  ME_POLICY_PROTOCOL * DxeMePolicy
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_MeCreatePolicyDefaults MeCreatePolicyDefaults; // v:/intel/ClientOneSiliconPkg/Include/Library/DxeMePolicyLib.h:62
  DSA_MeInstallPolicyProtocol MeInstallPolicyProtocol; // v:/intel/ClientOneSiliconPkg/Include/Library/DxeMePolicyLib.h:80
//@AdditionalApiStruct
} DSA_DXE_ME_POLICY_LIB_API;

#endif // _DSA_DXE_ME_POLICY_LIB_API_H_
