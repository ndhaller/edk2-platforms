/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_PSMI_POLICY_LIB_API_H_
#define _DSA_PSMI_POLICY_LIB_API_H_

#include <Base.h>
#include <Library/PsmiPolicyLib.h>
//@AdditionalIncludes

#define DSA_PSMI_POLICY_LIB_API_GUID { 0x9A637A10, 0xA98F, 0x4FED, { 0xB1, 0x6A, 0xA2, 0xA6, 0x43, 0x76, 0x1C, 0x96 } }

#define DSA_PSMI_POLICY_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_PSMI_POLICY_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Library\PsmiLib\PsmiPolicyLib\PsmiPolicyLib.inf// v:/intel/ServerSiliconPkg/Include/Library/PsmiPolicyLib.h:82
typedef
PSMI_SETUP *
(EFIAPI *DSA_GetPsmiPolicy) (

  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_GetPsmiPolicy GetPsmiPolicy; // v:/intel/ServerSiliconPkg/Include/Library/PsmiPolicyLib.h:82
//@AdditionalApiStruct
} DSA_PSMI_POLICY_LIB_API;

#endif // _DSA_PSMI_POLICY_LIB_API_H_
