/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_CipheringModeCommand_r7_H_
#define	_CipheringModeCommand_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CipheringAlgorithm-r7.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CipheringModeCommand-r7 */
typedef struct CipheringModeCommand_r7 {
	CipheringAlgorithm_r7_t	 startRestart;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CipheringModeCommand_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CipheringModeCommand_r7;

#ifdef __cplusplus
}
#endif

#endif	/* _CipheringModeCommand_r7_H_ */
#include <asn_internal.h>