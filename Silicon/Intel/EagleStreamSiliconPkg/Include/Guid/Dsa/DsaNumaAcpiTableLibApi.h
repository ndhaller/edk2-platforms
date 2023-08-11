/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_NUMA_ACPI_TABLE_LIB_API_H_
#define _DSA_NUMA_ACPI_TABLE_LIB_API_H_

#include <Base.h>
#include <Library/NumaAcpiTableLib.h>
//@AdditionalIncludes

#define DSA_NUMA_ACPI_TABLE_LIB_API_GUID { 0x8090CBDF, 0xFA68, 0x442E, { 0xB0, 0x4E, 0x80, 0x3B, 0xE2, 0xD7, 0x5C, 0xD0 } }

#define DSA_NUMA_ACPI_TABLE_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_NUMA_ACPI_TABLE_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Library\NumaAcpiTableLib\NumaAcpiTableLib.inf// v:/intel/ServerSiliconPkg/Include/Library/NumaAcpiTableLib.h:227
typedef
PROXIMITY_DOMAIN *
(EFIAPI *DSA_GetProximityDomain) (
  UINT32 DomainId
  );

// From: v:\intel\ServerSiliconPkg\Library\NumaAcpiTableLib\NumaAcpiTableLib.inf// v:/intel/ServerSiliconPkg/Include/Library/NumaAcpiTableLib.h:211
typedef
UINT32
(EFIAPI *DSA_GetProximityDomainNum) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Library\NumaAcpiTableLib\NumaAcpiTableLib.inf// v:/intel/ServerSiliconPkg/Include/Library/NumaAcpiTableLib.h:238
typedef
VOID
(EFIAPI *DSA_DisplayProximityDomain) (
   VOID
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_GetProximityDomain GetProximityDomain; // v:/intel/ServerSiliconPkg/Include/Library/NumaAcpiTableLib.h:227
  DSA_GetProximityDomainNum GetProximityDomainNum; // v:/intel/ServerSiliconPkg/Include/Library/NumaAcpiTableLib.h:211
  DSA_DisplayProximityDomain DisplayProximityDomain; // v:/intel/ServerSiliconPkg/Include/Library/NumaAcpiTableLib.h:238
//@AdditionalApiStruct
} DSA_NUMA_ACPI_TABLE_LIB_API;

#endif // _DSA_NUMA_ACPI_TABLE_LIB_API_H_
