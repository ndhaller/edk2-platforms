/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_IIO_SYS_INFO_LIB_API_H_
#define _DSA_IIO_SYS_INFO_LIB_API_H_

#include <Base.h>
#include <Library/IioSysInfoLib.h>
//@AdditionalIncludes

#define DSA_IIO_SYS_INFO_LIB_API_GUID { 0x8A561D10, 0x96D6, 0x436F, { 0xA5, 0xD6, 0xFB, 0x6C, 0x19, 0xB7, 0xAC, 0xA5 } }

#define DSA_IIO_SYS_INFO_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_IIO_SYS_INFO_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Iio\Library\IioSysInfoLib\IioSysInfoLib.inf// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:63
typedef
UINT8
(EFIAPI *DSA_GetMaxNtbNumPerSocket) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Iio\Library\IioSysInfoLib\IioSysInfoLib.inf// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:211
typedef
UINT8
(EFIAPI *DSA_IioPortIndexToStackPort) (
  UINT8 PortIdx,
  UINT8 * StackPtr
  );

// From: v:\intel\ServerSiliconPkg\Iio\Library\IioSysInfoLib\IioSysInfoLib.inf// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:163
typedef
EFI_STATUS
(EFIAPI *DSA_GetNtbPortPerPortIndex) (
  UINT8 PortIndex,
  UINT8 * NtbPortIndex
  );

// From: v:\intel\ServerSiliconPkg\Iio\Library\IioSysInfoLib\IioSysInfoLib.inf// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:91
typedef
UINT8
(EFIAPI *DSA_GetMaxStackNumPerSocket) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Iio\Library\IioSysInfoLib\IioSysInfoLib.inf// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:39
typedef
UINT8
(EFIAPI *DSA_GetMaxPortNumPerSocket) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Iio\Library\IioSysInfoLib\IioSysInfoLib.inf// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:131
typedef
EFI_STATUS
(EFIAPI *DSA_IioGetIouIndexByStackIndex) (
  UINT8 Stack,
  UINT8 * IouIndex
  );

// From: v:\intel\ServerSiliconPkg\Iio\Library\IioSysInfoLib\IioSysInfoLib.inf// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:196
typedef
UINT8
(EFIAPI *DSA_GetPortIndexbyStack) (
  UINT8 StackIndex,
  UINT8 PortIndex
  );

// From: v:\intel\ServerSiliconPkg\Iio\Library\IioSysInfoLib\IioSysInfoLib.inf// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:51
typedef
UINT8
(EFIAPI *DSA_GetMaxIouNumPerSocket) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Iio\Library\IioSysInfoLib\IioSysInfoLib.inf// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:77
typedef
UINT8
(EFIAPI *DSA_GetMaxPortNumPerIou) (
   VOID
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_GetMaxNtbNumPerSocket GetMaxNtbNumPerSocket; // v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:63
  DSA_IioPortIndexToStackPort IioPortIndexToStackPort; // v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:211
  DSA_GetNtbPortPerPortIndex GetNtbPortPerPortIndex; // v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:163
  DSA_GetMaxStackNumPerSocket GetMaxStackNumPerSocket; // v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:91
  DSA_GetMaxPortNumPerSocket GetMaxPortNumPerSocket; // v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:39
  DSA_IioGetIouIndexByStackIndex IioGetIouIndexByStackIndex; // v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:131
  DSA_GetPortIndexbyStack GetPortIndexbyStack; // v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:196
  DSA_GetMaxIouNumPerSocket GetMaxIouNumPerSocket; // v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:51
  DSA_GetMaxPortNumPerIou GetMaxPortNumPerIou; // v:/intel/ServerSiliconPkg/Iio/Include/Library/IioSysInfoLib.h:77
//@AdditionalApiStruct
} DSA_IIO_SYS_INFO_LIB_API;

#endif // _DSA_IIO_SYS_INFO_LIB_API_H_
