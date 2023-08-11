/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_GPIO_GSX_LIB_API_H_
#define _DSA_GPIO_GSX_LIB_API_H_

#include <Base.h>
#include <Library/GpioGsxLib.h>
//@AdditionalIncludes

#define DSA_GPIO_GSX_LIB_API_GUID { 0x852373EB, 0x6885, 0x4A5D, { 0x8A, 0x30, 0xBB, 0x58, 0x20, 0xB0, 0x72, 0xFF } }

#define DSA_GPIO_GSX_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_GPIO_GSX_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Gpio\Library\PeiDxeSmmGsxLib\PeiDxeSmmGsxLibVer3.inf// v:/intel/ClientOneSiliconPkg/Include/Library/GpioGsxLib.h:59
typedef
EFI_STATUS
(EFIAPI *DSA_GsxRead) (
  UINT16 GpioCom,
  UINT32 * Data
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Gpio\Library\PeiDxeSmmGsxLib\PeiDxeSmmGsxLibVer3.inf// v:/intel/ClientOneSiliconPkg/Include/Library/GpioGsxLib.h:42
typedef
EFI_STATUS
(EFIAPI *DSA_InitGSX) (
  UINT16 GpioCom,
  UINT16 NIn,
  UINT16 NOut
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_GsxRead GsxRead; // v:/intel/ClientOneSiliconPkg/Include/Library/GpioGsxLib.h:59
  DSA_InitGSX InitGSX; // v:/intel/ClientOneSiliconPkg/Include/Library/GpioGsxLib.h:42
//@AdditionalApiStruct
} DSA_GPIO_GSX_LIB_API;

#endif // _DSA_GPIO_GSX_LIB_API_H_
