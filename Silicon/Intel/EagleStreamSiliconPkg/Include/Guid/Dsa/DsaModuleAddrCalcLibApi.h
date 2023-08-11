/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_MODULE_ADDR_CALC_LIB_API_H_
#define _DSA_MODULE_ADDR_CALC_LIB_API_H_

#include <Base.h>
#include <Library/ModuleAddrCalcLib.h>
//@AdditionalIncludes

#define DSA_MODULE_ADDR_CALC_LIB_API_GUID { 0xB62835AB, 0x9EC8, 0x4AE6, { 0x97, 0xF2, 0x35, 0xCD, 0x12, 0xB4, 0x3C, 0xB6 } }

#define DSA_MODULE_ADDR_CALC_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_MODULE_ADDR_CALC_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\Library\ModuleAddrCalcLib\ModuleAddrCalcLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/ModuleAddrCalcLib.h:26
typedef
UINTN
(EFIAPI *DSA_ModuleOffsetCalc) (
  EFI_GUID * CallerGuid,
  UINTN FlashFuncAddr
  );

// From: v:\intel\ClientOneSiliconPkg\Library\ModuleAddrCalcLib\ModuleAddrCalcLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/ModuleAddrCalcLib.h:49
typedef
EFI_STATUS
(EFIAPI *DSA_ModuleOffsetCalculator) (
  EFI_PEI_FILE_HANDLE FileHandle,
  EFI_GUID * CallerGuid,
  UINTN * ModuleOffset,
  BOOLEAN * ModulePositive
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_ModuleOffsetCalc ModuleOffsetCalc; // v:/intel/ClientOneSiliconPkg/Include/Library/ModuleAddrCalcLib.h:26
  DSA_ModuleOffsetCalculator ModuleOffsetCalculator; // v:/intel/ClientOneSiliconPkg/Include/Library/ModuleAddrCalcLib.h:49
//@AdditionalApiStruct
} DSA_MODULE_ADDR_CALC_LIB_API;

#endif // _DSA_MODULE_ADDR_CALC_LIB_API_H_
