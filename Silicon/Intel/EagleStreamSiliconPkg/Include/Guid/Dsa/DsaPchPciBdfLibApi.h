/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_PCH_PCI_BDF_LIB_API_H_
#define _DSA_PCH_PCI_BDF_LIB_API_H_

#include <Base.h>
#include <Library/PchPciBdfLib.h>
//@AdditionalIncludes

#define DSA_PCH_PCI_BDF_LIB_API_GUID { 0x46C78D51, 0x552A, 0x4D54, { 0x8B, 0xB6, 0x3C, 0x5B, 0x63, 0xFB, 0x6A, 0x7D } }

#define DSA_PCH_PCI_BDF_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_PCH_PCI_BDF_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\Pch\Library\BasePchPciBdfLib\BasePchPciBdfLib.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchPciBdfLib.h:384
typedef
UINT64
(EFIAPI *DSA_PchXhciPciCfgBase) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\Pch\Library\BasePchPciBdfLib\BasePchPciBdfLib.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchPciBdfLib.h:646
typedef
UINT8
(EFIAPI *DSA_LpcDevNumber) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\Pch\Library\BasePchPciBdfLib\BasePchPciBdfLib.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchPciBdfLib.h:354
typedef
UINT64
(EFIAPI *DSA_SpiPciCfgBase) (
   VOID
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_PchXhciPciCfgBase PchXhciPciCfgBase; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchPciBdfLib.h:384
  DSA_LpcDevNumber LpcDevNumber; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchPciBdfLib.h:646
  DSA_SpiPciCfgBase SpiPciCfgBase; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchPciBdfLib.h:354
//@AdditionalApiStruct
} DSA_PCH_PCI_BDF_LIB_API;

#endif // _DSA_PCH_PCI_BDF_LIB_API_H_
