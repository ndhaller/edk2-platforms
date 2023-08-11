/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_CPU_CONFIG_LIB_API_H_
#define _DSA_CPU_CONFIG_LIB_API_H_

#include <Base.h>
#include <Library/CpuConfigLib.h>
//@AdditionalIncludes

#define DSA_CPU_CONFIG_LIB_API_GUID { 0xDC4BB904, 0x6FF0, 0x47BA, { 0x8C, 0x08, 0xEF, 0x20, 0xBE, 0xF5, 0x0A, 0x77 } }

#define DSA_CPU_CONFIG_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_CPU_CONFIG_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Cpu\Library\CpuConfigLib\CpuConfigLib.inf// v:/intel/ServerSiliconPkg/Cpu/Include/Library/CpuConfigLib.h:249
typedef
VOID
(EFIAPI *DSA_GetProcessorLocation2) (
  UINTN ProcessorNumber,
  UINT32 * PackageNumber,
  UINT32 * DieNumber,
  UINT32 * TileNumber,
  UINT32 * ModuleNumber,
  UINT32 * CoreNumber,
  UINT32 * ThreadNumber
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_GetProcessorLocation2 GetProcessorLocation2; // v:/intel/ServerSiliconPkg/Cpu/Include/Library/CpuConfigLib.h:249
//@AdditionalApiStruct
} DSA_CPU_CONFIG_LIB_API;

#endif // _DSA_CPU_CONFIG_LIB_API_H_
