/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_ESPI_LIB_API_H_
#define _DSA_ESPI_LIB_API_H_

#include <Base.h>
#include <Library/EspiLib.h>
//@AdditionalIncludes

#define DSA_ESPI_LIB_API_GUID { 0xF19E0ABD, 0xBC07, 0x44AE, { 0xAA, 0x7E, 0xAC, 0x74, 0x48, 0x9F, 0xDB, 0x51 } }

#define DSA_ESPI_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_ESPI_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\IpBlock\Espi\Library\PeiDxeSmmEspiLib\PeiDxeSmmEspiLib.inf// v:/intel/ClientOneSiliconPkg/Include/Library/EspiLib.h:73
typedef
BOOLEAN
(EFIAPI *DSA_IsEspiEnabled) (
   VOID
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_IsEspiEnabled IsEspiEnabled; // v:/intel/ClientOneSiliconPkg/Include/Library/EspiLib.h:73
//@AdditionalApiStruct
} DSA_ESPI_LIB_API;

#endif // _DSA_ESPI_LIB_API_H_
