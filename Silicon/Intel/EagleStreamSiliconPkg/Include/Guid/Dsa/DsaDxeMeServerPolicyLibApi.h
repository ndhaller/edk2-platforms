/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_DXE_ME_SERVER_POLICY_LIB_API_H_
#define _DSA_DXE_ME_SERVER_POLICY_LIB_API_H_

#include <Base.h>
#include <Library/DxeMeServerPolicyLib.h>
//@AdditionalIncludes

#define DSA_DXE_ME_SERVER_POLICY_LIB_API_GUID { 0x8514F6F4, 0x0D51, 0x4B85, { 0xA5, 0x5A, 0x2A, 0x51, 0x75, 0x72, 0x49, 0x28 } }

#define DSA_DXE_ME_SERVER_POLICY_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_DXE_ME_SERVER_POLICY_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Sps\Library\DxeMeServerPolicyLib\DxeMeServerPolicyLib.inf// v:/intel/ClientOneSiliconPkg/IpBlock/Sps/Include/Library/DxeMeServerPolicyLib.h:62
typedef
EFI_STATUS
(EFIAPI *DSA_MeServerCreatePolicyDefaults) (
  ME_SERVER_POLICY_PROTOCOL ** DxeMeServerPolicy
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Sps\Library\DxeMeServerPolicyLib\DxeMeServerPolicyLib.inf// v:/intel/ClientOneSiliconPkg/IpBlock/Sps/Include/Library/DxeMeServerPolicyLib.h:80
typedef
EFI_STATUS
(EFIAPI *DSA_MeServerInstallPolicyProtocol) (
  EFI_HANDLE ImageHandle,
  ME_SERVER_POLICY_PROTOCOL * DxeMeServerPolicy
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_MeServerCreatePolicyDefaults MeServerCreatePolicyDefaults; // v:/intel/ClientOneSiliconPkg/IpBlock/Sps/Include/Library/DxeMeServerPolicyLib.h:62
  DSA_MeServerInstallPolicyProtocol MeServerInstallPolicyProtocol; // v:/intel/ClientOneSiliconPkg/IpBlock/Sps/Include/Library/DxeMeServerPolicyLib.h:80
//@AdditionalApiStruct
} DSA_DXE_ME_SERVER_POLICY_LIB_API;

#endif // _DSA_DXE_ME_SERVER_POLICY_LIB_API_H_
