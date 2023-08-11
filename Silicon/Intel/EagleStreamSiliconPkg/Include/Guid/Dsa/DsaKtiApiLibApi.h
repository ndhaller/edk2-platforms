/** @file
  API providing dynamic access to silicon specific library functions
  The API is basically a struct that can be published to PPI or protocol databases

  File contents are tool generated, avoid modification where possible.

  @copyright
  Copyright (C) 2023 Intel Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _DSA_KTI_API_LIB_API_H_
#define _DSA_KTI_API_LIB_API_H_

#include <Base.h>
#include <Library/KtiApi.h>
//@AdditionalIncludes

#define DSA_KTI_API_LIB_API_GUID { 0x88B18785, 0xF39B, 0x48FE, { 0xB5, 0xB9, 0xD8, 0xA0, 0x46, 0x9B, 0x1A, 0x4F } }

#define DSA_KTI_API_LIB_API_SIGNATURE  SIGNATURE_32('D', 'S', 'A', 'I')
#define DSA_KTI_API_LIB_API_VERSION_1  1

// From: v:\intel\ServerSiliconPkg\Upi\Library\KtiApiLib\KtiApiLib.inf// v:/intel/CpRcPkg/Include/Library/KtiApi.h:420
typedef
BOOLEAN
(EFIAPI *DSA_SocketPresent) (
  UINT32 SocId
  );

// From: v:\intel\ServerSiliconPkg\Upi\Library\KtiApiLib\KtiApiLib.inf// v:/intel/CpRcPkg/Include/Library/KtiApi.h:1057
typedef
BOOLEAN
(EFIAPI *DSA_IsHbmSku) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Upi\Library\KtiApiLib\KtiApiLib.inf// v:/intel/CpRcPkg/Include/Library/KtiApi.h:678
typedef
UINT8
(EFIAPI *DSA_GetMaxPhysicalAddrBits) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Upi\Library\KtiApiLib\KtiApiLib.inf// v:/intel/CpRcPkg/Include/Library/KtiApi.h:146
typedef
UINT8
(EFIAPI *DSA_GetNumOfClusterPerSystem) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Upi\Library\KtiApiLib\KtiApiLib.inf// v:/intel/CpRcPkg/Include/Library/KtiApi.h:576
typedef
UINT8
(EFIAPI *DSA_GetKtiPortCnt) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Upi\Library\KtiApiLib\KtiApiLib.inf// v:/intel/CpRcPkg/Include/Library/KtiApi.h:1212
typedef
UINT32
(EFIAPI *DSA_GetCxlDpUpReservedMmio32Size) (
  UINT8 Socket,
  UINT8 Stack
  );

// From: v:\intel\ServerSiliconPkg\Upi\Library\KtiApiLib\KtiApiLib.inf// v:/intel/CpRcPkg/Include/Library/KtiApi.h:90
typedef
BOOLEAN
(EFIAPI *DSA_IsFeatureEnabled) (
  UINT8 TypeFeature
  );

// From: v:\intel\ServerSiliconPkg\Upi\Library\KtiApiLib\KtiApiLib.inf// v:/intel/CpRcPkg/Include/Library/KtiApi.h:971
typedef
BOOLEAN
(EFIAPI *DSA_IsStackCxl20Capable) (
  UINT8 SocketId,
  UINT8 StackId
  );

// From: v:\intel\ServerSiliconPkg\Upi\Library\KtiApiLib\KtiApiLib.inf// v:/intel/CpRcPkg/Include/Library/KtiApi.h:790
typedef
UINT8
(EFIAPI *DSA_GetCxlStatus) (
  UINT8 SocId,
  UINT8 StackId
  );

// From: v:\intel\ServerSiliconPkg\Upi\Library\KtiApiLib\KtiApiLib.inf// v:/intel/CpRcPkg/Include/Library/KtiApi.h:1198
typedef
UINT8
(EFIAPI *DSA_GetCxlPortNumber) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Upi\Library\KtiApiLib\KtiApiLib.inf// v:/intel/CpRcPkg/Include/Library/KtiApi.h:1114
typedef
UINT8
(EFIAPI *DSA_GetPchPresentBitMap) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Upi\Library\KtiApiLib\KtiApiLib.inf// v:/intel/CpRcPkg/Include/Library/KtiApi.h:1280
typedef
UINT8
(EFIAPI *DSA_GetStackId) (
  UINT8 Socket,
  UINT8 StackFwInstance
  );

// From: v:\intel\ServerSiliconPkg\Upi\Library\KtiApiLib\KtiApiLib.inf// v:/intel/CpRcPkg/Include/Library/KtiApi.h:433
typedef
UINT8
(EFIAPI *DSA_GetSocketsAvailable) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Upi\Library\KtiApiLib\KtiApiLib.inf// v:/intel/CpRcPkg/Include/Library/KtiApi.h:265
typedef
BOOLEAN
(EFIAPI *DSA_GetStackPersonality) (
  UINT8 SocId,
  UINT8 StackId,
  UINT8 Personality
  );

// From: v:\intel\ServerSiliconPkg\Upi\Library\KtiApiLib\KtiApiLib.inf// v:/intel/CpRcPkg/Include/Library/KtiApi.h:233
typedef
UINT8
(EFIAPI *DSA_GetSystemRasType) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Upi\Library\KtiApiLib\KtiApiLib.inf// v:/intel/CpRcPkg/Include/Library/KtiApi.h:315
typedef
UINT8
(EFIAPI *DSA_GetIoDcMode) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Upi\Library\KtiApiLib\KtiApiLib.inf// v:/intel/CpRcPkg/Include/Library/KtiApi.h:706
typedef
UINT8
(EFIAPI *DSA_GetLatestConsumePA) (
   VOID
  );

// From: v:\intel\ServerSiliconPkg\Upi\Library\KtiApiLib\KtiApiLib.inf// v:/intel/CpRcPkg/Include/Library/KtiApi.h:329
typedef
UINT8
(EFIAPI *DSA_GetSegmentNum) (
  UINT8 SocId
  );

// From: v:\intel\ServerSiliconPkg\Upi\Library\KtiApiLib\KtiApiLib.inf// v:/intel/CpRcPkg/Include/Library/KtiApi.h:299
typedef
VOID
(EFIAPI *DSA_GetStackResource) (
  UINT8 SocId,
  UINT8 Stack,
  KTI_STACK_RESOURCE * StackResouce
  );

//@AdditionalTypedefs

// Abstracting silicon functional implementations from OpenBoardPkg code
typedef struct {
  UINT32                                      Signature;
  UINT32                                      Version;

  DSA_SocketPresent SocketPresent; // v:/intel/CpRcPkg/Include/Library/KtiApi.h:420
  DSA_IsHbmSku IsHbmSku; // v:/intel/CpRcPkg/Include/Library/KtiApi.h:1057
  DSA_GetMaxPhysicalAddrBits GetMaxPhysicalAddrBits; // v:/intel/CpRcPkg/Include/Library/KtiApi.h:678
  DSA_GetNumOfClusterPerSystem GetNumOfClusterPerSystem; // v:/intel/CpRcPkg/Include/Library/KtiApi.h:146
  DSA_GetKtiPortCnt GetKtiPortCnt; // v:/intel/CpRcPkg/Include/Library/KtiApi.h:576
  DSA_GetCxlDpUpReservedMmio32Size GetCxlDpUpReservedMmio32Size; // v:/intel/CpRcPkg/Include/Library/KtiApi.h:1212
  DSA_IsFeatureEnabled IsFeatureEnabled; // v:/intel/CpRcPkg/Include/Library/KtiApi.h:90
  DSA_IsStackCxl20Capable IsStackCxl20Capable; // v:/intel/CpRcPkg/Include/Library/KtiApi.h:971
  DSA_GetCxlStatus GetCxlStatus; // v:/intel/CpRcPkg/Include/Library/KtiApi.h:790
  DSA_GetCxlPortNumber GetCxlPortNumber; // v:/intel/CpRcPkg/Include/Library/KtiApi.h:1198
  DSA_GetPchPresentBitMap GetPchPresentBitMap; // v:/intel/CpRcPkg/Include/Library/KtiApi.h:1114
  DSA_GetStackId GetStackId; // v:/intel/CpRcPkg/Include/Library/KtiApi.h:1280
  DSA_GetSocketsAvailable GetSocketsAvailable; // v:/intel/CpRcPkg/Include/Library/KtiApi.h:433
  DSA_GetStackPersonality GetStackPersonality; // v:/intel/CpRcPkg/Include/Library/KtiApi.h:265
  DSA_GetSystemRasType GetSystemRasType; // v:/intel/CpRcPkg/Include/Library/KtiApi.h:233
  DSA_GetIoDcMode GetIoDcMode; // v:/intel/CpRcPkg/Include/Library/KtiApi.h:315
  DSA_GetLatestConsumePA GetLatestConsumePA; // v:/intel/CpRcPkg/Include/Library/KtiApi.h:706
  DSA_GetSegmentNum GetSegmentNum; // v:/intel/CpRcPkg/Include/Library/KtiApi.h:329
  DSA_GetStackResource GetStackResource; // v:/intel/CpRcPkg/Include/Library/KtiApi.h:299
//@AdditionalApiStruct
} DSA_KTI_API_LIB_API;

#endif // _DSA_KTI_API_LIB_API_H_
