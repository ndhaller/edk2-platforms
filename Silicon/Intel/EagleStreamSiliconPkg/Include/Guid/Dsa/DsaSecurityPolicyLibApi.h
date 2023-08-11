/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_SECURITY_POLICY_LIB_API_H_
#define _DSA_SECURITY_POLICY_LIB_API_H_

#include <Base.h>
#include <Library/SecurityPolicyLib.h>
//@AdditionalIncludes

#define DSA_SECURITY_POLICY_LIB_API_GUID { 0xABB94757, 0x832C, 0x4059, { 0x96, 0x76, 0x3F, 0x72, 0x12, 0xCB, 0x92, 0x49 } }

#define DSA_SECURITY_POLICY_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_SECURITY_POLICY_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Security\IDE\Library\SecurityPolicy\SecurityPolicyLib.inf// v:/intel/ServerSiliconPkg/Security/IDE/Include/Library/SecurityPolicyLib.h:98
typedef
SECURITY_POLICY *
(EFIAPI *DSA_GetSecurityPolicy) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Security\IDE\Library\SecurityPolicy\SecurityPolicyLib.inf// v:/intel/ServerSiliconPkg/Security/IDE/Include/Library/SecurityPolicyLib.h:45
typedef
EFI_STATUS
(EFIAPI *DSA_InitializeSecurityPolicyHobPreMem) (
   VOID
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_GetSecurityPolicy GetSecurityPolicy; // v:/intel/ServerSiliconPkg/Security/IDE/Include/Library/SecurityPolicyLib.h:98
  DSA_InitializeSecurityPolicyHobPreMem InitializeSecurityPolicyHobPreMem; // v:/intel/ServerSiliconPkg/Security/IDE/Include/Library/SecurityPolicyLib.h:45
//@AdditionalApiStruct
} DSA_SECURITY_POLICY_LIB_API;

#endif // _DSA_SECURITY_POLICY_LIB_API_H_
