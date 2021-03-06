/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-END"
 * 	found in "../asn1/SUPL_END.asn1"
 * 	`asn1c -fincludes-quoted`
 */

#ifndef	_SUPLEND_H_
#define	_SUPLEND_H_


#include "asn_application.h"

/* Including external dependencies */
#include "StatusCode.h"
#include "Ver.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Position;

/* SUPLEND */
typedef struct SUPLEND {
	struct Position	*position	/* OPTIONAL */;
	StatusCode_t	*statusCode	/* OPTIONAL */;
	Ver_t	*ver	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SUPLEND_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SUPLEND;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Position.h"

#endif	/* _SUPLEND_H_ */
#include "asn_internal.h"
