/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_PEI_ME_LIB_API_H_
#define _DSA_PEI_ME_LIB_API_H_

#include <Base.h>
#include <Library/PeiMeLib.h>
//@AdditionalIncludes

#define DSA_PEI_ME_LIB_API_GUID { 0x4E05AA41, 0x0DBB, 0x4243, { 0x9B, 0x00, 0x17, 0x21, 0x91, 0xB5, 0x3D, 0x26 } }

#define DSA_PEI_ME_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_PEI_ME_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Me\Library\PeiMeLib\PeiMeLibVer3.inf// v:/intel/ClientOneSiliconPkg/Include/Library/PeiMeLib.h:132
typedef
EFI_STATUS
(EFIAPI *DSA_PeiHeciGetFwFeatureStateMsg) (
  MEFWCAPS_SKU * RuleData
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Me\Library\PeiMeLib\PeiMeLibVer3.inf// v:/intel/ClientOneSiliconPkg/Include/Library/PeiMeLib.h:93
typedef
EFI_STATUS
(EFIAPI *DSA_PeiHeciGetFwCapsSkuMsg) (
  MEFWCAPS_SKU * RuleData
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_PeiHeciGetFwFeatureStateMsg PeiHeciGetFwFeatureStateMsg; // v:/intel/ClientOneSiliconPkg/Include/Library/PeiMeLib.h:132
  DSA_PeiHeciGetFwCapsSkuMsg PeiHeciGetFwCapsSkuMsg; // v:/intel/ClientOneSiliconPkg/Include/Library/PeiMeLib.h:93
//@AdditionalApiStruct
} DSA_PEI_ME_LIB_API;

#endif // _DSA_PEI_ME_LIB_API_H_
