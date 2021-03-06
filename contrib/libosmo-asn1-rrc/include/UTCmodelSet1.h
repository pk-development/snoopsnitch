/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UTCmodelSet1_H_
#define	_UTCmodelSet1_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UTCmodelSet1 */
typedef struct UTCmodelSet1 {
	BIT_STRING_t	 utcA0;
	BIT_STRING_t	 utcA1;
	BIT_STRING_t	 utcA2;
	BIT_STRING_t	 utcDeltaTls;
	BIT_STRING_t	 utcTot;
	BIT_STRING_t	 utcWNot;
	BIT_STRING_t	 utcWNlsf;
	BIT_STRING_t	 utcDN;
	BIT_STRING_t	 utcDeltaTlsf;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UTCmodelSet1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UTCmodelSet1;

#ifdef __cplusplus
}
#endif

#endif	/* _UTCmodelSet1_H_ */
#include <asn_internal.h>
