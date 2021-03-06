/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 * 	found in "../asn1/ULP_COMPONENTS.asn1"
 * 	`asn1c -fincludes-quoted`
 */

#include "FQDN.h"

static const int permitted_alphabet_table_1[256] = {
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 0,	/*              -.  */
 3, 4, 5, 6, 7, 8, 9,10,11,12, 0, 0, 0, 0, 0, 0,	/* 0123456789       */
 0,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,	/*  ABCDEFGHIJKLMNO */
28,29,30,31,32,33,34,35,36,37,38, 0, 0, 0, 0, 0,	/* PQRSTUVWXYZ      */
 0,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,	/*  abcdefghijklmno */
54,55,56,57,58,59,60,61,62,63,64, 0, 0, 0, 0, 0,	/* pqrstuvwxyz      */
};

static int check_permitted_alphabet_1(const void *sptr) {
	const int *table = permitted_alphabet_table_1;
	/* The underlying type is VisibleString */
	const VisibleString_t *st = (const VisibleString_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!table[cv]) return -1;
	}
	return 0;
}

int
FQDN_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const VisibleString_t *st = (const VisibleString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 255)
		 && !check_permitted_alphabet_1(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using VisibleString,
 * so here we adjust the DEF accordingly.
 */
static void
FQDN_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_VisibleString.free_struct;
	td->print_struct   = asn_DEF_VisibleString.print_struct;
	td->check_constraints = asn_DEF_VisibleString.check_constraints;
	td->ber_decoder    = asn_DEF_VisibleString.ber_decoder;
	td->der_encoder    = asn_DEF_VisibleString.der_encoder;
	td->xer_decoder    = asn_DEF_VisibleString.xer_decoder;
	td->xer_encoder    = asn_DEF_VisibleString.xer_encoder;
	td->uper_decoder   = asn_DEF_VisibleString.uper_decoder;
	td->uper_encoder   = asn_DEF_VisibleString.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_VisibleString.per_constraints;
	td->elements       = asn_DEF_VisibleString.elements;
	td->elements_count = asn_DEF_VisibleString.elements_count;
	td->specifics      = asn_DEF_VisibleString.specifics;
}

void
FQDN_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	FQDN_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
FQDN_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	FQDN_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
FQDN_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	FQDN_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
FQDN_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	FQDN_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
FQDN_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	FQDN_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
FQDN_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	FQDN_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static const ber_tlv_tag_t asn_DEF_FQDN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (26 << 2))
};
asn_TYPE_descriptor_t asn_DEF_FQDN = {
	"FQDN",
	"FQDN",
	FQDN_free,
	FQDN_print,
	FQDN_constraint,
	FQDN_decode_ber,
	FQDN_encode_der,
	FQDN_decode_xer,
	FQDN_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_FQDN_tags_1,
	sizeof(asn_DEF_FQDN_tags_1)
		/sizeof(asn_DEF_FQDN_tags_1[0]), /* 1 */
	asn_DEF_FQDN_tags_1,	/* Same as above */
	sizeof(asn_DEF_FQDN_tags_1)
		/sizeof(asn_DEF_FQDN_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	0	/* No specifics */
};

