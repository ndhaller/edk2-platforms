/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_PMC_LIB_API_H_
#define _DSA_PMC_LIB_API_H_

#include <Base.h>
#include <Library/PmcLib.h>
//@AdditionalIncludes

#define DSA_PMC_LIB_API_GUID { 0xFFEE41C7, 0xEC5F, 0x4940, { 0xBC, 0x0F, 0x3D, 0x58, 0x90, 0x94, 0x0C, 0xBB } }

#define DSA_PMC_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_PMC_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Pmc\Library\PeiDxeSmmPmcLib\PeiDxeSmmPmcLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/PmcLib.h:122
typedef
UINT16
(EFIAPI *DSA_PmcGetAcpiBase) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Pmc\Library\PeiDxeSmmPmcLib\PeiDxeSmmPmcLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/PmcLib.h:219
typedef
VOID
(EFIAPI *DSA_PmcSetPlatformStateAfterPowerFailure) (
  UINT8 PowerStateAfterG3
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Pmc\Library\PeiDxeSmmPmcLib\PeiDxeSmmPmcLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/PmcLib.h:184
typedef
VOID
(EFIAPI *DSA_PmcClearPowerFailureStatus) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Pmc\Library\PeiDxeSmmPmcLib\PeiDxeSmmPmcLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/PmcLib.h:165
typedef
BOOLEAN
(EFIAPI *DSA_PmcIsPowerFailureDetected) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Pmc\Library\PeiDxeSmmPmcLib\PeiDxeSmmPmcLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/PmcLib.h:465
typedef
BOOLEAN
(EFIAPI *DSA_PmcIsDwrBootMode) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Pmc\Library\PeiDxeSmmPmcLib\PeiDxeSmmPmcLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/PmcLib.h:453
typedef
VOID
(EFIAPI *DSA_ClearSmiAndWake) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Pmc\Library\PeiDxeSmmPmcLib\PeiDxeSmmPmcLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/PmcLib.h:154
typedef
BOOLEAN
(EFIAPI *DSA_PmcIsRtcBatteryGood) (
   VOID
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_PmcGetAcpiBase PmcGetAcpiBase; // v:/intel/ClientOneSiliconPkg/Include/Library/PmcLib.h:122
  DSA_PmcSetPlatformStateAfterPowerFailure PmcSetPlatformStateAfterPowerFailure; // v:/intel/ClientOneSiliconPkg/Include/Library/PmcLib.h:219
  DSA_PmcClearPowerFailureStatus PmcClearPowerFailureStatus; // v:/intel/ClientOneSiliconPkg/Include/Library/PmcLib.h:184
  DSA_PmcIsPowerFailureDetected PmcIsPowerFailureDetected; // v:/intel/ClientOneSiliconPkg/Include/Library/PmcLib.h:165
  DSA_PmcIsDwrBootMode PmcIsDwrBootMode; // v:/intel/ClientOneSiliconPkg/Include/Library/PmcLib.h:465
  DSA_ClearSmiAndWake ClearSmiAndWake; // v:/intel/ClientOneSiliconPkg/Include/Library/PmcLib.h:453
  DSA_PmcIsRtcBatteryGood PmcIsRtcBatteryGood; // v:/intel/ClientOneSiliconPkg/Include/Library/PmcLib.h:154
//@AdditionalApiStruct
} DSA_PMC_LIB_API;

#endif // _DSA_PMC_LIB_API_H_
