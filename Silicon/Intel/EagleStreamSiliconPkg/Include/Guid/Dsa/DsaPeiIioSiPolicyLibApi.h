/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_PEI_IIO_SI_POLICY_LIB_API_H_
#define _DSA_PEI_IIO_SI_POLICY_LIB_API_H_

#include <Base.h>
#include <Library/PeiIioSiPolicyLib.h>
//@AdditionalIncludes

#define DSA_PEI_IIO_SI_POLICY_LIB_API_GUID { 0x86099480, 0x8D4C, 0x4A5E, { 0x9F, 0x11, 0x13, 0xED, 0xB4, 0x0D, 0x07, 0x2E } }

#define DSA_PEI_IIO_SI_POLICY_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_PEI_IIO_SI_POLICY_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Library\PeiIioSiPolicyLib\PeiIioSiPolicyLibSpr.inf// v:/intel/ServerSiliconPkg/Include/Library/PeiIioSiPolicyLib.h:40
typedef
EFI_STATUS
(EFIAPI *DSA_CreateDefaultIioSiPolicy) (
   VOID
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_CreateDefaultIioSiPolicy CreateDefaultIioSiPolicy; // v:/intel/ServerSiliconPkg/Include/Library/PeiIioSiPolicyLib.h:40
//@AdditionalApiStruct
} DSA_PEI_IIO_SI_POLICY_LIB_API;

#endif // _DSA_PEI_IIO_SI_POLICY_LIB_API_H_
