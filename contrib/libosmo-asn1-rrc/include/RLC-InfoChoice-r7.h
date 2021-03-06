/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_RLC_InfoChoice_r7_H_
#define	_RLC_InfoChoice_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RLC-Info-r7.h"
#include "RB-Identity.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RLC_InfoChoice_r7_PR {
	RLC_InfoChoice_r7_PR_NOTHING,	/* No components present */
	RLC_InfoChoice_r7_PR_rlc_Info,
	RLC_InfoChoice_r7_PR_same_as_RB
} RLC_InfoChoice_r7_PR;

/* RLC-InfoChoice-r7 */
typedef struct RLC_InfoChoice_r7 {
	RLC_InfoChoice_r7_PR present;
	union RLC_InfoChoice_r7_u {
		RLC_Info_r7_t	 rlc_Info;
		RB_Identity_t	 same_as_RB;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLC_InfoChoice_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RLC_InfoChoice_r7;

#ifdef __cplusplus
}
#endif

#endif	/* _RLC_InfoChoice_r7_H_ */
#include <asn_internal.h>
