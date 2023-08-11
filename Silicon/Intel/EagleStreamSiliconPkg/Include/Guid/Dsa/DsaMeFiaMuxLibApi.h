/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_ME_FIA_MUX_LIB_API_H_
#define _DSA_ME_FIA_MUX_LIB_API_H_

#include <Base.h>
#include <Library/MeFiaMuxLib.h>
//@AdditionalIncludes

#define DSA_ME_FIA_MUX_LIB_API_GUID { 0x27177C8C, 0x47D1, 0x425B, { 0x90, 0xE5, 0x99, 0xDE, 0x59, 0xF7, 0x2D, 0x4A } }

#define DSA_ME_FIA_MUX_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_ME_FIA_MUX_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Sps\Library\MeFiaMuxLib\MeFiaMuxLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/MeFiaMuxLib.h:148
typedef
UINT8
(EFIAPI *DSA_GetHsioLanes) (
  UINT8 * LaneGapLow,
  UINT8 * LaneGapHi
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_GetHsioLanes GetHsioLanes; // v:/intel/ClientOneSiliconPkg/Include/Library/MeFiaMuxLib.h:148
//@AdditionalApiStruct
} DSA_ME_FIA_MUX_LIB_API;

#endif // _DSA_ME_FIA_MUX_LIB_API_H_
