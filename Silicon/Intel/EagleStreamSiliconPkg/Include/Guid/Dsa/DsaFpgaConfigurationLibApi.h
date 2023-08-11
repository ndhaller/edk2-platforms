/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_FPGA_CONFIGURATION_LIB_API_H_
#define _DSA_FPGA_CONFIGURATION_LIB_API_H_

#include <Base.h>
#include <Library/FpgaConfigurationLib.h>
//@AdditionalIncludes

#define DSA_FPGA_CONFIGURATION_LIB_API_GUID { 0xD9BB7924, 0x7B66, 0x49EA, { 0x9D, 0xF7, 0x6F, 0x21, 0xB1, 0x85, 0x73, 0x45 } }

#define DSA_FPGA_CONFIGURATION_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_FPGA_CONFIGURATION_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Library\FpgaConfigurationLibNull\FpgaConfigurationDxeLibNull.inf// v:/intel/ServerSiliconPkg/Include/Library/FpgaConfigurationLib.h:169
typedef
EFI_STATUS
(EFIAPI *DSA_FpgaConfigurationGetValues) (
  FPGA_CONFIGURATION * FpgaConfigurationPointer
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_FpgaConfigurationGetValues FpgaConfigurationGetValues; // v:/intel/ServerSiliconPkg/Include/Library/FpgaConfigurationLib.h:169
//@AdditionalApiStruct
} DSA_FPGA_CONFIGURATION_LIB_API;

#endif // _DSA_FPGA_CONFIGURATION_LIB_API_H_
