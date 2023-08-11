/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_ME_CONFIG_LIB_API_H_
#define _DSA_ME_CONFIG_LIB_API_H_

#include <Base.h>
#include <Library/MeConfigLib.h>
//@AdditionalIncludes

#define DSA_ME_CONFIG_LIB_API_GUID { 0x05F00A77, 0x305F, 0x4AFD, { 0xB1, 0x6F, 0x97, 0xC7, 0xF7, 0x8D, 0x60, 0xCA } }

#define DSA_ME_CONFIG_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_ME_CONFIG_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Sps\Library\MeConfigLib\MeConfigLib.inf// v:/intel/ClientOneSiliconPkg/IpBlock/Sps/Include/Library/MeConfigLib.h:61
typedef
UINT32
(EFIAPI *DSA_MeConfigDeviceAutoResolve) (
  ME_AUTO_CONFIG Device,
  UINT32 ConfigToResolve,
  BOOLEAN MeIsCorporateAmt
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Sps\Library\MeConfigLib\MeConfigLib.inf// v:/intel/ClientOneSiliconPkg/IpBlock/Sps/Include/Library/MeConfigLib.h:83
typedef
VOID
(EFIAPI *DSA_MeServerSetDxePolicyDefaults) (
  ME_SERVER_DXE_CONFIG * MeServerDxeConfig
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Sps\Library\MeConfigLib\MeConfigLib.inf// v:/intel/ClientOneSiliconPkg/IpBlock/Sps/Include/Library/MeConfigLib.h:73
typedef
VOID
(EFIAPI *DSA_SetMeServerPeiPolicyDefaults) (
  ME_SERVER_PEI_CONFIG * MeServerPeiConfig
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_MeConfigDeviceAutoResolve MeConfigDeviceAutoResolve; // v:/intel/ClientOneSiliconPkg/IpBlock/Sps/Include/Library/MeConfigLib.h:61
  DSA_MeServerSetDxePolicyDefaults MeServerSetDxePolicyDefaults; // v:/intel/ClientOneSiliconPkg/IpBlock/Sps/Include/Library/MeConfigLib.h:83
  DSA_SetMeServerPeiPolicyDefaults SetMeServerPeiPolicyDefaults; // v:/intel/ClientOneSiliconPkg/IpBlock/Sps/Include/Library/MeConfigLib.h:73
//@AdditionalApiStruct
} DSA_ME_CONFIG_LIB_API;

#endif // _DSA_ME_CONFIG_LIB_API_H_
