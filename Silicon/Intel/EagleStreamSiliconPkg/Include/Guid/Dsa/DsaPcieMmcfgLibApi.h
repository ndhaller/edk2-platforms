/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_PCIE_MMCFG_LIB_API_H_
#define _DSA_PCIE_MMCFG_LIB_API_H_

#include <Base.h>
#include <Library/PcieMmcfgLib.h>
//@AdditionalIncludes

#define DSA_PCIE_MMCFG_LIB_API_GUID { 0x22B525EB, 0x8CAA, 0x47EA, { 0x9F, 0x5C, 0x25, 0xC9, 0x02, 0xA6, 0xD4, 0x6C } }

#define DSA_PCIE_MMCFG_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_PCIE_MMCFG_LIB_API_VERSION_1  1

// From: v:\intel\CpRcPkg\Library\BasePcieMmcfgLib\PcieMmcfgLib.inf// v:/intel/CpRcPkg/Include/Library/PcieMmcfgLib.h:58
typedef
UINT32
(EFIAPI *DSA_GetGlobalMmcfgBaseAddress) (
   VOID
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_GetGlobalMmcfgBaseAddress GetGlobalMmcfgBaseAddress; // v:/intel/CpRcPkg/Include/Library/PcieMmcfgLib.h:58
//@AdditionalApiStruct
} DSA_PCIE_MMCFG_LIB_API;

#endif // _DSA_PCIE_MMCFG_LIB_API_H_
