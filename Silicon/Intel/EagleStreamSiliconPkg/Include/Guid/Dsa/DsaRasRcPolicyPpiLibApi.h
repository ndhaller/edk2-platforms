/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_RAS_RC_POLICY_PPI_LIB_API_H_
#define _DSA_RAS_RC_POLICY_PPI_LIB_API_H_

#include <Base.h>
#include <Library/RasRcPolicyPpiLib.h>
//@AdditionalIncludes

#define DSA_RAS_RC_POLICY_PPI_LIB_API_GUID { 0x85D15AC8, 0x50D7, 0x44E4, { 0x86, 0x09, 0xF8, 0x5A, 0xC1, 0xB0, 0xF6, 0xFF } }

#define DSA_RAS_RC_POLICY_PPI_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_RAS_RC_POLICY_PPI_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Ras\Library\PeiRasRcPolicyPpiLib\PeiRasRcPolicyPpiLib.inf// v:/intel/ServerSiliconPkg/Include/Library/RasRcPolicyPpiLib.h:47
typedef
EFI_STATUS
(EFIAPI *DSA_SetRasRcPolicyPpiDefaults) (
  RAS_RC_POLICY_PPI * RasRcPolicyPpi
  );

// From: v:\intel\ServerSiliconPkg\Ras\Library\PeiRasRcPolicyPpiLib\PeiRasRcPolicyPpiLib.inf// v:/intel/ServerSiliconPkg/Include/Library/RasRcPolicyPpiLib.h:66
typedef
EFI_STATUS
(EFIAPI *DSA_InstallRasRcPolicyPpi) (
  RAS_RC_POLICY_PPI * RasRcPolicyPpi
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_SetRasRcPolicyPpiDefaults SetRasRcPolicyPpiDefaults; // v:/intel/ServerSiliconPkg/Include/Library/RasRcPolicyPpiLib.h:47
  DSA_InstallRasRcPolicyPpi InstallRasRcPolicyPpi; // v:/intel/ServerSiliconPkg/Include/Library/RasRcPolicyPpiLib.h:66
//@AdditionalApiStruct
} DSA_RAS_RC_POLICY_PPI_LIB_API;

#endif // _DSA_RAS_RC_POLICY_PPI_LIB_API_H_
