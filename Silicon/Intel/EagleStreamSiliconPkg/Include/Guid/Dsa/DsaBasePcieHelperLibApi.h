/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_BASE_PCIE_HELPER_LIB_API_H_
#define _DSA_BASE_PCIE_HELPER_LIB_API_H_

#include <Base.h>
#include <Library/PcieHelperLib.h>
//@AdditionalIncludes

#define DSA_BASE_PCIE_HELPER_LIB_API_GUID { 0x8CD22057, 0x7E55, 0x4330, { 0x97, 0x73, 0x2A, 0x7B, 0xB8, 0xA3, 0x53, 0x46 } }

#define DSA_BASE_PCIE_HELPER_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_BASE_PCIE_HELPER_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\IpBlock\PcieRp\Library\BasePcieHelperLib\BasePcieHelperLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/PcieHelperLib.h:253
typedef
UINT64
(EFIAPI *DSA_PcieRpSetSubordSecondBus) (
  UINT64 RpBase,
  UINT8 Segment,
  UINT8 TempPciBus
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_PcieRpSetSubordSecondBus PcieRpSetSubordSecondBus; // v:/intel/ClientOneSiliconPkg/Include/Library/PcieHelperLib.h:253
//@AdditionalApiStruct
} DSA_BASE_PCIE_HELPER_LIB_API;

#endif // _DSA_BASE_PCIE_HELPER_LIB_API_H_
