/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_IIO_CXL_API_LIB_API_H_
#define _DSA_IIO_CXL_API_LIB_API_H_

#include <Base.h>
#include <Library/IioCxlApiLib.h>
//@AdditionalIncludes

#define DSA_IIO_CXL_API_LIB_API_GUID { 0xB17CE332, 0x2B29, 0x4061, { 0x8C, 0xC2, 0xF3, 0x2B, 0xBF, 0x83, 0x0B, 0x6D } }

#define DSA_IIO_CXL_API_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_IIO_CXL_API_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Iio\Library\IioCxlApiLib\Null\IioCxlApiLibNull.inf// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioCxlApiLib.h:87
typedef
EFI_STATUS
(EFIAPI *DSA_IioGetCxl11ResDistribution) (
  UINT8 Socket,
  UINT8 Stack,
  STACK_RES_DISTRIBUTION * Cxl11ResDist
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_IioGetCxl11ResDistribution IioGetCxl11ResDistribution; // v:/intel/ServerSiliconPkg/Iio/Include/Library/IioCxlApiLib.h:87
//@AdditionalApiStruct
} DSA_IIO_CXL_API_LIB_API;

#endif // _DSA_IIO_CXL_API_LIB_API_H_
