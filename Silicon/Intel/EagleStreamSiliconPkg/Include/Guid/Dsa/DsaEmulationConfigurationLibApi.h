/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_EMULATION_CONFIGURATION_LIB_API_H_
#define _DSA_EMULATION_CONFIGURATION_LIB_API_H_

#include <Base.h>
#include <Library/EmulationConfigurationLib.h>
//@AdditionalIncludes

#define DSA_EMULATION_CONFIGURATION_LIB_API_GUID { 0xB360A5CD, 0xC11A, 0x48AD, { 0xB5, 0x87, 0xB5, 0x14, 0x35, 0xB5, 0x99, 0x04 } }

#define DSA_EMULATION_CONFIGURATION_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_EMULATION_CONFIGURATION_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Library\EmulationConfigurationLib\EmulationConfigurationLib.inf// v:/intel/CpRcPkg/Include/Library/EmulationConfigurationLib.h:99
typedef
BOOLEAN
(EFIAPI *DSA_HybridSystemLevelEmulationEnabled) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Library\EmulationConfigurationLib\EmulationConfigurationLib.inf// v:/intel/CpRcPkg/Include/Library/EmulationConfigurationLib.h:280
typedef
EFI_STATUS
(EFIAPI *DSA_SetMsrTraceOutputMode) (
  UINT8 Value
  );

// From: v:\intel\ServerSiliconPkg\Library\EmulationConfigurationLib\EmulationConfigurationLib.inf// v:/intel/CpRcPkg/Include/Library/EmulationConfigurationLib.h:247
typedef
BOOLEAN
(EFIAPI *DSA_MsrTraceEnabled) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Library\EmulationConfigurationLib\EmulationConfigurationLib.inf// v:/intel/CpRcPkg/Include/Library/EmulationConfigurationLib.h:339
typedef
EFI_STATUS
(EFIAPI *DSA_UbiosCall) (
  CHAR8 * CallName,
  UINT8 Scope
  );

// From: v:\intel\ServerSiliconPkg\Library\EmulationConfigurationLib\EmulationConfigurationLib.inf// v:/intel/CpRcPkg/Include/Library/EmulationConfigurationLib.h:115
typedef
BOOLEAN
(EFIAPI *DSA_UbiosGenerationEnabled) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Library\EmulationConfigurationLib\EmulationConfigurationLib.inf// v:/intel/CpRcPkg/Include/Library/EmulationConfigurationLib.h:231
typedef
BOOLEAN
(EFIAPI *DSA_UbiosGenerationOrHsleEnabled) (
   VOID
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_HybridSystemLevelEmulationEnabled HybridSystemLevelEmulationEnabled; // v:/intel/CpRcPkg/Include/Library/EmulationConfigurationLib.h:99
  DSA_SetMsrTraceOutputMode SetMsrTraceOutputMode; // v:/intel/CpRcPkg/Include/Library/EmulationConfigurationLib.h:280
  DSA_MsrTraceEnabled MsrTraceEnabled; // v:/intel/CpRcPkg/Include/Library/EmulationConfigurationLib.h:247
  DSA_UbiosCall UbiosCall; // v:/intel/CpRcPkg/Include/Library/EmulationConfigurationLib.h:339
  DSA_UbiosGenerationEnabled UbiosGenerationEnabled; // v:/intel/CpRcPkg/Include/Library/EmulationConfigurationLib.h:115
  DSA_UbiosGenerationOrHsleEnabled UbiosGenerationOrHsleEnabled; // v:/intel/CpRcPkg/Include/Library/EmulationConfigurationLib.h:231
//@AdditionalApiStruct
} DSA_EMULATION_CONFIGURATION_LIB_API;

#endif // _DSA_EMULATION_CONFIGURATION_LIB_API_H_
