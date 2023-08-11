/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_PCH_RTC_LIB_API_H_
#define _DSA_PCH_RTC_LIB_API_H_

#include <Base.h>
#include <Library/PchRtcLib.h>
//@AdditionalIncludes

#define DSA_PCH_RTC_LIB_API_GUID { 0xEE49AF23, 0xCDC5, 0x48DD, { 0xB1, 0xA4, 0xFB, 0xAC, 0xF9, 0xD9, 0xCD, 0x04 } }

#define DSA_PCH_RTC_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_PCH_RTC_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\Pch\LibraryPrivate\PeiDxeSmmPchRtcLib\PeiDxeSmmPchRtcLib.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchRtcLib.h:59
typedef
UINT8
(EFIAPI *DSA_ReadNmiEn) (
   VOID
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_ReadNmiEn ReadNmiEn; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchRtcLib.h:59
//@AdditionalApiStruct
} DSA_PCH_RTC_LIB_API;

#endif // _DSA_PCH_RTC_LIB_API_H_
