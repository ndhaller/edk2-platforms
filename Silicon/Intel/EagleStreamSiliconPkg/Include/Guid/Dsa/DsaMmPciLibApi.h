/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_MM_PCI_LIB_API_H_
#define _DSA_MM_PCI_LIB_API_H_

#include <Base.h>
#include <Library/MmPciBaseLib.h>
//@AdditionalIncludes

#define DSA_MM_PCI_LIB_API_GUID { 0xAF613188, 0x6388, 0x4DFD, { 0xA5, 0x32, 0xE8, 0x88, 0xCF, 0xB2, 0x59, 0x4C } }

#define DSA_MM_PCI_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_MM_PCI_LIB_API_VERSION_1  1

// From: v:\intel\CpRcPkg\Library\DxeSmmMmPciLib\DxeMmPciLib.inf// v:/intel/CpRcPkg/Include/Library/MmPciBaseLib.h:44
typedef
UINTN
(EFIAPI *DSA_MmPciBase) (
  UINT32 Bus,
  UINT32 Device,
  UINT32 Function
  );

// From: v:\intel\CpRcPkg\Library\DxeSmmMmPciLib\DxeMmPciLib.inf// v:/intel/CpRcPkg/Include/Library/MmPciBaseLib.h:62
typedef
UINTN
(EFIAPI *DSA_MmPciAddress) (
  UINT32 Seg,
  UINT32 Bus,
  UINT32 Device,
  UINT32 Function,
  UINT32 Register
  );

// From: v:\intel\CpRcPkg\Library\PeiMmPciLib\PeiMmPciLib.inf// v:/intel/CpRcPkg/Include/Library/MmPciBaseLib.h:62
typedef
UINTN
(EFIAPI *DSA_MmPciAddress) (
  UINT32 Seg,
  UINT32 Bus,
  UINT32 Device,
  UINT32 Function,
  UINT32 Register
  );

// From: v:\intel\CpRcPkg\Library\PeiMmPciLib\PeiMmPciLib.inf// v:/intel/CpRcPkg/Include/Library/MmPciBaseLib.h:44
typedef
UINTN
(EFIAPI *DSA_MmPciBase) (
  UINT32 Bus,
  UINT32 Device,
  UINT32 Function
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_MmPciBase MmPciBase; // v:/intel/CpRcPkg/Include/Library/MmPciBaseLib.h:44
  DSA_MmPciAddress MmPciAddress; // v:/intel/CpRcPkg/Include/Library/MmPciBaseLib.h:62
//@AdditionalApiStruct
} DSA_MM_PCI_LIB_API;

#endif // _DSA_MM_PCI_LIB_API_H_
