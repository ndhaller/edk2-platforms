/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_UPI_HOST_DATA_LIB_API_H_
#define _DSA_UPI_HOST_DATA_LIB_API_H_

#include <Base.h>
#include <Library/UpiHostDataLib.h>
//@AdditionalIncludes

#define DSA_UPI_HOST_DATA_LIB_API_GUID { 0xE86870EF, 0x9A12, 0x485F, { 0xA5, 0xAA, 0x17, 0x08, 0x3D, 0x50, 0xC5, 0x29 } }

#define DSA_UPI_HOST_DATA_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_UPI_HOST_DATA_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Upi\Library\UpiHostDataLib\UpiHostDataLibPei.inf// v:/intel/ServerSiliconPkg/Include/Library/UpiHostDataLib.h:47
typedef
VOID *
(EFIAPI *DSA_GetKtiHostDataPtr) (
  KTI_HOST_TYPE KtiHostType
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_GetKtiHostDataPtr GetKtiHostDataPtr; // v:/intel/ServerSiliconPkg/Include/Library/UpiHostDataLib.h:47
//@AdditionalApiStruct
} DSA_UPI_HOST_DATA_LIB_API;

#endif // _DSA_UPI_HOST_DATA_LIB_API_H_
