/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-RESPONSE"
 * 	found in "../asn1/SUPL_RESPONSE.asn1"
 * 	`asn1c -fincludes-quoted`
 */

#ifndef	_SUPLRESPONSE_H_
#define	_SUPLRESPONSE_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PosMethod.h"
#include "KeyIdentity4.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SLPAddress;
struct SETAuthKey;

/* SUPLRESPONSE */
typedef struct SUPLRESPONSE {
	PosMethod_t	 posMethod;
	struct SLPAddress	*sLPAddress	/* OPTIONAL */;
	struct SETAuthKey	*sETAuthKey	/* OPTIONAL */;
	KeyIdentity4_t	*keyIdentity4	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SUPLRESPONSE_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SUPLRESPONSE;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SLPAddress.h"
#include "SETAuthKey.h"

#endif	/* _SUPLRESPONSE_H_ */
#include "asn_internal.h"
