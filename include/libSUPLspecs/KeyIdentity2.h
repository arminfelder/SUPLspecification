/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-AUTH-REQ"
 * 	found in "../asn1/SUPL_AUTH_REQ.asn1"
 * 	`asn1c -fincludes-quoted`
 */

#ifndef	_KeyIdentity2_H_
#define	_KeyIdentity2_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* KeyIdentity2 */
typedef BIT_STRING_t	 KeyIdentity2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_KeyIdentity2;
asn_struct_free_f KeyIdentity2_free;
asn_struct_print_f KeyIdentity2_print;
asn_constr_check_f KeyIdentity2_constraint;
ber_type_decoder_f KeyIdentity2_decode_ber;
der_type_encoder_f KeyIdentity2_encode_der;
xer_type_decoder_f KeyIdentity2_decode_xer;
xer_type_encoder_f KeyIdentity2_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _KeyIdentity2_H_ */
#include "asn_internal.h"
