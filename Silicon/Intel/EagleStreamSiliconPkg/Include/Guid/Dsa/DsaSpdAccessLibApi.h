/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_SPD_ACCESS_LIB_API_H_
#define _DSA_SPD_ACCESS_LIB_API_H_

#include <Base.h>
#include <Library/SpdAccessLib.h>
//@AdditionalIncludes

#define DSA_SPD_ACCESS_LIB_API_GUID { 0xC7161E5D, 0x31E1, 0x4D4D, { 0x94, 0x05, 0x51, 0x0E, 0xEB, 0x1C, 0x8F, 0x26 } }

#define DSA_SPD_ACCESS_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_SPD_ACCESS_LIB_API_VERSION_1  1

// From: v:\intel\CpRcPkg\Library\SpdAccessLib\SpdAccessLibDxe.inf// v:/intel/CpRcPkg/Include/Library/SpdAccessLib.h:79
typedef
EFI_STATUS
(EFIAPI *DSA_SpdReadByte) (
  UINT8 Socket,
  UINT8 Chan,
  UINT8 Dimm,
  UINT16 ByteOffset,
  UINT8 * Data
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_SpdReadByte SpdReadByte; // v:/intel/CpRcPkg/Include/Library/SpdAccessLib.h:79
//@AdditionalApiStruct
} DSA_SPD_ACCESS_LIB_API;

#endif // _DSA_SPD_ACCESS_LIB_API_H_
