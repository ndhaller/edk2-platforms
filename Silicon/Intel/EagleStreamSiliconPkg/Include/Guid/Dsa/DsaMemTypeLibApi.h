/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_MEM_TYPE_LIB_API_H_
#define _DSA_MEM_TYPE_LIB_API_H_

#include <Base.h>
#include <Library/MemTypeLib.h>
//@AdditionalIncludes

#define DSA_MEM_TYPE_LIB_API_GUID { 0x03D6069C, 0x8684, 0x49AD, { 0x94, 0x11, 0x88, 0x10, 0x1F, 0x5D, 0x3C, 0xE6 } }

#define DSA_MEM_TYPE_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_MEM_TYPE_LIB_API_VERSION_1  1

// From: v:\intel\CpRcPkg\Library\MemTypeLib\DxeMemTypeLib.inf// v:/intel/CpRcPkg/Include/Library/MemTypeLib.h:167
typedef
BOOLEAN
(EFIAPI *DSA_IsMemTypeNonVolatile) (
  MEM_TYPE MemType
  );

// From: v:\intel\CpRcPkg\Library\MemTypeLib\DxeMemTypeLib.inf// v:/intel/CpRcPkg/Include/Library/MemTypeLib.h:433
typedef
CONST CHAR8 *
(EFIAPI *DSA_GetMemTypeString) (
  MEM_TYPE MemType
  );

// From: v:\intel\CpRcPkg\Library\MemTypeLib\DxeMemTypeLib.inf// v:/intel/CpRcPkg/Include/Library/MemTypeLib.h:106
typedef
BOOLEAN
(EFIAPI *DSA_IsMemTypeHbm) (
  MEM_TYPE MemType
  );

// From: v:\intel\CpRcPkg\Library\MemTypeLib\DxeMemTypeLib.inf// v:/intel/CpRcPkg/Include/Library/MemTypeLib.h:76
typedef
BOOLEAN
(EFIAPI *DSA_IsMemType2lmDdr) (
  MEM_TYPE MemType
  );

// From: v:\intel\CpRcPkg\Library\MemTypeLib\DxeMemTypeLib.inf// v:/intel/CpRcPkg/Include/Library/MemTypeLib.h:121
typedef
BOOLEAN
(EFIAPI *DSA_IsMemType2lmHbm) (
  MEM_TYPE MemType
  );

// From: v:\intel\CpRcPkg\Library\MemTypeLib\DxeMemTypeLib.inf// v:/intel/CpRcPkg/Include/Library/MemTypeLib.h:91
typedef
BOOLEAN
(EFIAPI *DSA_IsMemType2lm) (
  MEM_TYPE MemType
  );

// From: v:\intel\CpRcPkg\Library\MemTypeLib\DxeMemTypeLib.inf// v:/intel/CpRcPkg/Include/Library/MemTypeLib.h:182
typedef
BOOLEAN
(EFIAPI *DSA_IsMemTypeDdr) (
  MEM_TYPE MemType
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_IsMemTypeNonVolatile IsMemTypeNonVolatile; // v:/intel/CpRcPkg/Include/Library/MemTypeLib.h:167
  DSA_GetMemTypeString GetMemTypeString; // v:/intel/CpRcPkg/Include/Library/MemTypeLib.h:433
  DSA_IsMemTypeHbm IsMemTypeHbm; // v:/intel/CpRcPkg/Include/Library/MemTypeLib.h:106
  DSA_IsMemType2lmDdr IsMemType2lmDdr; // v:/intel/CpRcPkg/Include/Library/MemTypeLib.h:76
  DSA_IsMemType2lmHbm IsMemType2lmHbm; // v:/intel/CpRcPkg/Include/Library/MemTypeLib.h:121
  DSA_IsMemType2lm IsMemType2lm; // v:/intel/CpRcPkg/Include/Library/MemTypeLib.h:91
  DSA_IsMemTypeDdr IsMemTypeDdr; // v:/intel/CpRcPkg/Include/Library/MemTypeLib.h:182
//@AdditionalApiStruct
} DSA_MEM_TYPE_LIB_API;

#endif // _DSA_MEM_TYPE_LIB_API_H_
