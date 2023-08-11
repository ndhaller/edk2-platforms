/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_PCH_PCIE_RP_LIB_API_H_
#define _DSA_PCH_PCIE_RP_LIB_API_H_

#include <Base.h>
#include <Library/PchPcieRpLib.h>
//@AdditionalIncludes

#define DSA_PCH_PCIE_RP_LIB_API_GUID { 0x0905BD48, 0xDFDC, 0x4F75, { 0xBF, 0x92, 0x8B, 0x61, 0xE0, 0xF9, 0x34, 0xC0 } }

#define DSA_PCH_PCIE_RP_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_PCH_PCIE_RP_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\IpBlock\PcieRp\Library\PeiDxeSmmPchPcieRpLib\PeiDxeSmmPchPcieRpLibVer3.inf// v:/intel/ClientOneSiliconPkg/Include/Library/PchPcieRpLib.h:126
typedef
UINT64
(EFIAPI *DSA_PchPcieBase) (
  UINT32 RpIndex
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_PchPcieBase PchPcieBase; // v:/intel/ClientOneSiliconPkg/Include/Library/PchPcieRpLib.h:126
//@AdditionalApiStruct
} DSA_PCH_PCIE_RP_LIB_API;

#endif // _DSA_PCH_PCIE_RP_LIB_API_H_
