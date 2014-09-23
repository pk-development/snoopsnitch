/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_IntraFreqCellInfoListInfoOnSecULFreq_H_
#define	_IntraFreqCellInfoListInfoOnSecULFreq_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RemovedIntraFreqCellListOnSecULFreq;
struct NewIntraFreqCellListOnSecULFreq;
struct CellsForIntraFreqMeasListOnSecULFreq;

/* IntraFreqCellInfoListInfoOnSecULFreq */
typedef struct IntraFreqCellInfoListInfoOnSecULFreq {
	struct RemovedIntraFreqCellListOnSecULFreq	*removedIntraFreqCellList	/* OPTIONAL */;
	struct NewIntraFreqCellListOnSecULFreq	*newIntraFreqCellList	/* OPTIONAL */;
	struct CellsForIntraFreqMeasListOnSecULFreq	*cellsForIntraFreqMeasList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqCellInfoListInfoOnSecULFreq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqCellInfoListInfoOnSecULFreq;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RemovedIntraFreqCellListOnSecULFreq.h"
#include "NewIntraFreqCellListOnSecULFreq.h"
#include "CellsForIntraFreqMeasListOnSecULFreq.h"

#endif	/* _IntraFreqCellInfoListInfoOnSecULFreq_H_ */
#include <asn_internal.h>