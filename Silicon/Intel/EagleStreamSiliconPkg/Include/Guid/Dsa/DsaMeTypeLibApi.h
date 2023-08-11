/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_ME_TYPE_LIB_API_H_
#define _DSA_ME_TYPE_LIB_API_H_

#include <Base.h>
#include <Library/MeTypeLib.h>
//@AdditionalIncludes

#define DSA_ME_TYPE_LIB_API_GUID { 0x103B48EA, 0x6E32, 0x40FA, { 0xA5, 0x4B, 0x5E, 0xA3, 0xEE, 0x5E, 0x0E, 0x1B } }

#define DSA_ME_TYPE_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_ME_TYPE_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Sps\Library\MeTypeLib\MeTypeDxeLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/MeTypeLib.h:114
typedef
BOOLEAN
(EFIAPI *DSA_MeTypeIsClient) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Sps\Library\MeTypeLib\MeTypeDxeLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/MeTypeLib.h:59
typedef
ME_TYPE
(EFIAPI *DSA_MeTypeGet) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Sps\Library\MeTypeLib\MeTypePeiLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/MeTypeLib.h:92
typedef
BOOLEAN
(EFIAPI *DSA_MeTypeIsSps) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Sps\Library\MeTypeLib\MeTypePeiLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/MeTypeLib.h:114
typedef
BOOLEAN
(EFIAPI *DSA_MeTypeIsClient) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Sps\Library\MeTypeLib\MeTypePeiLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/MeTypeLib.h:103
typedef
BOOLEAN
(EFIAPI *DSA_MeTypeIsIgnition) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Sps\Library\MeTypeLib\MeTypePeiLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/MeTypeLib.h:70
typedef
BOOLEAN
(EFIAPI *DSA_MeTypeIsDfx) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Sps\Library\MeTypeLib\MeTypePeiLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/MeTypeLib.h:81
typedef
BOOLEAN
(EFIAPI *DSA_MeTypeIsDisabled) (
   VOID
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_MeTypeIsClient MeTypeIsClient; // v:/intel/ClientOneSiliconPkg/Include/Library/MeTypeLib.h:114
  DSA_MeTypeGet MeTypeGet; // v:/intel/ClientOneSiliconPkg/Include/Library/MeTypeLib.h:59
  DSA_MeTypeIsSps MeTypeIsSps; // v:/intel/ClientOneSiliconPkg/Include/Library/MeTypeLib.h:92
  DSA_MeTypeIsIgnition MeTypeIsIgnition; // v:/intel/ClientOneSiliconPkg/Include/Library/MeTypeLib.h:103
  DSA_MeTypeIsDfx MeTypeIsDfx; // v:/intel/ClientOneSiliconPkg/Include/Library/MeTypeLib.h:70
  DSA_MeTypeIsDisabled MeTypeIsDisabled; // v:/intel/ClientOneSiliconPkg/Include/Library/MeTypeLib.h:81
//@AdditionalApiStruct
} DSA_ME_TYPE_LIB_API;

#endif // _DSA_ME_TYPE_LIB_API_H_
