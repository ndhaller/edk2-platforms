/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_SI_POLICY_LIB_API_H_
#define _DSA_SI_POLICY_LIB_API_H_

#include <Base.h>
#include <Library/SiPolicyLib.h>
//@AdditionalIncludes

#define DSA_SI_POLICY_LIB_API_GUID { 0x4755AE80, 0xC34C, 0x47EA, { 0xAA, 0xB6, 0x8F, 0x0D, 0xB1, 0x23, 0x6A, 0xBF } }

#define DSA_SI_POLICY_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_SI_POLICY_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\Product\EagleStream\Library\PeiSiPolicyLib\PeiSiPolicyLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/SiPolicyLib.h:118
typedef
EFI_STATUS
(EFIAPI *DSA_SiPreMemInstallPolicyReadyPpi) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\Product\EagleStream\Library\PeiSiPolicyLib\PeiSiPolicyLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/SiPolicyLib.h:104
typedef
EFI_STATUS
(EFIAPI *DSA_SiPreMemInstallPolicyPpi) (
  SI_PREMEM_POLICY_PPI * SiPreMemPolicyPpi
  );

// From: v:\intel\ClientOneSiliconPkg\Product\EagleStream\Library\PeiSiPolicyLib\PeiSiPolicyLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/SiPolicyLib.h:73
typedef
EFI_STATUS
(EFIAPI *DSA_SiCreatePreMemConfigBlocks) (
  SI_PREMEM_POLICY_PPI ** SiPreMemPolicyPpi
  );

// From: v:\intel\ClientOneSiliconPkg\Product\EagleStream\Library\PeiSiPolicyLib\PeiSiPolicyLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/SiPolicyLib.h:88
typedef
EFI_STATUS
(EFIAPI *DSA_SiCreateConfigBlocks) (
  SI_POLICY_PPI ** SiPolicyPpi
  );

// From: v:\intel\ClientOneSiliconPkg\Product\EagleStream\Library\PeiSiPolicyLib\PeiSiPolicyLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/SiPolicyLib.h:134
typedef
EFI_STATUS
(EFIAPI *DSA_SiInstallPolicyPpi) (
  SI_POLICY_PPI * SiPolicyPpi
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_SiPreMemInstallPolicyReadyPpi SiPreMemInstallPolicyReadyPpi; // v:/intel/ClientOneSiliconPkg/Include/Library/SiPolicyLib.h:118
  DSA_SiPreMemInstallPolicyPpi SiPreMemInstallPolicyPpi; // v:/intel/ClientOneSiliconPkg/Include/Library/SiPolicyLib.h:104
  DSA_SiCreatePreMemConfigBlocks SiCreatePreMemConfigBlocks; // v:/intel/ClientOneSiliconPkg/Include/Library/SiPolicyLib.h:73
  DSA_SiCreateConfigBlocks SiCreateConfigBlocks; // v:/intel/ClientOneSiliconPkg/Include/Library/SiPolicyLib.h:88
  DSA_SiInstallPolicyPpi SiInstallPolicyPpi; // v:/intel/ClientOneSiliconPkg/Include/Library/SiPolicyLib.h:134
//@AdditionalApiStruct
} DSA_SI_POLICY_LIB_API;

#endif // _DSA_SI_POLICY_LIB_API_H_
