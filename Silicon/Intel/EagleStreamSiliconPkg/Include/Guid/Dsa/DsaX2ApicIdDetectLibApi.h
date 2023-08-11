/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_X2_APIC_ID_DETECT_LIB_API_H_
#define _DSA_X2_APIC_ID_DETECT_LIB_API_H_

#include <Base.h>
#include <Library/X2ApicIdDetectLib.h>
//@AdditionalIncludes

#define DSA_X2_APIC_ID_DETECT_LIB_API_GUID { 0xDE4AA6DE, 0xFFDA, 0x4DAD, { 0x8B, 0x38, 0xDB, 0x80, 0x09, 0x50, 0x53, 0x9E } }

#define DSA_X2_APIC_ID_DETECT_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_X2_APIC_ID_DETECT_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Cpu\Library\X2ApicIdDetectLib\X2ApicIdDetectLib.inf// v:/intel/ServerSiliconPkg/Cpu/Include/Library/X2ApicIdDetectLib.h:40
typedef
BOOLEAN
(EFIAPI *DSA_X2ApicIdDetect) (
   VOID
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_X2ApicIdDetect X2ApicIdDetect; // v:/intel/ServerSiliconPkg/Cpu/Include/Library/X2ApicIdDetectLib.h:40
//@AdditionalApiStruct
} DSA_X2_APIC_ID_DETECT_LIB_API;

#endif // _DSA_X2_APIC_ID_DETECT_LIB_API_H_
