/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_IIO_DATA_HUB_LIB_API_H_
#define _DSA_IIO_DATA_HUB_LIB_API_H_

#include <Base.h>
#include <Library/IioDataHubLib.h>
//@AdditionalIncludes

#define DSA_IIO_DATA_HUB_LIB_API_GUID { 0x57FB4CED, 0x8E5F, 0x46E4, { 0x96, 0xC5, 0xF1, 0x09, 0xC0, 0x9B, 0x49, 0xF5 } }

#define DSA_IIO_DATA_HUB_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_IIO_DATA_HUB_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Iio\Library\IioDataHubLib\IioDataHubLibSpr.inf// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioDataHubLib.h:1062
typedef
IIO_CONTROLLER_GEN
(EFIAPI *DSA_IioGetControllerType) (
  UINT8 Socket,
  UINT8 Stack,
  UINT8 Port
  );

// From: v:\intel\ServerSiliconPkg\Iio\Library\IioDataHubLib\IioDataHubLibSpr.inf// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioDataHubLib.h:326
typedef
BOOLEAN
(EFIAPI *DSA_IioIsPcieRootPortStack) (
  UINT8 Socket,
  UINT8 Stack
  );

// From: v:\intel\ServerSiliconPkg\Iio\Library\IioDataHubLib\IioDataHubLibSpr.inf// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioDataHubLib.h:967
typedef
IIO_HCX_TYPE
(EFIAPI *DSA_GetHcxTypeEx) (
  UINT8 IioIndex,
  UINT8 StackIndex
  );

// From: v:\intel\ServerSiliconPkg\Iio\Library\IioDataHubLib\IioDataHubLibSpr.inf// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioDataHubLib.h:980
typedef
IIO_HCX_TYPE
(EFIAPI *DSA_GetHcxType) (
  UINT8 IioIndex
  );

// From: v:\intel\ServerSiliconPkg\Iio\Library\IioDataHubLib\IioDataHubLibSpr.inf// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioDataHubLib.h:651
typedef
BOOLEAN
(EFIAPI *DSA_IioIsEeMccSku) (
  UINT8 IioIndex
  );

// From: v:\intel\ServerSiliconPkg\Iio\Library\IioDataHubLib\IioDataHubLibSpr.inf// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioDataHubLib.h:664
typedef
BOOLEAN
(EFIAPI *DSA_IioIsLccSku) (
  UINT8 IioIndex
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_IioGetControllerType IioGetControllerType; // v:/intel/ServerSiliconPkg/Iio/Include/Library/IioDataHubLib.h:1062
  DSA_IioIsPcieRootPortStack IioIsPcieRootPortStack; // v:/intel/ServerSiliconPkg/Iio/Include/Library/IioDataHubLib.h:326
  DSA_GetHcxTypeEx GetHcxTypeEx; // v:/intel/ServerSiliconPkg/Iio/Include/Library/IioDataHubLib.h:967
  DSA_GetHcxType GetHcxType; // v:/intel/ServerSiliconPkg/Iio/Include/Library/IioDataHubLib.h:980
  DSA_IioIsEeMccSku IioIsEeMccSku; // v:/intel/ServerSiliconPkg/Iio/Include/Library/IioDataHubLib.h:651
  DSA_IioIsLccSku IioIsLccSku; // v:/intel/ServerSiliconPkg/Iio/Include/Library/IioDataHubLib.h:664
//@AdditionalApiStruct
} DSA_IIO_DATA_HUB_LIB_API;

#endif // _DSA_IIO_DATA_HUB_LIB_API_H_
