/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_USRA_LIB_API_H_
#define _DSA_USRA_LIB_API_H_

#include <Base.h>
#include <Library/UsraAccessApi.h>
//@AdditionalIncludes

#define DSA_USRA_LIB_API_GUID { 0xE3BB12C5, 0x1115, 0x4BE8, { 0x9B, 0xAA, 0xA3, 0x2D, 0x8A, 0x3F, 0x6B, 0xE3 } }

#define DSA_USRA_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_USRA_LIB_API_VERSION_1  1

// From: v:\intel\CpRcPkg\Library\DxeUsraLib\DxeUsraLib.inf// v:/intel/CpRcPkg/Include/Library/UsraAccessApi.h:67
typedef
RETURN_STATUS
(EFIAPI *DSA_RegisterWrite) (
  USRA_ADDRESS * Address,
  VOID * Buffer
  );

// From: v:\intel\CpRcPkg\Library\DxeUsraLib\DxeUsraLib.inf// v:/intel/CpRcPkg/Include/Library/UsraAccessApi.h:51
typedef
RETURN_STATUS
(EFIAPI *DSA_RegisterRead) (
  USRA_ADDRESS * Address,
  VOID * Buffer
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_RegisterWrite RegisterWrite; // v:/intel/CpRcPkg/Include/Library/UsraAccessApi.h:67
  DSA_RegisterRead RegisterRead; // v:/intel/CpRcPkg/Include/Library/UsraAccessApi.h:51
//@AdditionalApiStruct
} DSA_USRA_LIB_API;

#endif // _DSA_USRA_LIB_API_H_
