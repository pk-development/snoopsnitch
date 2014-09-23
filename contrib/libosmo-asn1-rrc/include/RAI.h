/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_RAI_H_
#define	_RAI_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LAI.h"
#include "RoutingAreaCode.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RAI */
typedef struct RAI {
	LAI_t	 lai;
	RoutingAreaCode_t	 rac;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RAI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RAI;

#ifdef __cplusplus
}
#endif

#endif	/* _RAI_H_ */
#include <asn_internal.h>