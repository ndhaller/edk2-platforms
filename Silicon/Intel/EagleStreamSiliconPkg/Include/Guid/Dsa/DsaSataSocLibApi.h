/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_SATA_SOC_LIB_API_H_
#define _DSA_SATA_SOC_LIB_API_H_

#include <Base.h>
#include <Library/SataSocLib.h>
//@AdditionalIncludes

#define DSA_SATA_SOC_LIB_API_GUID { 0x5180EED4, 0x0B41, 0x4E4B, { 0x99, 0x85, 0xCB, 0x5E, 0x96, 0xD1, 0xB3, 0x76 } }

#define DSA_SATA_SOC_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_SATA_SOC_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\Fru\EbgPch\Library\SataSocLib\SataSocLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/SataSocLib.h:54
typedef
UINT8
(EFIAPI *DSA_MaxSataControllerNum) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\Fru\EbgPch\Library\SataSocLib\SataSocLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/SataSocLib.h:66
typedef
UINT8
(EFIAPI *DSA_MaxSataPortNum) (
  UINT32 SataCtrlIndex
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_MaxSataControllerNum MaxSataControllerNum; // v:/intel/ClientOneSiliconPkg/Include/Library/SataSocLib.h:54
  DSA_MaxSataPortNum MaxSataPortNum; // v:/intel/ClientOneSiliconPkg/Include/Library/SataSocLib.h:66
//@AdditionalApiStruct
} DSA_SATA_SOC_LIB_API;

#endif // _DSA_SATA_SOC_LIB_API_H_
