/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_DXE_AMT_POLICY_LIB_API_H_
#define _DSA_DXE_AMT_POLICY_LIB_API_H_

#include <Base.h>
#include <Library/DxeAmtPolicyLib.h>
//@AdditionalIncludes

#define DSA_DXE_AMT_POLICY_LIB_API_GUID { 0x18B5DD77, 0x4CAC, 0x4119, { 0x90, 0x79, 0x9B, 0x0F, 0x4A, 0x7C, 0x9B, 0x40 } }

#define DSA_DXE_AMT_POLICY_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_DXE_AMT_POLICY_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Amt\Library\DxeAmtPolicyLib\DxeAmtPolicyLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/DxeAmtPolicyLib.h:62
typedef
EFI_STATUS
(EFIAPI *DSA_AmtCreatePolicyDefaults) (
  AMT_POLICY_PROTOCOL ** DxeAmtPolicy
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Amt\Library\DxeAmtPolicyLib\DxeAmtPolicyLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/DxeAmtPolicyLib.h:80
typedef
EFI_STATUS
(EFIAPI *DSA_AmtInstallPolicyProtocol) (
  EFI_HANDLE ImageHandle,
  AMT_POLICY_PROTOCOL * DxeAmtPolicy
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_AmtCreatePolicyDefaults AmtCreatePolicyDefaults; // v:/intel/ClientOneSiliconPkg/Include/Library/DxeAmtPolicyLib.h:62
  DSA_AmtInstallPolicyProtocol AmtInstallPolicyProtocol; // v:/intel/ClientOneSiliconPkg/Include/Library/DxeAmtPolicyLib.h:80
//@AdditionalApiStruct
} DSA_DXE_AMT_POLICY_LIB_API;

#endif // _DSA_DXE_AMT_POLICY_LIB_API_H_
