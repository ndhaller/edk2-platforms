/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_PCH_INFO_LIB_API_H_
#define _DSA_PCH_INFO_LIB_API_H_

#include <Base.h>
#include <Library/PchInfoLib.h>
//@AdditionalIncludes

#define DSA_PCH_INFO_LIB_API_GUID { 0x795E145F, 0x3587, 0x41E6, { 0x91, 0xD6, 0x64, 0xCC, 0x95, 0x34, 0xCF, 0x32 } }

#define DSA_PCH_INFO_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_PCH_INFO_LIB_API_VERSION_1  1

// From: v:\intel\ClientOneSiliconPkg\Fru\EbgPch\Library\PeiDxeSmmPchInfoLib\PeiDxeSmmPchInfoLibEbg.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:384
typedef
CHAR8 *
(EFIAPI *DSA_PchGetSeriesStr) (

  );

// From: v:\intel\ClientOneSiliconPkg\Fru\EbgPch\Library\PeiDxeSmmPchInfoLib\PeiDxeSmmPchInfoLibEbg.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:394
typedef
CHAR8 *
(EFIAPI *DSA_PchGetSkuStr) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\Fru\EbgPch\Library\PeiDxeSmmPchInfoLib\PeiDxeSmmPchInfoLibEbg.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:372
typedef
EFI_STATUS
(EFIAPI *DSA_PchGetSteppingStr) (
  CHAR8 * Buffer,
  UINT32 BufferSize
  );

// From: v:\intel\ClientOneSiliconPkg\Fru\EbgPch\Library\PeiDxeSmmPchInfoLib\PeiDxeSmmPchInfoLibEbg.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:192
typedef
UINT8
(EFIAPI *DSA_GetPchMaxPciePortNum) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\Fru\EbgPch\Library\PeiDxeSmmPchInfoLib\PeiDxeSmmPchInfoLibEbg.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:202
typedef
UINT8
(EFIAPI *DSA_GetPchMaxPcieControllerNum) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\Fru\EbgPch\Library\PeiDxeSmmPchInfoLib\PeiDxeSmmPchInfoLibEbg.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:212
typedef
UINT8
(EFIAPI *DSA_GetPchMaxPcieClockNum) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\Fru\EbgPch\Library\PeiDxeSmmPchInfoLib\PeiDxeSmmPchInfoLibEbg.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:73
typedef
BOOLEAN
(EFIAPI *DSA_IsPchSupported) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\Fru\EbgPch\Library\PeiDxeSmmPchInfoLib\PeiDxeSmmPchInfoLibEbg.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:62
typedef
PCH_STEPPING
(EFIAPI *DSA_PchStepping) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\Fru\EbgPch\Library\PeiDxeSmmPchInfoLib\PeiDxeSmmPchInfoLibEbg.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:52
typedef
UINT16
(EFIAPI *DSA_PchGetLpcDid) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\Fru\EbgPch\Library\PeiDxeSmmPchInfoLib\PeiDxeSmmPchInfoLibEbg.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:83
typedef
PCH_SERIES
(EFIAPI *DSA_PchSeries) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\Fru\EbgPch\Library\PeiDxeSmmPchInfoLib\PeiDxeSmmPchInfoLibEbg.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:242
typedef
UINT8
(EFIAPI *DSA_GetPchXhciMaxUsb3PortNum) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\Fru\EbgPch\Library\PeiDxeSmmPchInfoLib\PeiDxeSmmPchInfoLibEbg.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:222
typedef
UINT8
(EFIAPI *DSA_GetPchUsb2MaxPhysicalPortNum) (
   VOID
  );

// From: v:\intel\ClientOneSiliconPkg\Fru\EbgPch\Library\PeiDxeSmmPchInfoLib\PeiDxeSmmPchInfoLibEbg.inf// v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:292
typedef
UINT8
(EFIAPI *DSA_GetPchMaxSerialIoUartControllersNum) (
   VOID
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_PchGetSeriesStr PchGetSeriesStr; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:384
  DSA_PchGetSkuStr PchGetSkuStr; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:394
  DSA_PchGetSteppingStr PchGetSteppingStr; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:372
  DSA_GetPchMaxPciePortNum GetPchMaxPciePortNum; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:192
  DSA_GetPchMaxPcieControllerNum GetPchMaxPcieControllerNum; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:202
  DSA_GetPchMaxPcieClockNum GetPchMaxPcieClockNum; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:212
  DSA_IsPchSupported IsPchSupported; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:73
  DSA_PchStepping PchStepping; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:62
  DSA_PchGetLpcDid PchGetLpcDid; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:52
  DSA_PchSeries PchSeries; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:83
  DSA_GetPchXhciMaxUsb3PortNum GetPchXhciMaxUsb3PortNum; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:242
  DSA_GetPchUsb2MaxPhysicalPortNum GetPchUsb2MaxPhysicalPortNum; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:222
  DSA_GetPchMaxSerialIoUartControllersNum GetPchMaxSerialIoUartControllersNum; // v:/intel/ClientOneSiliconPkg/Pch/Include/Library/PchInfoLib.h:292
//@AdditionalApiStruct
} DSA_PCH_INFO_LIB_API;

#endif // _DSA_PCH_INFO_LIB_API_H_
