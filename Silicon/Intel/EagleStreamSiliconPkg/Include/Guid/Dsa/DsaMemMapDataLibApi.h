/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_MEM_MAP_DATA_LIB_API_H_
#define _DSA_MEM_MAP_DATA_LIB_API_H_

#include <Base.h>
#include <Library/MemMapDataLib.h>
//@AdditionalIncludes

#define DSA_MEM_MAP_DATA_LIB_API_GUID { 0x05252201, 0xED94, 0x4499, { 0x83, 0xFD, 0x5F, 0xA3, 0x85, 0x93, 0xA0, 0xCE } }

#define DSA_MEM_MAP_DATA_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_MEM_MAP_DATA_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Library\MemMapDataLib\MemMapDataLib.inf// v:/intel/CpRcPkg/Include/Library/MemMapDataLib.h:61
typedef
SYSTEM_MEMORY_MAP_HOB *
(EFIAPI *DSA_GetSystemMemoryMapData) (
   VOID
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_GetSystemMemoryMapData GetSystemMemoryMapData; // v:/intel/CpRcPkg/Include/Library/MemMapDataLib.h:61
//@AdditionalApiStruct
} DSA_MEM_MAP_DATA_LIB_API;

#endif // _DSA_MEM_MAP_DATA_LIB_API_H_
