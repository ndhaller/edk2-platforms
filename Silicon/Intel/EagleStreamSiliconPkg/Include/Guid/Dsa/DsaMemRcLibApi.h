/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_MEM_RC_LIB_API_H_
#define _DSA_MEM_RC_LIB_API_H_

#include <Base.h>
#include <Library/MemRcLib.h>
//@AdditionalIncludes

#define DSA_MEM_RC_LIB_API_GUID { 0xD6CEBC7C, 0xB3BE, 0x482C, { 0xB2, 0x43, 0x2E, 0x53, 0xF4, 0xAE, 0x30, 0x45 } }

#define DSA_MEM_RC_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_MEM_RC_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Mem\Library\BaseMemRcLib\BaseMemRcLib.inf// v:/intel/CpRcPkg/Include/Library/MemRcLib.h:243
typedef
BOOLEAN
(EFIAPI *DSA_CheckSocketDcpmmPresent) (
  UINT8 SocketId
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_CheckSocketDcpmmPresent CheckSocketDcpmmPresent; // v:/intel/CpRcPkg/Include/Library/MemRcLib.h:243
//@AdditionalApiStruct
} DSA_MEM_RC_LIB_API;

#endif // _DSA_MEM_RC_LIB_API_H_
