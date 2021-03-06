/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 * 	found in "../asn1/ULP_COMPONENTS.asn1"
 * 	`asn1c -fincludes-quoted`
 */

#include "StatusCode.h"

int
StatusCode_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
StatusCode_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

void
StatusCode_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	StatusCode_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
StatusCode_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	StatusCode_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
StatusCode_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	StatusCode_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
StatusCode_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	StatusCode_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
StatusCode_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	StatusCode_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
StatusCode_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	StatusCode_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static const asn_INTEGER_enum_map_t asn_MAP_StatusCode_value2enum_1[] = {
	{ 0,	11,	"unspecified" },
	{ 1,	13,	"systemFailure" },
	{ 2,	17,	"unexpectedMessage" },
	{ 3,	13,	"protocolError" },
	{ 4,	11,	"dataMissing" },
	{ 5,	19,	"unexpectedDataValue" },
	{ 6,	16,	"posMethodFailure" },
	{ 7,	17,	"posMethodMismatch" },
	{ 8,	19,	"posProtocolMismatch" },
	{ 9,	21,	"targetSETnotReachable" },
	{ 10,	19,	"versionNotSupported" },
	{ 11,	16,	"resourceShortage" },
	{ 12,	16,	"invalidSessionId" },
	{ 13,	24,	"nonProxyModeNotSupported" },
	{ 14,	21,	"proxyModeNotSupported" },
	{ 15,	23,	"positioningNotPermitted" },
	{ 16,	14,	"authNetFailure" },
	{ 17,	19,	"authSuplinitFailure" },
	{ 100,	19,	"consentDeniedByUser" },
	{ 101,	20,	"consentGrantedByUser" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_StatusCode_enum2value_1[] = {
	16,	/* authNetFailure(16) */
	17,	/* authSuplinitFailure(17) */
	18,	/* consentDeniedByUser(100) */
	19,	/* consentGrantedByUser(101) */
	4,	/* dataMissing(4) */
	12,	/* invalidSessionId(12) */
	13,	/* nonProxyModeNotSupported(13) */
	6,	/* posMethodFailure(6) */
	7,	/* posMethodMismatch(7) */
	8,	/* posProtocolMismatch(8) */
	15,	/* positioningNotPermitted(15) */
	3,	/* protocolError(3) */
	14,	/* proxyModeNotSupported(14) */
	11,	/* resourceShortage(11) */
	1,	/* systemFailure(1) */
	9,	/* targetSETnotReachable(9) */
	5,	/* unexpectedDataValue(5) */
	2,	/* unexpectedMessage(2) */
	0,	/* unspecified(0) */
	10	/* versionNotSupported(10) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_StatusCode_specs_1 = {
	asn_MAP_StatusCode_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_StatusCode_enum2value_1,	/* N => "tag"; sorted by N */
	20,	/* Number of elements in the maps */
	21,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_StatusCode_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_StatusCode = {
	"StatusCode",
	"StatusCode",
	StatusCode_free,
	StatusCode_print,
	StatusCode_constraint,
	StatusCode_decode_ber,
	StatusCode_encode_der,
	StatusCode_decode_xer,
	StatusCode_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_StatusCode_tags_1,
	sizeof(asn_DEF_StatusCode_tags_1)
		/sizeof(asn_DEF_StatusCode_tags_1[0]), /* 1 */
	asn_DEF_StatusCode_tags_1,	/* Same as above */
	sizeof(asn_DEF_StatusCode_tags_1)
		/sizeof(asn_DEF_StatusCode_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* Defined elsewhere */
	&asn_SPC_StatusCode_specs_1	/* Additional specs */
};

