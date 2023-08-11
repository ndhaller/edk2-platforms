/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_GBE_LIB_API_H_
#define _DSA_GBE_LIB_API_H_

#include <Base.h>
#include <Library/GbeLib.h>
//@AdditionalIncludes

#define DSA_GBE_LIB_API_GUID { 0x02A8B7FE, 0x2DDF, 0x4E9E, { 0xA5, 0x7E, 0x21, 0x38, 0x62, 0x94, 0xC8, 0xBF } }

#define DSA_GBE_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_GBE_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Gbe\Library\PeiDxeSmmGbeLib\PeiDxeSmmGbeLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/GbeLib.h:46
typedef
BOOLEAN
(EFIAPI *DSA_IsGbeRegionValid) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Gbe\Library\PeiDxeSmmGbeLib\PeiDxeSmmGbeLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/GbeLib.h:57
typedef
BOOLEAN
(EFIAPI *DSA_IsGbePresent) (
   VOID
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_IsGbeRegionValid IsGbeRegionValid; // v:/intel/ClientOneSiliconPkg/Include/Library/GbeLib.h:46
  DSA_IsGbePresent IsGbePresent; // v:/intel/ClientOneSiliconPkg/Include/Library/GbeLib.h:57
//@AdditionalApiStruct
} DSA_GBE_LIB_API;

#endif // _DSA_GBE_LIB_API_H_
