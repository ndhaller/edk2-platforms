/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_GPIO_LIB_API_H_
#define _DSA_GPIO_LIB_API_H_

#include <Base.h>
#include <Library/GpioLib.h>
//@AdditionalIncludes

#define DSA_GPIO_LIB_API_GUID { 0xFA9B44D3, 0xF2EC, 0x4CDD, { 0x95, 0xDB, 0xFB, 0xB7, 0xE8, 0x5A, 0x75, 0x7B } }

#define DSA_GPIO_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_GPIO_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Gpio\Library\PeiDxeSmmGpioLib\PeiDxeSmmGpioLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:707
typedef
EFI_STATUS
(EFIAPI *DSA_GpioClearGpiSmiSts) (
  GPIO_PAD GpioPad
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Gpio\Library\PeiDxeSmmGpioLib\PeiDxeSmmGpioLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:187
typedef
EFI_STATUS
(EFIAPI *DSA_GpioSetInputInversion) (
  GPIO_PAD GpioPad,
  UINT32 Value
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Gpio\Library\PeiDxeSmmGpioLib\PeiDxeSmmGpioLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:89
typedef
EFI_STATUS
(EFIAPI *DSA_GpioGetPadConfig) (
  GPIO_PAD GpioPad,
  GPIO_CONFIG * GpioData
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Gpio\Library\PeiDxeSmmGpioLib\PeiDxeSmmGpioLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:156
typedef
EFI_STATUS
(EFIAPI *DSA_GpioGetInputValue) (
  GPIO_PAD GpioPad,
  UINT32 * InputVal
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Gpio\Library\PeiDxeSmmGpioLib\PeiDxeSmmGpioLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:104
typedef
EFI_STATUS
(EFIAPI *DSA_GpioSetPadConfig) (
  GPIO_PAD GpioPad,
  GPIO_CONFIG * GpioData
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Gpio\Library\PeiDxeSmmGpioLib\PeiDxeSmmGpioLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:799
typedef
EFI_STATUS
(EFIAPI *DSA_GpioGetGpiSmiSts) (
  GPIO_PAD GpioPad,
  BOOLEAN * SmiSts
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Gpio\Library\PeiDxeSmmGpioLib\PeiDxeSmmGpioLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:203
typedef
EFI_STATUS
(EFIAPI *DSA_GpioGetInputInversion) (
  GPIO_PAD GpioPad,
  UINT32 * InvertState
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Gpio\Library\PeiDxeSmmGpioLib\PeiDxeSmmGpioLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:742
typedef
EFI_STATUS
(EFIAPI *DSA_GpioGetGpiSmiNum) (
  GPIO_PAD GpioPad,
  UINTN * GpiNum
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Gpio\Library\PeiDxeSmmGpioLib\PeiDxeSmmGpioLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:124
typedef
EFI_STATUS
(EFIAPI *DSA_GpioSetOutputValue) (
  GPIO_PAD GpioPad,
  UINT32 Value
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Gpio\Library\PeiDxeSmmGpioLib\PeiDxeSmmGpioLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:70
typedef
EFI_STATUS
(EFIAPI *DSA_GpioConfigurePads) (
  UINT32 NumberOfItems,
  GPIO_INIT_CONFIG * GpioInitTableAddress
  );

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Gpio\Library\PeiDxeSmmGpioLib\PeiDxeSmmGpioLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:474
typedef
EFI_STATUS
(EFIAPI *DSA_GpioUnlockPadCfg) (
  GPIO_PAD GpioPad
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_GpioClearGpiSmiSts GpioClearGpiSmiSts; // v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:707
  DSA_GpioSetInputInversion GpioSetInputInversion; // v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:187
  DSA_GpioGetPadConfig GpioGetPadConfig; // v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:89
  DSA_GpioGetInputValue GpioGetInputValue; // v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:156
  DSA_GpioSetPadConfig GpioSetPadConfig; // v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:104
  DSA_GpioGetGpiSmiSts GpioGetGpiSmiSts; // v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:799
  DSA_GpioGetInputInversion GpioGetInputInversion; // v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:203
  DSA_GpioGetGpiSmiNum GpioGetGpiSmiNum; // v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:742
  DSA_GpioSetOutputValue GpioSetOutputValue; // v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:124
  DSA_GpioConfigurePads GpioConfigurePads; // v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:70
  DSA_GpioUnlockPadCfg GpioUnlockPadCfg; // v:/intel/ClientOneSiliconPkg/Include/Library/GpioLib.h:474
//@AdditionalApiStruct
} DSA_GPIO_LIB_API;

#endif // _DSA_GPIO_LIB_API_H_
