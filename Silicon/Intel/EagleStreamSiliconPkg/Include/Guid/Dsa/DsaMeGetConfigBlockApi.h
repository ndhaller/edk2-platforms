/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_ME_GET_CONFIG_BLOCK_API_H_
#define _DSA_ME_GET_CONFIG_BLOCK_API_H_

#include <Base.h>
#include <Library/MeGetConfigBlock.h>
//@AdditionalIncludes

#define DSA_ME_GET_CONFIG_BLOCK_API_GUID { 0x4D966830, 0x08D0, 0x4361, { 0x8C, 0xF3, 0x52, 0x3A, 0xF4, 0xE0, 0xA6, 0x32 } }

#define DSA_ME_GET_CONFIG_BLOCK_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_ME_GET_CONFIG_BLOCK_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Sps\Library\MeGetPeiConfigBlock\MeGetPeiConfigBlock.inf// v:/intel/ClientOneSiliconPkg/Include/Library/MeGetConfigBlock.h:95
typedef
ME_PEI_PREMEM_CONFIG *
(EFIAPI *DSA_GetMePreMemConfigBlock) (
  SI_PREMEM_POLICY_PPI * SiPreMemPolicy
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_GetMePreMemConfigBlock GetMePreMemConfigBlock; // v:/intel/ClientOneSiliconPkg/Include/Library/MeGetConfigBlock.h:95
//@AdditionalApiStruct
} DSA_ME_GET_CONFIG_BLOCK_API;

#endif // _DSA_ME_GET_CONFIG_BLOCK_API_H_
