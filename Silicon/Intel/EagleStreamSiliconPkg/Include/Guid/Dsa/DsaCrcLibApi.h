/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_CRC_LIB_API_H_
#define _DSA_CRC_LIB_API_H_

#include <Base.h>
#include <Library/CrcLib.h>
//@AdditionalIncludes

#define DSA_CRC_LIB_API_GUID { 0xAD8C7C4A, 0xA9E2, 0x4E87, { 0xBC, 0x4B, 0x23, 0xE5, 0x9B, 0xFC, 0xE5, 0x2D } }

#define DSA_CRC_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_CRC_LIB_API_VERSION_1  1

// From: v:\intel\CpRcPkg\Library\BaseCrcLib\BaseCrcLib.inf// v:/intel/CpRcPkg/Include/Library/CrcLib.h:55
typedef
EFI_STATUS
(EFIAPI *DSA_CalculateCrc16) (
  VOID * Data,
  UINTN DataSize,
  UINT16 * CrcOut
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_CalculateCrc16 CalculateCrc16; // v:/intel/CpRcPkg/Include/Library/CrcLib.h:55
//@AdditionalApiStruct
} DSA_CRC_LIB_API;

#endif // _DSA_CRC_LIB_API_H_
