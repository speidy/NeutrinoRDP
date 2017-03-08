/**
 * FreeRDP: A Remote Desktop Protocol Implementation
 * Error Codes
 *
 * Copyright 2012 Marc-Andre Moreau <marcandre.moreau@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FREERDP_ERROR_H
#define FREERDP_ERROR_H

//#include <winpr/crt.h>
//
#include <freerdp/api.h>

#ifdef	__cplusplus
extern "C" {
#endif

/**
 * Error Info Codes (Error Info PDU)
 */

/* Protocol-independent codes */
#define ERRINFO_RPC_INITIATED_DISCONNECT			0x00000001
#define ERRINFO_RPC_INITIATED_LOGOFF				0x00000002
#define ERRINFO_IDLE_TIMEOUT					0x00000003
#define ERRINFO_LOGON_TIMEOUT					0x00000004
#define ERRINFO_DISCONNECTED_BY_OTHER_CONNECTION		0x00000005
#define ERRINFO_OUT_OF_MEMORY					0x00000006
#define ERRINFO_SERVER_DENIED_CONNECTION			0x00000007
#define ERRINFO_SERVER_INSUFFICIENT_PRIVILEGES			0x00000009
#define ERRINFO_SERVER_FRESH_CREDENTIALS_REQUIRED		0x0000000A
#define ERRINFO_RPC_INITIATED_DISCONNECT_BY_USER		0x0000000B
#define ERRINFO_LOGOFF_BY_USER					0x0000000C

/* Protocol-independent codes generated by the Connection Broker */
#define	ERRINFO_CB_DESTINATION_NOT_FOUND			0x0000400
#define	ERRINFO_CB_LOADING_DESTINATION				0x0000402
#define	ERRINFO_CB_REDIRECTING_TO_DESTINATION			0x0000404
#define	ERRINFO_CB_SESSION_ONLINE_VM_WAKE			0x0000405
#define	ERRINFO_CB_SESSION_ONLINE_VM_BOOT			0x0000406
#define	ERRINFO_CB_SESSION_ONLINE_VM_NO_DNS			0x0000407
#define	ERRINFO_CB_DESTINATION_POOL_NOT_FREE			0x0000408
#define	ERRINFO_CB_CONNECTION_CANCELLED				0x0000409
#define	ERRINFO_CB_CONNECTION_ERROR_INVALID_SETTINGS		0x0000410
#define	ERRINFO_CB_SESSION_ONLINE_VM_BOOT_TIMEOUT		0x0000411
#define	ERRINFO_CB_SESSION_ONLINE_VM_SESSMON_FAILED		0x0000412

/* Protocol-independent licensing codes */
#define	ERRINFO_LICENSE_INTERNAL				0x00000100
#define ERRINFO_LICENSE_NO_LICENSE_SERVER			0x00000101
#define ERRINFO_LICENSE_NO_LICENSE				0x00000102
#define ERRINFO_LICENSE_BAD_CLIENT_MSG				0x00000103
#define ERRINFO_LICENSE_HWID_DOESNT_MATCH_LICENSE		0x00000104
#define ERRINFO_LICENSE_BAD_CLIENT_LICENSE			0x00000105
#define ERRINFO_LICENSE_CANT_FINISH_PROTOCOL			0x00000106
#define ERRINFO_LICENSE_CLIENT_ENDED_PROTOCOL			0x00000107
#define ERRINFO_LICENSE_BAD_CLIENT_ENCRYPTION			0x00000108
#define ERRINFO_LICENSE_CANT_UPGRADE_LICENSE			0x00000109
#define ERRINFO_LICENSE_NO_REMOTE_CONNECTIONS			0x0000010A

/* RDP specific codes */
#define ERRINFO_UNKNOWN_DATA_PDU_TYPE				0x000010C9
#define ERRINFO_UNKNOWN_PDU_TYPE				0x000010CA
#define ERRINFO_DATA_PDU_SEQUENCE				0x000010CB
#define ERRINFO_CONTROL_PDU_SEQUENCE				0x000010CD
#define ERRINFO_INVALID_CONTROL_PDU_ACTION			0x000010CE
#define ERRINFO_INVALID_INPUT_PDU_TYPE				0x000010CF
#define ERRINFO_INVALID_INPUT_PDU_MOUSE				0x000010D0
#define ERRINFO_INVALID_REFRESH_RECT_PDU			0x000010D1
#define ERRINFO_CREATE_USER_DATA_FAILED				0x000010D2
#define ERRINFO_CONNECT_FAILED					0x000010D3
#define ERRINFO_CONFIRM_ACTIVE_HAS_WRONG_SHAREID		0x000010D4
#define ERRINFO_CONFIRM_ACTIVE_HAS_WRONG_ORIGINATOR		0x000010D5
#define ERRINFO_PERSISTENT_KEY_PDU_BAD_LENGTH			0x000010DA
#define ERRINFO_PERSISTENT_KEY_PDU_ILLEGAL_FIRST		0x000010DB
#define ERRINFO_PERSISTENT_KEY_PDU_TOO_MANY_TOTAL_KEYS		0x000010DC
#define ERRINFO_PERSISTENT_KEY_PDU_TOO_MANY_CACHE_KEYS		0x000010DD
#define ERRINFO_INPUT_PDU_BAD_LENGTH				0x000010DE
#define ERRINFO_BITMAP_CACHE_ERROR_PDU_BAD_LENGTH		0x000010DF
#define ERRINFO_SECURITY_DATA_TOO_SHORT				0x000010E0
#define ERRINFO_VCHANNEL_DATA_TOO_SHORT				0x000010E1
#define ERRINFO_SHARE_DATA_TOO_SHORT				0x000010E2
#define ERRINFO_BAD_SUPPRESS_OUTPUT_PDU				0x000010E3
#define ERRINFO_CONFIRM_ACTIVE_PDU_TOO_SHORT			0x000010E5
#define ERRINFO_CAPABILITY_SET_TOO_SMALL			0x000010E7
#define ERRINFO_CAPABILITY_SET_TOO_LARGE			0x000010E8
#define ERRINFO_NO_CURSOR_CACHE					0x000010E9
#define ERRINFO_BAD_CAPABILITIES				0x000010EA
#define ERRINFO_VIRTUAL_CHANNEL_DECOMPRESSION			0x000010EC
#define ERRINFO_INVALID_VC_COMPRESSION_TYPE			0x000010ED
#define ERRINFO_INVALID_CHANNEL_ID				0x000010EF
#define ERRINFO_VCHANNELS_TOO_MANY				0x000010F0
#define ERRINFO_REMOTEAPP_NOT_ENABLED				0x000010F3
#define ERRINFO_CACHE_CAP_NOT_SET				0x000010F4
#define ERRINFO_BITMAP_CACHE_ERROR_PDU_BAD_LENGTH2 		0x000010F5
#define ERRINFO_OFFSCREEN_CACHE_ERROR_PDU_BAD_LENGTH		0x000010F6
#define ERRINFO_DRAWNINEGRID_CACHE_ERROR_PDU_BAD_LENGTH		0x000010F7
#define ERRINFO_GDIPLUS_PDU_BAD_LENGTH				0x000010F8
#define ERRINFO_SECURITY_DATA_TOO_SHORT2			0x00001111
#define ERRINFO_SECURITY_DATA_TOO_SHORT3			0x00001112
#define ERRINFO_SECURITY_DATA_TOO_SHORT4			0x00001113
#define ERRINFO_SECURITY_DATA_TOO_SHORT5			0x00001114
#define ERRINFO_SECURITY_DATA_TOO_SHORT6			0x00001115
#define ERRINFO_SECURITY_DATA_TOO_SHORT7			0x00001116
#define ERRINFO_SECURITY_DATA_TOO_SHORT8			0x00001117
#define ERRINFO_SECURITY_DATA_TOO_SHORT9			0x00001118
#define ERRINFO_SECURITY_DATA_TOO_SHORT10			0x00001119
#define ERRINFO_SECURITY_DATA_TOO_SHORT11			0x0000111A
#define ERRINFO_SECURITY_DATA_TOO_SHORT12			0x0000111B
#define ERRINFO_SECURITY_DATA_TOO_SHORT13			0x0000111C
#define ERRINFO_SECURITY_DATA_TOO_SHORT14			0x0000111D
#define ERRINFO_SECURITY_DATA_TOO_SHORT15			0x0000111E
#define ERRINFO_SECURITY_DATA_TOO_SHORT16			0x0000111F
#define ERRINFO_SECURITY_DATA_TOO_SHORT17			0x00001120
#define ERRINFO_SECURITY_DATA_TOO_SHORT18			0x00001121
#define ERRINFO_SECURITY_DATA_TOO_SHORT19			0x00001122
#define ERRINFO_SECURITY_DATA_TOO_SHORT20			0x00001123
#define ERRINFO_SECURITY_DATA_TOO_SHORT21			0x00001124
#define ERRINFO_SECURITY_DATA_TOO_SHORT22			0x00001125
#define ERRINFO_SECURITY_DATA_TOO_SHORT23			0x00001126
#define ERRINFO_BAD_MONITOR_DATA				0x00001129
#define ERRINFO_VC_DECOMPRESSED_REASSEMBLE_FAILED		0x0000112A
#define ERRINFO_VC_DATA_TOO_LONG				0x0000112B
#define ERRINFO_GRAPHICS_MODE_NOT_SUPPORTED			0x0000112D
#define ERRINFO_GRAPHICS_SUBSYSTEM_RESET_FAILED			0x0000112E
#define ERRINFO_GRAPHICS_SUBSYSTEM_FAILED			0x0000112F
#define ERRINFO_TIMEZONE_KEY_NAME_LENGTH_TOO_SHORT		0x00001130
#define ERRINFO_TIMEZONE_KEY_NAME_LENGTH_TOO_LONG		0x00001131
#define ERRINFO_DYNAMIC_DST_DISABLED_FIELD_MISSING		0x00001132
#define ERRINFO_VC_DECODING_ERROR				0x00001133
#define ERRINFO_UPDATE_SESSION_KEY_FAILED			0x00001191
#define ERRINFO_DECRYPT_FAILED					0x00001192
#define ERRINFO_ENCRYPT_FAILED					0x00001193
#define ERRINFO_ENCRYPTION_PACKAGE_MISMATCH			0x00001194
#define ERRINFO_DECRYPT_FAILED2					0x00001195
#define ERRINFO_PEER_DISCONNECTED				0x00001196

#define ERRINFO_SUCCESS						0x00000000
#define ERRINFO_NONE						0xFFFFFFFF

FREERDP_API const char* freerdp_get_error_info_string(uint32 code);
FREERDP_API const char* freerdp_get_error_info_name(uint32 code);

/**
* This static variable holds an error code if the return value from connect is FALSE.
* This variable is always set to 0 in the beginning of the connect sequence.
* The returned code can be used to inform the user of the detailed connect error.
* The value can hold one of the defined error codes below OR an error according to errno
*/

FREERDP_API extern int connectErrorCode;

#define ERRORSTART 10000
#define PREECONNECTERROR ERRORSTART + 1
#define UNDEFINEDCONNECTERROR ERRORSTART + 2
#define POSTCONNECTERROR ERRORSTART + 3
#define DNSERROR ERRORSTART + 4      /* general DNS ERROR */
#define DNSNAMENOTFOUND ERRORSTART + 5 /* EAI_NONAME */
#define CONNECTERROR ERRORSTART + 6  /* a connect error if errno is not define during tcp connect */
#define MCSCONNECTINITIALERROR ERRORSTART + 7
#define TLSCONNECTERROR ERRORSTART + 8
#define AUTHENTICATIONERROR ERRORSTART + 9
#define INSUFFICIENTPRIVILEGESERROR ERRORSTART + 10
#define CANCELEDBYUSER ERRORSTART + 11


/**
 * FreeRDP Context Error Codes
 */

#define MAKE_FREERDP_ERROR(_class, _type) \
	(((FREERDP_ERROR_ ## _class ## _CLASS) << 16) | (_type))

#define GET_FREERDP_ERROR_CLASS(_errorCode) \
	((_errorCode >> 16) & 0xFFFF)

#define GET_FREERDP_ERROR_TYPE(_errorCode) \
	(_errorCode & 0xFFFF)

#define GET_FREERDP_ERROR_SUBCODE

#define FREERDP_ERROR_BASE						0

/**
 * Error Base Codes
 */
#define FREERDP_ERROR_ERRBASE_CLASS					(FREERDP_ERROR_BASE + 0)

#define ERRBASE_SUCCESS							ERRINFO_SUCCESS
#define ERRBASE_NONE							ERRINFO_NONE

FREERDP_API const char* freerdp_get_error_base_string(uint32 code);
FREERDP_API const char* freerdp_get_error_base_name(uint32 code);

#define FREERDP_ERROR_SUCCESS						ERRINFO_SUCCESS
#define FREERDP_ERROR_NONE						ERRINFO_NONE

/* Error Info Codes */

#define FREERDP_ERROR_ERRINFO_CLASS					(FREERDP_ERROR_BASE + 1)

#define FREERDP_ERROR_RPC_INITIATED_DISCONNECT				MAKE_FREERDP_ERROR(ERRINFO, ERRINFO_RPC_INITIATED_DISCONNECT)
#define FREERDP_ERROR_RPC_INITIATED_LOGOFF				MAKE_FREERDP_ERROR(ERRINFO, ERRINFO_RPC_INITIATED_LOGOFF)
#define FREERDP_ERROR_IDLE_TIMEOUT					MAKE_FREERDP_ERROR(ERRINFO, ERRINFO_IDLE_TIMEOUT)
#define FREERDP_ERROR_LOGON_TIMEOUT					MAKE_FREERDP_ERROR(ERRINFO, ERRINFO_LOGON_TIMEOUT)
#define FREERDP_ERROR_DISCONNECTED_BY_OTHER_CONNECTION			MAKE_FREERDP_ERROR(ERRINFO, ERRINFO_DISCONNECTED_BY_OTHER_CONNECTION)
#define FREERDP_ERROR_OUT_OF_MEMORY					MAKE_FREERDP_ERROR(ERRINFO, ERRINFO_OUT_OF_MEMORY)
#define FREERDP_ERROR_SERVER_DENIED_CONNECTION				MAKE_FREERDP_ERROR(ERRINFO, ERRINFO_SERVER_DENIED_CONNECTION)
#define FREERDP_ERROR_SERVER_INSUFFICIENT_PRIVILEGES			MAKE_FREERDP_ERROR(ERRINFO, ERRINFO_SERVER_INSUFFICIENT_PRIVILEGES)
#define FREERDP_ERROR_SERVER_FRESH_CREDENTIALS_REQUIRED			MAKE_FREERDP_ERROR(ERRINFO, ERRINFO_SERVER_FRESH_CREDENTIALS_REQUIRED)
#define FREERDP_ERROR_RPC_INITIATED_DISCONNECT_BY_USER			MAKE_FREERDP_ERROR(ERRINFO, ERRINFO_RPC_INITIATED_DISCONNECT_BY_USER)
#define FREERDP_ERROR_LOGOFF_BY_USER					MAKE_FREERDP_ERROR(ERRINFO, ERRINFO_LOGOFF_BY_USER)

/* Connection Error Codes */
#define ERRCONNECT_PRE_CONNECT_FAILED					0x00000001
#define ERRCONNECT_CONNECT_UNDEFINED					0x00000002
#define ERRCONNECT_POST_CONNECT_FAILED					0x00000003
#define ERRCONNECT_DNS_ERROR						0x00000004
#define ERRCONNECT_DNS_NAME_NOT_FOUND					0x00000005
#define ERRCONNECT_CONNECT_FAILED					0x00000006
#define ERRCONNECT_MCS_CONNECT_INITIAL_ERROR				0x00000007
#define ERRCONNECT_TLS_CONNECT_FAILED					0x00000008
#define ERRCONNECT_AUTHENTICATION_FAILED				0x00000009
#define ERRCONNECT_INSUFFICIENT_PRIVILEGES				0x0000000A
#define ERRCONNECT_CONNECT_CANCELLED					0x0000000B
#define ERRCONNECT_SECURITY_NEGO_CONNECT_FAILED				0x0000000C
#define ERRCONNECT_CONNECT_TRANSPORT_FAILED				0x0000000D

#define ERRCONNECT_SUCCESS						ERRINFO_SUCCESS
#define ERRCONNECT_NONE							ERRINFO_NONE

FREERDP_API const char* freerdp_get_error_connect_string(uint32 code);
FREERDP_API const char* freerdp_get_error_connect_name(uint32 code);

#define FREERDP_ERROR_CONNECT_CLASS					(FREERDP_ERROR_BASE + 2)

#define FREERDP_ERROR_PRE_CONNECT_FAILED \
  MAKE_FREERDP_ERROR(CONNECT, ERRCONNECT_PRE_CONNECT_FAILED)

#define FREERDP_ERROR_CONNECT_UNDEFINED \
  MAKE_FREERDP_ERROR(CONNECT, ERRCONNECT_CONNECT_UNDEFINED)

#define FREERDP_ERROR_POST_CONNECT_FAILED	\
  MAKE_FREERDP_ERROR(CONNECT, ERRCONNECT_POST_CONNECT_FAILED)

#define FREERDP_ERROR_DNS_ERROR	\
  MAKE_FREERDP_ERROR(CONNECT, ERRCONNECT_DNS_ERROR)

#define FREERDP_ERROR_DNS_NAME_NOT_FOUND \
  MAKE_FREERDP_ERROR(CONNECT, ERRCONNECT_DNS_NAME_NOT_FOUND)

#define FREERDP_ERROR_CONNECT_FAILED \
  MAKE_FREERDP_ERROR(CONNECT, ERRCONNECT_CONNECT_FAILED)

#define FREERDP_ERROR_MCS_CONNECT_INITIAL_ERROR \
  MAKE_FREERDP_ERROR(CONNECT, ERRCONNECT_MCS_CONNECT_INITIAL_ERROR)

#define FREERDP_ERROR_TLS_CONNECT_FAILED \
  MAKE_FREERDP_ERROR(CONNECT, ERRCONNECT_TLS_CONNECT_FAILED)

#define FREERDP_ERROR_AUTHENTICATION_FAILED \
  MAKE_FREERDP_ERROR(CONNECT, ERRCONNECT_AUTHENTICATION_FAILED)

#define FREERDP_ERROR_INSUFFICIENT_PRIVILEGES \
  MAKE_FREERDP_ERROR(CONNECT, ERRCONNECT_INSUFFICIENT_PRIVILEGES)

#define FREERDP_ERROR_CONNECT_CANCELLED \
  MAKE_FREERDP_ERROR(CONNECT, ERRCONNECT_CONNECT_CANCELLED)

#define FREERDP_ERROR_SECURITY_NEGO_CONNECT_FAILED \
  MAKE_FREERDP_ERROR(CONNECT, ERRCONNECT_SECURITY_NEGO_CONNECT_FAILED)

#define FREERDP_ERROR_CONNECT_TRANSPORT_FAILED \
  MAKE_FREERDP_ERROR(CONNECT, ERRCONNECT_CONNECT_TRANSPORT_FAILED)

#ifdef	__cplusplus
}
#endif

#endif	/* FREERDP_ERROR_H */
