/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_PCH_POLICY_LIB_API_H_
#define _DSA_PCH_POLICY_LIB_API_H_

#include <Base.h>
#include <Library/PchPolicyLib.h>
//@AdditionalIncludes

#define DSA_PCH_POLICY_LIB_API_GUID { 0xFC89FDA0, 0x5DEC, 0x4C3D, { 0xBE, 0x95, 0xC6, 0x34, 0x1F, 0x79, 0x2A, 0x08 } }

#define DSA_PCH_POLICY_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_PCH_POLICY_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\Pch\Library\PeiPchPolicyLib\PeiPchPolicyLibVer3.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchPolicyLib.h:121
typedef
SATA_CONFIG *
(EFIAPI *DSA_GetPchSataConfig) (
  SI_POLICY_PPI * SiPolicy,
  UINT32 SataCtrlIndex
  );

// From: v:\intel\ClientOneSiliconPkg\Pch\Library\PeiPchPolicyLib\PeiPchPolicyLibVer3.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchPolicyLib.h:135
typedef
RST_CONFIG *
(EFIAPI *DSA_GetPchRstConfig) (
  SI_POLICY_PPI * SiPolicy,
  UINT32 SataCtrlIndex
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_GetPchSataConfig GetPchSataConfig; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchPolicyLib.h:121
  DSA_GetPchRstConfig GetPchRstConfig; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchPolicyLib.h:135
//@AdditionalApiStruct
} DSA_PCH_POLICY_LIB_API;

#endif // _DSA_PCH_POLICY_LIB_API_H_
