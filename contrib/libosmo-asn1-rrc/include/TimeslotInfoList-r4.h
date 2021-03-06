/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_TimeslotInfoList_r4_H_
#define	_TimeslotInfoList_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TimeslotInfoList_r4_PR {
	TimeslotInfoList_r4_PR_NOTHING,	/* No components present */
	TimeslotInfoList_r4_PR_tdd384,
	TimeslotInfoList_r4_PR_tdd128
} TimeslotInfoList_r4_PR;

/* Forward declarations */
struct TimeslotInfo;
struct TimeslotInfo_LCR_r4;

/* TimeslotInfoList-r4 */
typedef struct TimeslotInfoList_r4 {
	TimeslotInfoList_r4_PR present;
	union TimeslotInfoList_r4_u {
		struct TimeslotInfoList_r4__tdd384 {
			A_SEQUENCE_OF(struct TimeslotInfo) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} tdd384;
		struct TimeslotInfoList_r4__tdd128 {
			A_SEQUENCE_OF(struct TimeslotInfo_LCR_r4) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} tdd128;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TimeslotInfoList_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TimeslotInfoList_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TimeslotInfo.h"
#include "TimeslotInfo-LCR-r4.h"

#endif	/* _TimeslotInfoList_r4_H_ */
#include <asn_internal.h>
