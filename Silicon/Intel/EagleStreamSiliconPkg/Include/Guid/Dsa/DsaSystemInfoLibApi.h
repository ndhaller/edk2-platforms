/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_SYSTEM_INFO_LIB_API_H_
#define _DSA_SYSTEM_INFO_LIB_API_H_

#include <Base.h>
#include <Library/SystemInfoLib.h>
//@AdditionalIncludes

#define DSA_SYSTEM_INFO_LIB_API_GUID { 0x93523EA1, 0x9DE4, 0x4928, { 0xBA, 0x24, 0x4C, 0xA7, 0x25, 0xBE, 0x3D, 0xF7 } }

#define DSA_SYSTEM_INFO_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_SYSTEM_INFO_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Library\SystemInfoLib\SystemInfoLibDxe.inf// v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:55
typedef
CPU_CSR_ACCESS_VAR *
(EFIAPI *DSA_GetSysCpuCsrAccessVar) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Library\SystemInfoLib\SystemInfoLibDxe.inf// v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:242
typedef
SYS_INFO_VAR_NVRAM *
(EFIAPI *DSA_GetSysInfoVarNvramPtr) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Library\SystemInfoLib\SystemInfoLibDxe.inf// v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:656
typedef
UINT8
(EFIAPI *DSA_GetNumChannelPerMc) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Library\SystemInfoLib\SystemInfoLibDxe.inf// v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:668
typedef
UINT8
(EFIAPI *DSA_GetMaxImc) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Library\SystemInfoLib\SystemInfoLibDxe.inf// v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:332
typedef
BootMode
(EFIAPI *DSA_GetSysBootMode) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Library\SystemInfoLib\SystemInfoLibDxe.inf// v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:740
typedef
UINT8
(EFIAPI *DSA_GetMaxIoHbm) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Library\SystemInfoLib\SystemInfoLibDxe.inf// v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:704
typedef
UINT8
(EFIAPI *DSA_GetNumChannelPerIoHbm) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Library\SystemInfoLib\SystemInfoLibPei.inf// v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:77
typedef
UINT8
(EFIAPI *DSA_GetSysResetRequired) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Library\SystemInfoLib\SystemInfoLibPei.inf// v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:90
typedef
VOID
(EFIAPI *DSA_SetSysResetRequired) (
  UINT8 ResetRequired
  );

// From: v:\intel\ServerSiliconPkg\Library\SystemInfoLib\SystemInfoLibPei.inf// v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:138
typedef
UINT32
(EFIAPI *DSA_GetMeRequestedSize) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Library\SystemInfoLib\SystemInfoLibPei.inf// v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:112
typedef
UINT8
(EFIAPI *DSA_GetEmulation) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Library\SystemInfoLib\SystemInfoLibPei.inf// v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:306
typedef
UINT8
(EFIAPI *DSA_GetSysSbspSocketIdNv) (
   VOID
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_GetSysCpuCsrAccessVar GetSysCpuCsrAccessVar; // v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:55
  DSA_GetSysInfoVarNvramPtr GetSysInfoVarNvramPtr; // v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:242
  DSA_GetNumChannelPerMc GetNumChannelPerMc; // v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:656
  DSA_GetMaxImc GetMaxImc; // v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:668
  DSA_GetSysBootMode GetSysBootMode; // v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:332
  DSA_GetMaxIoHbm GetMaxIoHbm; // v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:740
  DSA_GetNumChannelPerIoHbm GetNumChannelPerIoHbm; // v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:704
  DSA_GetSysResetRequired GetSysResetRequired; // v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:77
  DSA_SetSysResetRequired SetSysResetRequired; // v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:90
  DSA_GetMeRequestedSize GetMeRequestedSize; // v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:138
  DSA_GetEmulation GetEmulation; // v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:112
  DSA_GetSysSbspSocketIdNv GetSysSbspSocketIdNv; // v:/intel/CpRcPkg/Include/Library/SystemInfoLib.h:306
//@AdditionalApiStruct
} DSA_SYSTEM_INFO_LIB_API;

#endif // _DSA_SYSTEM_INFO_LIB_API_H_
