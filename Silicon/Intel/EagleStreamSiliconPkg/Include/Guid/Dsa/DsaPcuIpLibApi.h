/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_PCU_IP_LIB_API_H_
#define _DSA_PCU_IP_LIB_API_H_

#include <Base.h>
#include <Library/PcuIpLib.h>
//@AdditionalIncludes

#define DSA_PCU_IP_LIB_API_GUID { 0x9D0141D8, 0x8060, 0x4420, { 0x9B, 0x31, 0xBA, 0x88, 0xFF, 0x8E, 0x38, 0xA2 } }

#define DSA_PCU_IP_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_PCU_IP_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Library\PcuIpLib\PcuIpLibSpr.inf// v:/intel/ServerSiliconPkg/Include/Library/PcuIpLib.h:598
typedef
BOOLEAN
(EFIAPI *DSA_PcuGetHwpEnable) (
  UINT8 SocId
  );

// From: v:\intel\ServerSiliconPkg\Library\PcuIpLib\PcuIpLibSpr.inf// v:/intel/ServerSiliconPkg/Include/Library/PcuIpLib.h:613
typedef
BOOLEAN
(EFIAPI *DSA_PcuGetLpCapability) (
  UINT8 SocId
  );

// From: v:\intel\ServerSiliconPkg\Library\PcuIpLib\PcuIpLibSpr.inf// v:/intel/ServerSiliconPkg/Include/Library/PcuIpLib.h:668
typedef
BOOLEAN
(EFIAPI *DSA_PcuGetPcpsDisable) (
  UINT8 SocId
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_PcuGetHwpEnable PcuGetHwpEnable; // v:/intel/ServerSiliconPkg/Include/Library/PcuIpLib.h:598
  DSA_PcuGetLpCapability PcuGetLpCapability; // v:/intel/ServerSiliconPkg/Include/Library/PcuIpLib.h:613
  DSA_PcuGetPcpsDisable PcuGetPcpsDisable; // v:/intel/ServerSiliconPkg/Include/Library/PcuIpLib.h:668
//@AdditionalApiStruct
} DSA_PCU_IP_LIB_API;

#endif // _DSA_PCU_IP_LIB_API_H_
