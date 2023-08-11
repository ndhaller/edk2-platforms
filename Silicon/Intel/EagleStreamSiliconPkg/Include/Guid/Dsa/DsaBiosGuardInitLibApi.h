/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_BIOS_GUARD_INIT_LIB_API_H_
#define _DSA_BIOS_GUARD_INIT_LIB_API_H_

#include <Base.h>
#include <Library/BiosGuardInitLib/BiosGuardInit.h>
//@AdditionalIncludes

#define DSA_BIOS_GUARD_INIT_LIB_API_GUID { 0x878EF6B3, 0xC381, 0x43CE, { 0x83, 0xF5, 0xB2, 0x16, 0x0B, 0x2B, 0xCA, 0x7A } }

#define DSA_BIOS_GUARD_INIT_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_BIOS_GUARD_INIT_LIB_API_VERSION_1  1

// From: v:\intel\ServerSecurityPkg\Library\BiosGuardInitLib\BiosGuardInit.inf// v:/intel/ServerSecurityPkg/Library/BiosGuardInitLib/BiosGuardInit.h:90
typedef
VOID
(EFIAPI *DSA_BiosGuardInit) (
  EFI_PEI_SERVICES ** PeiServices,
  SYSTEM_CONFIGURATION * TotalSystemConfigurationPtr
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_BiosGuardInit BiosGuardInit; // v:/intel/ServerSecurityPkg/Library/BiosGuardInitLib/BiosGuardInit.h:90
//@AdditionalApiStruct
} DSA_BIOS_GUARD_INIT_LIB_API;

#endif // _DSA_BIOS_GUARD_INIT_LIB_API_H_
