/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_PCH_CYCLE_DECODING_LIB_API_H_
#define _DSA_PCH_CYCLE_DECODING_LIB_API_H_

#include <Base.h>
#include <Library/PchCycleDecodingLib.h>
//@AdditionalIncludes

#define DSA_PCH_CYCLE_DECODING_LIB_API_GUID { 0xB006FEB7, 0xF7B8, 0x4076, { 0x8E, 0x12, 0x71, 0x82, 0x08, 0x9B, 0xAF, 0x0A } }

#define DSA_PCH_CYCLE_DECODING_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_PCH_CYCLE_DECODING_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\Pch\Library\PeiDxeSmmPchCycleDecodingLib\PeiDxeSmmPchCycleDecodingLib.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchCycleDecodingLib.h:421
typedef
EFI_STATUS
(EFIAPI *DSA_PchHpetBaseGet) (
  UINT32 * HpetBase
  );

// From: v:\intel\ClientOneSiliconPkg\Pch\Library\PeiDxeSmmPchCycleDecodingLib\PeiDxeSmmPchCycleDecodingLib.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchCycleDecodingLib.h:119
typedef
EFI_STATUS
(EFIAPI *DSA_PchLpcGenIoRangeSet) (
  UINT16 Address,
  UINTN Length
  );

// From: v:\intel\ClientOneSiliconPkg\Pch\Library\PeiDxeSmmPchCycleDecodingLib\PeiDxeSmmPchCycleDecodingLib.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchCycleDecodingLib.h:322
typedef
EFI_STATUS
(EFIAPI *DSA_PchLpcIoDecodeRangesSet) (
  UINT16 LpcIoDecodeRanges
  );

// From: v:\intel\ClientOneSiliconPkg\Pch\Library\PeiDxeSmmPchCycleDecodingLib\PeiDxeSmmPchCycleDecodingLib.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchCycleDecodingLib.h:339
typedef
EFI_STATUS
(EFIAPI *DSA_PchLpcIoEnableDecodingSet) (
  UINT16 LpcIoEnableDecoding
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_PchHpetBaseGet PchHpetBaseGet; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchCycleDecodingLib.h:421
  DSA_PchLpcGenIoRangeSet PchLpcGenIoRangeSet; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchCycleDecodingLib.h:119
  DSA_PchLpcIoDecodeRangesSet PchLpcIoDecodeRangesSet; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchCycleDecodingLib.h:322
  DSA_PchLpcIoEnableDecodingSet PchLpcIoEnableDecodingSet; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchCycleDecodingLib.h:339
//@AdditionalApiStruct
} DSA_PCH_CYCLE_DECODING_LIB_API;

#endif // _DSA_PCH_CYCLE_DECODING_LIB_API_H_
