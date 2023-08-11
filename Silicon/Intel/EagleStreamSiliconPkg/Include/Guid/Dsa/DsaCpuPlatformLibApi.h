/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_CPU_PLATFORM_LIB_API_H_
#define _DSA_CPU_PLATFORM_LIB_API_H_

#include <Base.h>
#include <Library/CpuPlatformLib.h>
//@AdditionalIncludes

#define DSA_CPU_PLATFORM_LIB_API_GUID { 0x474B9B9C, 0x6DF4, 0x4667, { 0x82, 0xBB, 0xF1, 0xA7, 0x7E, 0x26, 0x2D, 0xD7 } }

#define DSA_CPU_PLATFORM_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_CPU_PLATFORM_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Cpu\Library\CpuPlatformLib\CpuPlatformLib.inf// v:/intel/ClientOneSiliconPkg/Cpu/Include/Library/CpuPlatformLib.h:223
typedef
BOOLEAN
(EFIAPI *DSA_IsBiosGuardEnabled) (
   VOID
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_IsBiosGuardEnabled IsBiosGuardEnabled; // v:/intel/ClientOneSiliconPkg/Cpu/Include/Library/CpuPlatformLib.h:223
//@AdditionalApiStruct
} DSA_CPU_PLATFORM_LIB_API;

#endif // _DSA_CPU_PLATFORM_LIB_API_H_
