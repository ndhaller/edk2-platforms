/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_PEI_UPI_POLICY_LIB_API_H_
#define _DSA_PEI_UPI_POLICY_LIB_API_H_

#include <Base.h>
#include <Library/PeiUpiPolicyLib.h>
//@AdditionalIncludes

#define DSA_PEI_UPI_POLICY_LIB_API_GUID { 0x537E9557, 0x436E, 0x461F, { 0xB8, 0xA0, 0x1D, 0x23, 0x69, 0x23, 0xD4, 0x3F } }

#define DSA_PEI_UPI_POLICY_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_PEI_UPI_POLICY_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Library\PeiUpiPolicyLib\PeiUpiPolicyLib.inf// v:/intel/ServerSiliconPkg/Include/Library/PeiUpiPolicyLib.h:60
typedef
EFI_STATUS
(EFIAPI *DSA_UpiInstallPolicyPpi) (
  UPI_POLICY_PPI * UpiPolicyPpi
  );

// From: v:\intel\ServerSiliconPkg\Library\PeiUpiPolicyLib\PeiUpiPolicyLib.inf// v:/intel/ServerSiliconPkg/Include/Library/PeiUpiPolicyLib.h:44
typedef
EFI_STATUS
(EFIAPI *DSA_UpiCreatePolicyDefaults) (
  UPI_POLICY_PPI * UpiPolicyPpi
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_UpiInstallPolicyPpi UpiInstallPolicyPpi; // v:/intel/ServerSiliconPkg/Include/Library/PeiUpiPolicyLib.h:60
  DSA_UpiCreatePolicyDefaults UpiCreatePolicyDefaults; // v:/intel/ServerSiliconPkg/Include/Library/PeiUpiPolicyLib.h:44
//@AdditionalApiStruct
} DSA_PEI_UPI_POLICY_LIB_API;

#endif // _DSA_PEI_UPI_POLICY_LIB_API_H_
