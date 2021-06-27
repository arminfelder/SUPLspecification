/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 * 	found in "../asn1/ULP_COMPONENTS.asn1"
 * 	`asn1c -fincludes-quoted`
 */

#ifndef	_StatusCode_H_
#define	_StatusCode_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum StatusCode {
	StatusCode_unspecified	= 0,
	StatusCode_systemFailure	= 1,
	StatusCode_unexpectedMessage	= 2,
	StatusCode_protocolError	= 3,
	StatusCode_dataMissing	= 4,
	StatusCode_unexpectedDataValue	= 5,
	StatusCode_posMethodFailure	= 6,
	StatusCode_posMethodMismatch	= 7,
	StatusCode_posProtocolMismatch	= 8,
	StatusCode_targetSETnotReachable	= 9,
	StatusCode_versionNotSupported	= 10,
	StatusCode_resourceShortage	= 11,
	StatusCode_invalidSessionId	= 12,
	StatusCode_nonProxyModeNotSupported	= 13,
	StatusCode_proxyModeNotSupported	= 14,
	StatusCode_positioningNotPermitted	= 15,
	StatusCode_authNetFailure	= 16,
	StatusCode_authSuplinitFailure	= 17,
	StatusCode_consentDeniedByUser	= 100,
	StatusCode_consentGrantedByUser	= 101
	/*
	 * Enumeration is extensible
	 */
} e_StatusCode;

/* StatusCode */
typedef long	 StatusCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_StatusCode;
asn_struct_free_f StatusCode_free;
asn_struct_print_f StatusCode_print;
asn_constr_check_f StatusCode_constraint;
ber_type_decoder_f StatusCode_decode_ber;
der_type_encoder_f StatusCode_encode_der;
xer_type_decoder_f StatusCode_decode_xer;
xer_type_encoder_f StatusCode_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _StatusCode_H_ */
#include "asn_internal.h"
