/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_GPIO_SOC_LIB_API_H_
#define _DSA_GPIO_SOC_LIB_API_H_

#include <Base.h>
#include <Library/GpioSocLib.h>
//@AdditionalIncludes

#define DSA_GPIO_SOC_LIB_API_GUID { 0x164E7D95, 0x837F, 0x4915, { 0xAE, 0x11, 0x88, 0xC1, 0x5A, 0xFE, 0x9C, 0x6B } }

#define DSA_GPIO_SOC_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_GPIO_SOC_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\Fru\EbgPch\Library\GpioSocLib\GpioSocLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/GpioSocLib.h:47
typedef
EFI_STATUS
(EFIAPI *DSA_GpioIoeConfigurePads) (
  UINT32 NumberOfItems,
  GPIO_INIT_CONFIG * GpioInitTableAddress
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_GpioIoeConfigurePads GpioIoeConfigurePads; // v:/intel/ClientOneSiliconPkg/Include/Library/GpioSocLib.h:47
//@AdditionalApiStruct
} DSA_GPIO_SOC_LIB_API;

#endif // _DSA_GPIO_SOC_LIB_API_H_
