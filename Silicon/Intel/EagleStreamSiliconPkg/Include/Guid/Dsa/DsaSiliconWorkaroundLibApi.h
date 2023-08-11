/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_SILICON_WORKAROUND_LIB_API_H_
#define _DSA_SILICON_WORKAROUND_LIB_API_H_

#include <Base.h>
#include <Library/SiliconWorkaroundLib.h>
//@AdditionalIncludes

#define DSA_SILICON_WORKAROUND_LIB_API_GUID { 0xBCB9AED1, 0x93D9, 0x4198, { 0xB9, 0xCE, 0x12, 0x6C, 0xC3, 0xA5, 0xE4, 0x70 } }

#define DSA_SILICON_WORKAROUND_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_SILICON_WORKAROUND_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Library\SiliconWorkaroundLibSpr\SiliconWorkaroundLib.inf// v:/intel/CpRcPkg/Include/Library/SiliconWorkaroundLib.h:56
typedef
BOOLEAN
(EFIAPI *DSA_IsSiliconWorkaroundEnabled) (
  CONST CHAR8 * WorkaroundName
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_IsSiliconWorkaroundEnabled IsSiliconWorkaroundEnabled; // v:/intel/CpRcPkg/Include/Library/SiliconWorkaroundLib.h:56
//@AdditionalApiStruct
} DSA_SILICON_WORKAROUND_LIB_API;

#endif // _DSA_SILICON_WORKAROUND_LIB_API_H_
