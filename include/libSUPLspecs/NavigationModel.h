/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-POS-INIT"
 * 	found in "../asn1/SUPL_POS_INIT.asn1"
 * 	`asn1c -fincludes-quoted`
 */

#ifndef	_NavigationModel_H_
#define	_NavigationModel_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SatelliteInfo;

/* NavigationModel */
typedef struct NavigationModel {
	long	 gpsWeek;
	long	 gpsToe;
	long	 nSAT;
	long	 toeLimit;
	struct SatelliteInfo	*satInfo	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NavigationModel_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NavigationModel;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SatelliteInfo.h"

#endif	/* _NavigationModel_H_ */
#include "asn_internal.h"
