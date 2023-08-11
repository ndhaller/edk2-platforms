/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_SYS_HOST_POINTER_LIB_API_H_
#define _DSA_SYS_HOST_POINTER_LIB_API_H_

#include <Base.h>
#include <Library/SysHostPointerLib.h>
//@AdditionalIncludes

#define DSA_SYS_HOST_POINTER_LIB_API_GUID { 0xC20766A9, 0x8540, 0x4AB6, { 0xB4, 0xC0, 0x0A, 0xFA, 0xC9, 0x5A, 0x72, 0x1F } }

#define DSA_SYS_HOST_POINTER_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_SYS_HOST_POINTER_LIB_API_VERSION_1  1

// From: v:\intel\CpRcPkg\Library\SysHostPointerLib\SysHostPointerLibGlobalVariable.inf// v:/intel/CpRcPkg/Include/Library/SysHostPointerLib.h:412
typedef
VOID *
(EFIAPI *DSA_GetMemMapHostPointer) (
   VOID
  );

// From: v:\intel\CpRcPkg\Library\SysHostPointerLib\PeiSysHostPointerLibMm7.inf// v:/intel/CpRcPkg/Include/Library/SysHostPointerLib.h:276
typedef
VOID *
(EFIAPI *DSA_GetSysSetupPointer) (
   VOID
  );

// From: v:\intel\CpRcPkg\Library\SysHostPointerLib\PeiSysHostPointerLibMm7.inf// v:/intel/CpRcPkg/Include/Library/SysHostPointerLib.h:446
typedef
VOID *
(EFIAPI *DSA_GetEmulationSettingPointer) (
   VOID
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_GetMemMapHostPointer GetMemMapHostPointer; // v:/intel/CpRcPkg/Include/Library/SysHostPointerLib.h:412
  DSA_GetSysSetupPointer GetSysSetupPointer; // v:/intel/CpRcPkg/Include/Library/SysHostPointerLib.h:276
  DSA_GetEmulationSettingPointer GetEmulationSettingPointer; // v:/intel/CpRcPkg/Include/Library/SysHostPointerLib.h:446
//@AdditionalApiStruct
} DSA_SYS_HOST_POINTER_LIB_API;

#endif // _DSA_SYS_HOST_POINTER_LIB_API_H_
