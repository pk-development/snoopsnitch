/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MBMS_CommonRBInformationList_r6_H_
#define	_MBMS_CommonRBInformationList_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBMS_CommonRBInformation_r6;

/* MBMS-CommonRBInformationList-r6 */
typedef struct MBMS_CommonRBInformationList_r6 {
	A_SEQUENCE_OF(struct MBMS_CommonRBInformation_r6) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_CommonRBInformationList_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_CommonRBInformationList_r6;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MBMS-CommonRBInformation-r6.h"

#endif	/* _MBMS_CommonRBInformationList_r6_H_ */
#include <asn_internal.h>