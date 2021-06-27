/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-START"
 * 	found in "../asn1/SUPL_START.asn1"
 * 	`asn1c -fincludes-quoted`
 */

#ifndef	_PosProtocol_H_
#define	_PosProtocol_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BOOLEAN.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PosProtocol */
typedef struct PosProtocol {
	BOOLEAN_t	 tia801;
	BOOLEAN_t	 rrlp;
	BOOLEAN_t	 rrc;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PosProtocol_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PosProtocol;

#ifdef __cplusplus
}
#endif

#endif	/* _PosProtocol_H_ */
#include "asn_internal.h"
