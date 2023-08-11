/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_TCO_LIB_API_H_
#define _DSA_TCO_LIB_API_H_

#include <Base.h>
#include <Library/TcoLib.h>
//@AdditionalIncludes

#define DSA_TCO_LIB_API_GUID { 0xF0E070A6, 0xD35A, 0x49D8, { 0x93, 0x23, 0x13, 0x87, 0x87, 0xC0, 0x5F, 0xD2 } }

#define DSA_TCO_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_TCO_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Smbus\Library\PeiDxeSmmTcoLib\PeiDxeSmmTcoLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/TcoLib.h:72
typedef
VOID
(EFIAPI *DSA_TcoHaltTimer) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Smbus\Library\PeiDxeSmmTcoLib\PeiDxeSmmTcoLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/TcoLib.h:53
typedef
VOID
(EFIAPI *DSA_TcoClearSecondToStatus) (
   VOID
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_TcoHaltTimer TcoHaltTimer; // v:/intel/ClientOneSiliconPkg/Include/Library/TcoLib.h:72
  DSA_TcoClearSecondToStatus TcoClearSecondToStatus; // v:/intel/ClientOneSiliconPkg/Include/Library/TcoLib.h:53
//@AdditionalApiStruct
} DSA_TCO_LIB_API;

#endif // _DSA_TCO_LIB_API_H_
