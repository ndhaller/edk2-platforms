/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_MEMORY_POLICY_LIB_API_H_
#define _DSA_MEMORY_POLICY_LIB_API_H_

#include <Base.h>
#include <Library/PeiMemoryPolicyLib.h>
//@AdditionalIncludes

#define DSA_MEMORY_POLICY_LIB_API_GUID { 0xED0BE306, 0xDB01, 0x4A2D, { 0xB5, 0x5C, 0x2E, 0x9C, 0x81, 0x2A, 0xA2, 0x63 } }

#define DSA_MEMORY_POLICY_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_MEMORY_POLICY_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Library\PeiMemoryPolicyLib\PeiMemoryPolicyLib.inf// v:/intel/CpRcPkg/Include/Library/PeiMemoryPolicyLib.h:69
typedef
EFI_STATUS
(EFIAPI *DSA_InstallMemoryPolicyPpi) (
  MEMORY_POLICY_PPI * PolicyPpi
  );

// From: v:\intel\ServerSiliconPkg\Library\PeiMemoryPolicyLib\PeiMemoryPolicyLib.inf// v:/intel/CpRcPkg/Include/Library/PeiMemoryPolicyLib.h:50
typedef
EFI_STATUS
(EFIAPI *DSA_SetMemoryPolicyDefaults) (
  MEMORY_POLICY_PPI * PolicyPpi
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_InstallMemoryPolicyPpi InstallMemoryPolicyPpi; // v:/intel/CpRcPkg/Include/Library/PeiMemoryPolicyLib.h:69
  DSA_SetMemoryPolicyDefaults SetMemoryPolicyDefaults; // v:/intel/CpRcPkg/Include/Library/PeiMemoryPolicyLib.h:50
//@AdditionalApiStruct
} DSA_MEMORY_POLICY_LIB_API;

#endif // _DSA_MEMORY_POLICY_LIB_API_H_
