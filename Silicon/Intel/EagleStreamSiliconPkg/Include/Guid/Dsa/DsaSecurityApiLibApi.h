/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_SECURITY_API_LIB_API_H_
#define _DSA_SECURITY_API_LIB_API_H_

#include <Base.h>
#include <Library/SecurityApiLib.h>
//@AdditionalIncludes

#define DSA_SECURITY_API_LIB_API_GUID { 0x933721F4, 0xD19A, 0x4A12, { 0x82, 0x91, 0xE6, 0xFE, 0xE8, 0x2B, 0xEE, 0x7E } }

#define DSA_SECURITY_API_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_SECURITY_API_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Security\IDE\Library\SecurityApi\SecurityApiLib.inf// v:/intel/ServerSiliconPkg/Security/IDE/Include/Library/SecurityApiLib.h:46
typedef
EFI_STATUS
(EFIAPI *DSA_InitializeSecurityApiHobPreMem) (
   VOID
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_InitializeSecurityApiHobPreMem InitializeSecurityApiHobPreMem; // v:/intel/ServerSiliconPkg/Security/IDE/Include/Library/SecurityApiLib.h:46
//@AdditionalApiStruct
} DSA_SECURITY_API_LIB_API;

#endif // _DSA_SECURITY_API_LIB_API_H_
