/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_CPU_EARLY_DATA_LIB_API_H_
#define _DSA_CPU_EARLY_DATA_LIB_API_H_

#include <Base.h>
#include <Library/CpuEarlyDataLib.h>
//@AdditionalIncludes

#define DSA_CPU_EARLY_DATA_LIB_API_GUID { 0xAAEFE2E4, 0xF009, 0x4922, { 0x9F, 0x34, 0x78, 0x5A, 0x89, 0x42, 0x1D, 0x14 } }

#define DSA_CPU_EARLY_DATA_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_CPU_EARLY_DATA_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Cpu\Library\CpuEarlyDataLib\CpuEarlyDataLib.inf// v:/intel/ServerSiliconPkg/Cpu/Include/Library/CpuEarlyDataLib.h:72
typedef
CPU_VAR_DATA *
(EFIAPI *DSA_GetCpuVarData) (

  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_GetCpuVarData GetCpuVarData; // v:/intel/ServerSiliconPkg/Cpu/Include/Library/CpuEarlyDataLib.h:72
//@AdditionalApiStruct
} DSA_CPU_EARLY_DATA_LIB_API;

#endif // _DSA_CPU_EARLY_DATA_LIB_API_H_
