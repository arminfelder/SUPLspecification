/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-AUTH-RESP"
 * 	found in "../asn1/SUPL_AUTH_RESP.asn1"
 * 	`asn1c -fincludes-quoted`
 */

#include "SPCAuthKey.h"

static int
memb_shortKey_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 128)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_longKey_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 256)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_SPCAuthKey_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SPCAuthKey, choice.shortKey),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_shortKey_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"shortKey"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SPCAuthKey, choice.longKey),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_longKey_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"longKey"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SPCAuthKey_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* shortKey */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* longKey */
};
static asn_CHOICE_specifics_t asn_SPC_SPCAuthKey_specs_1 = {
	sizeof(struct SPCAuthKey),
	offsetof(struct SPCAuthKey, _asn_ctx),
	offsetof(struct SPCAuthKey, present),
	sizeof(((struct SPCAuthKey *)0)->present),
	asn_MAP_SPCAuthKey_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SPCAuthKey = {
	"SPCAuthKey",
	"SPCAuthKey",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_SPCAuthKey_1,
	2,	/* Elements count */
	&asn_SPC_SPCAuthKey_specs_1	/* Additional specs */
};

