/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_IIO_API_LIB_API_H_
#define _DSA_IIO_API_LIB_API_H_

#include <Base.h>
#include <Library/IioApiLib.h>
//@AdditionalIncludes

#define DSA_IIO_API_LIB_API_GUID { 0xE80B8107, 0xAD35, 0x4839, { 0x80, 0x78, 0xE8, 0x96, 0x17, 0x32, 0x3B, 0xEA } }

#define DSA_IIO_API_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_IIO_API_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Iio\Library\IioApiLib\IioApiLibSpr.inf// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioApiLib.h:258
typedef
VOID
(EFIAPI *DSA_IioPciHookBeforeEnumeration) (
  UINT8 Segment,
  UINT8 Bus,
  UINT8 Device,
  UINT8 Function,
  UINT32 DidVid
  );

// From: v:\intel\ServerSiliconPkg\Iio\Library\IioApiLib\IioApiLibSpr.inf// v:/intel/ServerSiliconPkg/Iio/Include/Library/IioApiLib.h:282
typedef
IIO_KEY_CFG_TYPE
(EFIAPI *DSA_IioKeyConfigBarGet) (
  UINT8 SocketIndex,
  UINT8 StackIndex,
  UINT8 PortIndex,
  UINT8 * Segment,
  UINT8 * PciBusPtr,
  UINT8 * PciDevPtr,
  UINT8 * PciFuncPtr,
  UINT64 * RegisterBaseAddr
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_IioPciHookBeforeEnumeration IioPciHookBeforeEnumeration; // v:/intel/ServerSiliconPkg/Iio/Include/Library/IioApiLib.h:258
  DSA_IioKeyConfigBarGet IioKeyConfigBarGet; // v:/intel/ServerSiliconPkg/Iio/Include/Library/IioApiLib.h:282
//@AdditionalApiStruct
} DSA_IIO_API_LIB_API;

#endif // _DSA_IIO_API_LIB_API_H_
