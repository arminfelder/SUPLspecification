/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-START"
 * 	found in "../asn1/SUPL_START.asn1"
 * 	`asn1c -fincludes-quoted`
 */

#include "PosProtocol.h"

static asn_TYPE_member_t asn_MBR_PosProtocol_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PosProtocol, tia801),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"tia801"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosProtocol, rrlp),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"rrlp"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosProtocol, rrc),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"rrc"
		},
};
static const ber_tlv_tag_t asn_DEF_PosProtocol_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PosProtocol_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tia801 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rrlp */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* rrc */
};
static asn_SEQUENCE_specifics_t asn_SPC_PosProtocol_specs_1 = {
	sizeof(struct PosProtocol),
	offsetof(struct PosProtocol, _asn_ctx),
	asn_MAP_PosProtocol_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PosProtocol = {
	"PosProtocol",
	"PosProtocol",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_PosProtocol_tags_1,
	sizeof(asn_DEF_PosProtocol_tags_1)
		/sizeof(asn_DEF_PosProtocol_tags_1[0]), /* 1 */
	asn_DEF_PosProtocol_tags_1,	/* Same as above */
	sizeof(asn_DEF_PosProtocol_tags_1)
		/sizeof(asn_DEF_PosProtocol_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PosProtocol_1,
	3,	/* Elements count */
	&asn_SPC_PosProtocol_specs_1	/* Additional specs */
};

