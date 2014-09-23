/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_DL_PhysChCapabilityInfoTDD_768_H_
#define	_DL_PhysChCapabilityInfoTDD_768_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MaxTS-PerFrame.h"
#include "MaxPhysChPerFrame-768.h"
#include "MinimumSF-DL-768.h"
#include <BOOLEAN.h>
#include "MaxPhysChPerTS-768.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DL-PhysChCapabilityInfoTDD-768 */
typedef struct DL_PhysChCapabilityInfoTDD_768 {
	MaxTS_PerFrame_t	 maxTS_PerFrame;
	MaxPhysChPerFrame_768_t	 maxPhysChPerFrame;
	MinimumSF_DL_768_t	 minimumSF;
	BOOLEAN_t	 supportOfPDSCH;
	MaxPhysChPerTS_768_t	 maxPhysChPerTS;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_PhysChCapabilityInfoTDD_768_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_PhysChCapabilityInfoTDD_768;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_PhysChCapabilityInfoTDD_768_H_ */
#include <asn_internal.h>