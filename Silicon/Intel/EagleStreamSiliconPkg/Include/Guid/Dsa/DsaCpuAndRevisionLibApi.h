/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_CPU_AND_REVISION_LIB_API_H_
#define _DSA_CPU_AND_REVISION_LIB_API_H_

#include <Base.h>
#include <Library/CpuAndRevisionLib.h>
//@AdditionalIncludes

#define DSA_CPU_AND_REVISION_LIB_API_GUID { 0xB6D6D64F, 0x9B0D, 0x43F8, { 0xAD, 0xE2, 0xC6, 0xEE, 0x46, 0xAA, 0xA7, 0xEB } }

#define DSA_CPU_AND_REVISION_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_CPU_AND_REVISION_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Library\CpuAndRevisionLib\CpuAndRevisionLib.inf// v:/intel/ClientOneSiliconPkg/IpBlock/Sps/Include/Library/CpuAndRevisionLib.h:48
typedef
BOOLEAN
(EFIAPI *DSA_IsCpuAndRevision) (
  UINT8 CpuType,
  UINT16 Revision
  );

// From: v:\intel\ServerSiliconPkg\Library\CpuAndRevisionLib\CpuAndRevisionLib.inf// v:/intel/ClientOneSiliconPkg/IpBlock/Sps/Include/Library/CpuAndRevisionLib.h:67
typedef
BOOLEAN
(EFIAPI *DSA_IsCpuAndRevisionOrLater) (
  UINT8 CpuType,
  UINT16 Revision
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_IsCpuAndRevision IsCpuAndRevision; // v:/intel/ClientOneSiliconPkg/IpBlock/Sps/Include/Library/CpuAndRevisionLib.h:48
  DSA_IsCpuAndRevisionOrLater IsCpuAndRevisionOrLater; // v:/intel/ClientOneSiliconPkg/IpBlock/Sps/Include/Library/CpuAndRevisionLib.h:67
//@AdditionalApiStruct
} DSA_CPU_AND_REVISION_LIB_API;

#endif // _DSA_CPU_AND_REVISION_LIB_API_H_
