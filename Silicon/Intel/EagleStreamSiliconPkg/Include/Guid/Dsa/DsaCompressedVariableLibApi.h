/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_COMPRESSED_VARIABLE_LIB_API_H_
#define _DSA_COMPRESSED_VARIABLE_LIB_API_H_

#include <Base.h>
#include <Library/CompressedVariableLib.h>
//@AdditionalIncludes

#define DSA_COMPRESSED_VARIABLE_LIB_API_GUID { 0x75720B25, 0x1878, 0x4E78, { 0x80, 0xDE, 0x60, 0x2E, 0xD9, 0x21, 0x4B, 0x3B } }

#define DSA_COMPRESSED_VARIABLE_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_COMPRESSED_VARIABLE_LIB_API_VERSION_1  1

// From: v:\intel\CpRcPkg\Library\CompressedVariableLib\CompressedVariableLibDxe.inf// v:/intel/CpRcPkg/Include/Library/CompressedVariableLib.h:76
typedef
EFI_STATUS
(EFIAPI *DSA_SaveVariableFromHob) (
  EFI_GUID HobGuid,
  CHAR16 * VariableName,
  EFI_GUID VariableGuid
  );

// From: v:\intel\CpRcPkg\Library\CompressedVariableLib\CompressedVariableLibDxe.inf// v:/intel/CpRcPkg/Include/Library/CompressedVariableLib.h:55
typedef
EFI_STATUS
(EFIAPI *DSA_CompressAndSaveToVariable) (
  CHAR16 * VariableName,
  EFI_GUID VariableGuid,
  VOID * VariableBuffer,
  UINT32 VariableBufferSize
  );

// From: v:\intel\CpRcPkg\Library\CompressedVariableLib\CompressedVariableLibDxe.inf// v:/intel/CpRcPkg/Include/Library/CompressedVariableLib.h:98
typedef
EFI_STATUS
(EFIAPI *DSA_LoadCompressedVariable) (
  CHAR16 * VariableName,
  EFI_GUID VariableGuid,
  VOID * VariableBuffer,
  UINT32 VariableBufferSize
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_SaveVariableFromHob SaveVariableFromHob; // v:/intel/CpRcPkg/Include/Library/CompressedVariableLib.h:76
  DSA_CompressAndSaveToVariable CompressAndSaveToVariable; // v:/intel/CpRcPkg/Include/Library/CompressedVariableLib.h:55
  DSA_LoadCompressedVariable LoadCompressedVariable; // v:/intel/CpRcPkg/Include/Library/CompressedVariableLib.h:98
//@AdditionalApiStruct
} DSA_COMPRESSED_VARIABLE_LIB_API;

#endif // _DSA_COMPRESSED_VARIABLE_LIB_API_H_
