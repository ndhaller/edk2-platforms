/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_SPS_PEI_LIB_API_H_
#define _DSA_SPS_PEI_LIB_API_H_

#include <Base.h>
#include <Library/SpsPeiLib.h>
//@AdditionalIncludes

#define DSA_SPS_PEI_LIB_API_GUID { 0xC29C1F9A, 0x7E43, 0x4363, { 0x99, 0x1F, 0xB6, 0x92, 0x5B, 0x47, 0x11, 0x6E } }

#define DSA_SPS_PEI_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_SPS_PEI_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Sps\Library\SpsPeiLib\SpsPeiLib.inf// v:/intel/ClientOneSiliconPkg/IpBlock/Sps/Include/Library/SpsPeiLib.h:56
typedef
EFI_STATUS
(EFIAPI *DSA_PeiGetCurrenClockingMode) (
  SPS_CLOCKING_MODES * ClockingMode
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_PeiGetCurrenClockingMode PeiGetCurrenClockingMode; // v:/intel/ClientOneSiliconPkg/IpBlock/Sps/Include/Library/SpsPeiLib.h:56
//@AdditionalApiStruct
} DSA_SPS_PEI_LIB_API;

#endif // _DSA_SPS_PEI_LIB_API_H_
