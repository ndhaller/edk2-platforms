/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_MEM_CMOS_LIB_API_H_
#define _DSA_MEM_CMOS_LIB_API_H_

#include <Base.h>
#include <Library/MemCmosLib.h>
//@AdditionalIncludes

#define DSA_MEM_CMOS_LIB_API_GUID { 0x5AA21D9B, 0x649B, 0x4151, { 0x9D, 0x59, 0xEE, 0x0A, 0xB5, 0xAF, 0x36, 0x56 } }

#define DSA_MEM_CMOS_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_MEM_CMOS_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Mem\Library\MemCmosLib\MemCmosLib.inf// v:/intel/CpRcPkg/Include/Library/MemCmosLib.h:71
typedef
VOID
(EFIAPI *DSA_SetColdBootSlowRequired) (
  BOOLEAN ColdBootSlowRequired
  );

// From: v:\intel\ServerSiliconPkg\Mem\Library\MemCmosLib\MemCmosLib.inf// v:/intel/CpRcPkg/Include/Library/MemCmosLib.h:249
typedef
VOID
(EFIAPI *DSA_SetMemPrefetchFailFlagCmos) (
  UINT8 PrefetchFlag
  );

// From: v:\intel\ServerSiliconPkg\Mem\Library\MemCmosLib\MemCmosLib.inf// v:/intel/CpRcPkg/Include/Library/MemCmosLib.h:198
typedef
VOID
(EFIAPI *DSA_SetMemUmaDowngradeCmos) (
  UINT8 Value
  );

// From: v:\intel\ServerSiliconPkg\Mem\Library\MemCmosLib\MemCmosLib.inf// v:/intel/CpRcPkg/Include/Library/MemCmosLib.h:224
typedef
VOID
(EFIAPI *DSA_SetMemSncFailFlagCmos) (
  UINT8 SncFlag
  );

// From: v:\intel\ServerSiliconPkg\Mem\Library\MemCmosLib\MemCmosLib.inf// v:/intel/CpRcPkg/Include/Library/MemCmosLib.h:111
typedef
VOID
(EFIAPI *DSA_SetCriticalRetryNumber) (
  UINT8 Retry
  );

// From: v:\intel\ServerSiliconPkg\Mem\Library\MemCmosLib\MemCmosLib.inf// v:/intel/CpRcPkg/Include/Library/MemCmosLib.h:275
typedef
VOID
(EFIAPI *DSA_SetMemDcpmmTrainingFailCmos) (
  UINT8 DdrtTrainFail
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_SetColdBootSlowRequired SetColdBootSlowRequired; // v:/intel/CpRcPkg/Include/Library/MemCmosLib.h:71
  DSA_SetMemPrefetchFailFlagCmos SetMemPrefetchFailFlagCmos; // v:/intel/CpRcPkg/Include/Library/MemCmosLib.h:249
  DSA_SetMemUmaDowngradeCmos SetMemUmaDowngradeCmos; // v:/intel/CpRcPkg/Include/Library/MemCmosLib.h:198
  DSA_SetMemSncFailFlagCmos SetMemSncFailFlagCmos; // v:/intel/CpRcPkg/Include/Library/MemCmosLib.h:224
  DSA_SetCriticalRetryNumber SetCriticalRetryNumber; // v:/intel/CpRcPkg/Include/Library/MemCmosLib.h:111
  DSA_SetMemDcpmmTrainingFailCmos SetMemDcpmmTrainingFailCmos; // v:/intel/CpRcPkg/Include/Library/MemCmosLib.h:275
//@AdditionalApiStruct
} DSA_MEM_CMOS_LIB_API;

#endif // _DSA_MEM_CMOS_LIB_API_H_
