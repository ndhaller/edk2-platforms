/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_CHA_IP_LIB_API_H_
#define _DSA_CHA_IP_LIB_API_H_

#include <Base.h>
#include <Library/ChaLib.h>
//@AdditionalIncludes

#define DSA_CHA_IP_LIB_API_GUID { 0x3B6B899B, 0x8EAE, 0x482F, { 0x97, 0x06, 0x41, 0x2F, 0xC9, 0x95, 0x1B, 0xA7 } }

#define DSA_CHA_IP_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_CHA_IP_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Library\ChaIpLib\ChaIpLibSpr.inf// v:/intel/ServerSiliconPkg/Include/Library/ChaLib.h:246
typedef
EFI_STATUS
(EFIAPI *DSA_ChaGetLtTargetAndStatus) (
  UINT8 SocId,
  UINT8 BoxInst,
  UINT32 * LtTarget,
  UINT32 * LtTargetEnabled
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_ChaGetLtTargetAndStatus ChaGetLtTargetAndStatus; // v:/intel/ServerSiliconPkg/Include/Library/ChaLib.h:246
//@AdditionalApiStruct
} DSA_CHA_IP_LIB_API;

#endif // _DSA_CHA_IP_LIB_API_H_
