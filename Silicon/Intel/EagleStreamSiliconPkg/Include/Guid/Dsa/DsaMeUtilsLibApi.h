/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_ME_UTILS_LIB_API_H_
#define _DSA_ME_UTILS_LIB_API_H_

#include <Base.h>
#include <Library/MeUtilsLib.h>
//@AdditionalIncludes

#define DSA_ME_UTILS_LIB_API_GUID { 0xBDFB6E4A, 0x0F2C, 0x420E, { 0xB2, 0x1C, 0xB1, 0x11, 0x65, 0xE3, 0x3F, 0xB5 } }

#define DSA_ME_UTILS_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_ME_UTILS_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Me\Library\PeiDxeSmmMeUtilsLib\MeUtilsLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/MeUtilsLib.h:213
typedef
EFI_STATUS
(EFIAPI *DSA_MeClientHfsFwSkuToMbpSku) (
  UINT8 * MeSku
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Me\Library\PeiDxeSmmMeUtilsLib\MeUtilsLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/MeUtilsLib.h:198
typedef
EFI_STATUS
(EFIAPI *DSA_MeGetFirmwareSku) (
  UINT8 * MeSku
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Me\Library\PeiDxeSmmMeUtilsLib\MeUtilsLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/MeUtilsLib.h:162
typedef
BOOLEAN
(EFIAPI *DSA_MeSkuIsClient) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Me\Library\PeiDxeSmmMeUtilsLib\MeUtilsLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/MeUtilsLib.h:235
typedef
BOOLEAN
(EFIAPI *DSA_MeClientIsCorporate) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Me\Library\PeiDxeSmmMeUtilsLib\MeUtilsLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/MeUtilsLib.h:224
typedef
BOOLEAN
(EFIAPI *DSA_MeClientIsReady) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Me\Library\PeiDxeSmmMeUtilsLib\MeUtilsLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/MeUtilsLib.h:290
typedef
BOOLEAN
(EFIAPI *DSA_MeSpsIsNm) (
   VOID
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_MeClientHfsFwSkuToMbpSku MeClientHfsFwSkuToMbpSku; // v:/intel/ClientOneSiliconPkg/Include/Library/MeUtilsLib.h:213
  DSA_MeGetFirmwareSku MeGetFirmwareSku; // v:/intel/ClientOneSiliconPkg/Include/Library/MeUtilsLib.h:198
  DSA_MeSkuIsClient MeSkuIsClient; // v:/intel/ClientOneSiliconPkg/Include/Library/MeUtilsLib.h:162
  DSA_MeClientIsCorporate MeClientIsCorporate; // v:/intel/ClientOneSiliconPkg/Include/Library/MeUtilsLib.h:235
  DSA_MeClientIsReady MeClientIsReady; // v:/intel/ClientOneSiliconPkg/Include/Library/MeUtilsLib.h:224
  DSA_MeSpsIsNm MeSpsIsNm; // v:/intel/ClientOneSiliconPkg/Include/Library/MeUtilsLib.h:290
//@AdditionalApiStruct
} DSA_ME_UTILS_LIB_API;

#endif // _DSA_ME_UTILS_LIB_API_H_
