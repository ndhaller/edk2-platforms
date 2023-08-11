/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_BASE_MEMORY_SERVICES_LIB_API_H_
#define _DSA_BASE_MEMORY_SERVICES_LIB_API_H_

#include <Base.h>
#include <Library/MemoryServicesLib.h>
//@AdditionalIncludes

#define DSA_BASE_MEMORY_SERVICES_LIB_API_GUID { 0xF8D1366C, 0xF2D8, 0x470E, { 0xB9, 0x04, 0x23, 0xD7, 0xDE, 0xC9, 0xC0, 0x92 } }

#define DSA_BASE_MEMORY_SERVICES_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_BASE_MEMORY_SERVICES_LIB_API_VERSION_1  1

// From: v:\intel\CpRcPkg\Library\BaseMemoryServicesLib\BaseMemoryServicesLib.inf// v:/intel/CpRcPkg/Include/Library/MemoryServicesLib.h:2710
typedef
SUB_BOOT_MODE
(EFIAPI *DSA_GetSubBootMode) (
   VOID
  );

// From: v:\intel\CpRcPkg\Library\BaseMemoryServicesLib\BaseMemoryServicesLib.inf// v:/intel/CpRcPkg/Include/Library/MemoryServicesLib.h:805
typedef
VOID
(EFIAPI *DSA_SetWipeMemory) (
   VOID
  );

// From: v:\intel\CpRcPkg\Library\BaseMemoryServicesLib\BaseMemoryServicesLib.inf// v:/intel/CpRcPkg/Include/Library/MemoryServicesLib.h:1643
typedef
BOOLEAN
(EFIAPI *DSA_IsDcpmmEnabledSocket) (
  UINT8 Socket
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_GetSubBootMode GetSubBootMode; // v:/intel/CpRcPkg/Include/Library/MemoryServicesLib.h:2710
  DSA_SetWipeMemory SetWipeMemory; // v:/intel/CpRcPkg/Include/Library/MemoryServicesLib.h:805
  DSA_IsDcpmmEnabledSocket IsDcpmmEnabledSocket; // v:/intel/CpRcPkg/Include/Library/MemoryServicesLib.h:1643
//@AdditionalApiStruct
} DSA_BASE_MEMORY_SERVICES_LIB_API;

#endif // _DSA_BASE_MEMORY_SERVICES_LIB_API_H_
