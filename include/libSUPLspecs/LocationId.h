/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 * 	found in "../asn1/ULP_COMPONENTS.asn1"
 * 	`asn1c -fincludes-quoted`
 */

#ifndef	_LocationId_H_
#define	_LocationId_H_


#include "asn_application.h"

/* Including external dependencies */
#include "CellInfo.h"
#include "Status.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LocationId */
typedef struct LocationId {
	CellInfo_t	 cellInfo;
	Status_t	 status;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LocationId_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LocationId;

#ifdef __cplusplus
}
#endif

#endif	/* _LocationId_H_ */
#include "asn_internal.h"
