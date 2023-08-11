/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_PMEM_MISC_LIB_API_H_
#define _DSA_PMEM_MISC_LIB_API_H_

#include <Base.h>
#include <Library/PmemMiscLib.h>
//@AdditionalIncludes

#define DSA_PMEM_MISC_LIB_API_GUID { 0x7813E0DC, 0x8C78, 0x48E7, { 0x80, 0x62, 0xB3, 0x40, 0x8C, 0xB8, 0x86, 0x8E } }

#define DSA_PMEM_MISC_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_PMEM_MISC_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Mem\Library\PmemMiscLib\PmemMiscLib10nmWave3.inf// v:/intel/ServerSiliconPkg/Include/Library/PmemMiscLib.h:359
typedef
UINT8
(EFIAPI *DSA_GetAcpiDieCount) (
  UINT8 SocketId
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_GetAcpiDieCount GetAcpiDieCount; // v:/intel/ServerSiliconPkg/Include/Library/PmemMiscLib.h:359
//@AdditionalApiStruct
} DSA_PMEM_MISC_LIB_API;

#endif // _DSA_PMEM_MISC_LIB_API_H_
