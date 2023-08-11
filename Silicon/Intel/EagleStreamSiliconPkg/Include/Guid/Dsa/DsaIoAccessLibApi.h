/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_IO_ACCESS_LIB_API_H_
#define _DSA_IO_ACCESS_LIB_API_H_

#include <Base.h>
#include <Library/IoAccessLib.h>
//@AdditionalIncludes

#define DSA_IO_ACCESS_LIB_API_GUID { 0xACD48A98, 0x6058, 0x4E07, { 0x9D, 0xD0, 0x3B, 0x6C, 0x3A, 0xCE, 0x78, 0xBB } }

#define DSA_IO_ACCESS_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_IO_ACCESS_LIB_API_VERSION_1  1

// From: v:\intel\CpRcPkg\Library\BaseIoAccessLib\BaseIoAccessLib10nm.inf// v:/intel/CpRcPkg/Include/Library/IoAccessLib.h:133
typedef
VOID
(EFIAPI *DSA_OutPort8) (
  UINT16 IoAddress,
  UINT8 Data
  );

// From: v:\intel\CpRcPkg\Library\BaseIoAccessLib\BaseIoAccessLib10nm.inf// v:/intel/CpRcPkg/Include/Library/IoAccessLib.h:89
typedef
UINT8
(EFIAPI *DSA_InPort8) (
  UINT16 IoAddress
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_OutPort8 OutPort8; // v:/intel/CpRcPkg/Include/Library/IoAccessLib.h:133
  DSA_InPort8 InPort8; // v:/intel/CpRcPkg/Include/Library/IoAccessLib.h:89
//@AdditionalApiStruct
} DSA_IO_ACCESS_LIB_API;

#endif // _DSA_IO_ACCESS_LIB_API_H_
