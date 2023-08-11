/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_CPU_PRE_MEM_POLICY_LIB_API_H_
#define _DSA_CPU_PRE_MEM_POLICY_LIB_API_H_

#include <Base.h>
#include <Library/CpuPreMemPolicyLib.h>
//@AdditionalIncludes

#define DSA_CPU_PRE_MEM_POLICY_LIB_API_GUID { 0xE33254AA, 0x2E79, 0x4E6C, { 0x82, 0xB5, 0x1D, 0xBF, 0xC5, 0x69, 0xBD, 0x2C } }

#define DSA_CPU_PRE_MEM_POLICY_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_CPU_PRE_MEM_POLICY_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Cpu\Library\CpuPreMemPolicyLib\CpuPreMemPolicyLib.inf// v:/intel/ServerSiliconPkg/Cpu/Include/Library/CpuPreMemPolicyLib.h:117
typedef
UINT8
(EFIAPI *DSA_GetCpuPkgcStatePolicy) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Cpu\Library\CpuPreMemPolicyLib\CpuPreMemPolicyLib.inf// v:/intel/ServerSiliconPkg/Cpu/Include/Library/CpuPreMemPolicyLib.h:106
typedef
CPU_PRE_MEM_POLICY *
(EFIAPI *DSA_GetCpuPreMemPolicy) (

  );

// From: v:\intel\ServerSiliconPkg\Cpu\Library\CpuPreMemPolicyLib\CpuPreMemPolicyLib.inf// v:/intel/ServerSiliconPkg/Cpu/Include/Library/CpuPreMemPolicyLib.h:91
typedef
EFI_STATUS
(EFIAPI *DSA_SetCpuPreMemPolicy) (
  VOID * CpuPolicy,
  UINTN DataSize
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_GetCpuPkgcStatePolicy GetCpuPkgcStatePolicy; // v:/intel/ServerSiliconPkg/Cpu/Include/Library/CpuPreMemPolicyLib.h:117
  DSA_GetCpuPreMemPolicy GetCpuPreMemPolicy; // v:/intel/ServerSiliconPkg/Cpu/Include/Library/CpuPreMemPolicyLib.h:106
  DSA_SetCpuPreMemPolicy SetCpuPreMemPolicy; // v:/intel/ServerSiliconPkg/Cpu/Include/Library/CpuPreMemPolicyLib.h:91
//@AdditionalApiStruct
} DSA_CPU_PRE_MEM_POLICY_LIB_API;

#endif // _DSA_CPU_PRE_MEM_POLICY_LIB_API_H_
