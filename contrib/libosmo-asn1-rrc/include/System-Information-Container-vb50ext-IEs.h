/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_System_Information_Container_vb50ext_IEs_H_
#define	_System_Information_Container_vb50ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* System-Information-Container-vb50ext-IEs */
typedef struct System_Information_Container_vb50ext_IEs {
	OCTET_STRING_t	*sysInfoType22	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} System_Information_Container_vb50ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_System_Information_Container_vb50ext_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _System_Information_Container_vb50ext_IEs_H_ */
#include <asn_internal.h>