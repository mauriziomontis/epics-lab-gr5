/* THIS IS A GENERATED FILE. DO NOT EDIT! */
/* Generated from ../O.Common/g5_devices.dbd */

#include <string.h>
#ifndef USE_TYPED_RSET
#  define USE_TYPED_RSET
#endif
#include "compilerDependencies.h"
#include "epicsStdlib.h"
#include "iocsh.h"
#include "iocshRegisterCommon.h"
#include "registryCommon.h"
#include "recSup.h"
#include "shareLib.h"

extern "C" {

epicsShareExtern typed_rset *pvar_rset_aSubRSET, *pvar_rset_aaiRSET,
    *pvar_rset_aaoRSET, *pvar_rset_acalcoutRSET, *pvar_rset_aiRSET,
    *pvar_rset_aoRSET, *pvar_rset_asynRSET, *pvar_rset_biRSET,
    *pvar_rset_boRSET, *pvar_rset_calcRSET, *pvar_rset_calcoutRSET,
    *pvar_rset_compressRSET, *pvar_rset_dfanoutRSET, *pvar_rset_eventRSET,
    *pvar_rset_fanoutRSET, *pvar_rset_histogramRSET,
    *pvar_rset_int64inRSET, *pvar_rset_int64outRSET,
    *pvar_rset_longinRSET, *pvar_rset_longoutRSET, *pvar_rset_lsiRSET,
    *pvar_rset_lsoRSET, *pvar_rset_mbbiRSET, *pvar_rset_mbbiDirectRSET,
    *pvar_rset_mbboRSET, *pvar_rset_mbboDirectRSET,
    *pvar_rset_permissiveRSET, *pvar_rset_printfRSET,
    *pvar_rset_scalcoutRSET, *pvar_rset_selRSET, *pvar_rset_seqRSET,
    *pvar_rset_sseqRSET, *pvar_rset_stateRSET, *pvar_rset_stringinRSET,
    *pvar_rset_stringoutRSET, *pvar_rset_subRSET, *pvar_rset_subArrayRSET,
    *pvar_rset_swaitRSET, *pvar_rset_transformRSET,
    *pvar_rset_waveformRSET;

typedef int (*rso_func)(dbRecordType *pdbRecordType);
epicsShareExtern rso_func pvar_func_aSubRecordSizeOffset,
    pvar_func_aaiRecordSizeOffset, pvar_func_aaoRecordSizeOffset,
    pvar_func_acalcoutRecordSizeOffset, pvar_func_aiRecordSizeOffset,
    pvar_func_aoRecordSizeOffset, pvar_func_asynRecordSizeOffset,
    pvar_func_biRecordSizeOffset, pvar_func_boRecordSizeOffset,
    pvar_func_calcRecordSizeOffset, pvar_func_calcoutRecordSizeOffset,
    pvar_func_compressRecordSizeOffset, pvar_func_dfanoutRecordSizeOffset,
    pvar_func_eventRecordSizeOffset, pvar_func_fanoutRecordSizeOffset,
    pvar_func_histogramRecordSizeOffset,
    pvar_func_int64inRecordSizeOffset, pvar_func_int64outRecordSizeOffset,
    pvar_func_longinRecordSizeOffset, pvar_func_longoutRecordSizeOffset,
    pvar_func_lsiRecordSizeOffset, pvar_func_lsoRecordSizeOffset,
    pvar_func_mbbiRecordSizeOffset, pvar_func_mbbiDirectRecordSizeOffset,
    pvar_func_mbboRecordSizeOffset, pvar_func_mbboDirectRecordSizeOffset,
    pvar_func_permissiveRecordSizeOffset,
    pvar_func_printfRecordSizeOffset, pvar_func_scalcoutRecordSizeOffset,
    pvar_func_selRecordSizeOffset, pvar_func_seqRecordSizeOffset,
    pvar_func_sseqRecordSizeOffset, pvar_func_stateRecordSizeOffset,
    pvar_func_stringinRecordSizeOffset,
    pvar_func_stringoutRecordSizeOffset, pvar_func_subRecordSizeOffset,
    pvar_func_subArrayRecordSizeOffset, pvar_func_swaitRecordSizeOffset,
    pvar_func_transformRecordSizeOffset,
    pvar_func_waveformRecordSizeOffset;

static const char * const recordTypeNames[] = {
    "aSub", "aai", "aao", "acalcout", "ai", "ao", "asyn", "bi", "bo",
    "calc", "calcout", "compress", "dfanout", "event", "fanout",
    "histogram", "int64in", "int64out", "longin", "longout", "lsi", "lso",
    "mbbi", "mbbiDirect", "mbbo", "mbboDirect", "permissive", "printf",
    "scalcout", "sel", "seq", "sseq", "state", "stringin", "stringout",
    "sub", "subArray", "swait", "transform", "waveform"
};

static const recordTypeLocation rtl[] = {
    {(struct typed_rset *)pvar_rset_aSubRSET, pvar_func_aSubRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_aaiRSET, pvar_func_aaiRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_aaoRSET, pvar_func_aaoRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_acalcoutRSET, pvar_func_acalcoutRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_aiRSET, pvar_func_aiRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_aoRSET, pvar_func_aoRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_asynRSET, pvar_func_asynRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_biRSET, pvar_func_biRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_boRSET, pvar_func_boRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_calcRSET, pvar_func_calcRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_calcoutRSET, pvar_func_calcoutRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_compressRSET, pvar_func_compressRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_dfanoutRSET, pvar_func_dfanoutRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_eventRSET, pvar_func_eventRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_fanoutRSET, pvar_func_fanoutRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_histogramRSET, pvar_func_histogramRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_int64inRSET, pvar_func_int64inRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_int64outRSET, pvar_func_int64outRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_longinRSET, pvar_func_longinRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_longoutRSET, pvar_func_longoutRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_lsiRSET, pvar_func_lsiRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_lsoRSET, pvar_func_lsoRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_mbbiRSET, pvar_func_mbbiRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_mbbiDirectRSET, pvar_func_mbbiDirectRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_mbboRSET, pvar_func_mbboRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_mbboDirectRSET, pvar_func_mbboDirectRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_permissiveRSET, pvar_func_permissiveRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_printfRSET, pvar_func_printfRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_scalcoutRSET, pvar_func_scalcoutRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_selRSET, pvar_func_selRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_seqRSET, pvar_func_seqRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_sseqRSET, pvar_func_sseqRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_stateRSET, pvar_func_stateRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_stringinRSET, pvar_func_stringinRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_stringoutRSET, pvar_func_stringoutRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_subRSET, pvar_func_subRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_subArrayRSET, pvar_func_subArrayRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_swaitRSET, pvar_func_swaitRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_transformRSET, pvar_func_transformRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_waveformRSET, pvar_func_waveformRecordSizeOffset}
};

epicsShareExtern dset *pvar_dset_devAaiSoft, *pvar_dset_devaaiStream,
    *pvar_dset_asynInt8ArrayAai, *pvar_dset_asynInt16ArrayAai,
    *pvar_dset_asynInt32ArrayAai, *pvar_dset_asynFloat32ArrayAai,
    *pvar_dset_asynFloat64ArrayAai, *pvar_dset_asynInt64ArrayAai,
    *pvar_dset_devAaoSoft, *pvar_dset_devaaoStream,
    *pvar_dset_asynInt8ArrayAao, *pvar_dset_asynInt16ArrayAao,
    *pvar_dset_asynInt32ArrayAao, *pvar_dset_asynFloat32ArrayAao,
    *pvar_dset_asynFloat64ArrayAao, *pvar_dset_asynInt64ArrayAao,
    *pvar_dset_devaCalcoutSoft, *pvar_dset_devAiSoft,
    *pvar_dset_devAiSoftRaw, *pvar_dset_devAiSoftCallback,
    *pvar_dset_devTimestampAI, *pvar_dset_devAiGeneralTime,
    *pvar_dset_devaiStream, *pvar_dset_asynAiInt32,
    *pvar_dset_asynAiInt32Average, *pvar_dset_asynAiFloat64,
    *pvar_dset_asynAiFloat64Average, *pvar_dset_asynAiInt64,
    *pvar_dset_devAoSoft, *pvar_dset_devAoSoftRaw,
    *pvar_dset_devAoSoftCallback, *pvar_dset_devaoStream,
    *pvar_dset_asynAoInt32, *pvar_dset_asynAoFloat64,
    *pvar_dset_asynAoInt64, *pvar_dset_asynRecordDevice,
    *pvar_dset_devBiSoft, *pvar_dset_devBiSoftRaw,
    *pvar_dset_devBiSoftCallback, *pvar_dset_devBiDbState,
    *pvar_dset_devbiStream, *pvar_dset_asynBiInt32,
    *pvar_dset_asynBiUInt32Digital, *pvar_dset_devBoSoft,
    *pvar_dset_devBoSoftRaw, *pvar_dset_devBoSoftCallback,
    *pvar_dset_devBoGeneralTime, *pvar_dset_devBoDbState,
    *pvar_dset_devboStream, *pvar_dset_asynBoInt32,
    *pvar_dset_asynBoUInt32Digital, *pvar_dset_devCalcoutSoft,
    *pvar_dset_devCalcoutSoftCallback, *pvar_dset_devcalcoutStream,
    *pvar_dset_devEventSoft, *pvar_dset_devHistogramSoft,
    *pvar_dset_devI64inSoft, *pvar_dset_devI64inSoftCallback,
    *pvar_dset_devint64inStream, *pvar_dset_asynInt64In,
    *pvar_dset_devI64outSoft, *pvar_dset_devI64outSoftCallback,
    *pvar_dset_devint64outStream, *pvar_dset_asynInt64Out,
    *pvar_dset_devLiSoft, *pvar_dset_devLiSoftCallback,
    *pvar_dset_devLiGeneralTime, *pvar_dset_devlonginStream,
    *pvar_dset_asynLiInt32, *pvar_dset_asynLiUInt32Digital,
    *pvar_dset_asynLiInt64, *pvar_dset_devLoSoft,
    *pvar_dset_devLoSoftCallback, *pvar_dset_devlongoutStream,
    *pvar_dset_asynLoInt32, *pvar_dset_asynLoUInt32Digital,
    *pvar_dset_asynLoInt64, *pvar_dset_devLsiSoft,
    *pvar_dset_devLsiEnviron, *pvar_dset_devlsiStream,
    *pvar_dset_asynLsiOctetCmdResponse, *pvar_dset_asynLsiOctetWriteRead,
    *pvar_dset_asynLsiOctetRead, *pvar_dset_devLsoSoft,
    *pvar_dset_devLsoSoftCallback, *pvar_dset_devLsoStdio,
    *pvar_dset_devlsoStream, *pvar_dset_asynLsoOctetWrite,
    *pvar_dset_devMbbiSoft, *pvar_dset_devMbbiSoftRaw,
    *pvar_dset_devMbbiSoftCallback, *pvar_dset_devmbbiStream,
    *pvar_dset_asynMbbiInt32, *pvar_dset_asynMbbiUInt32Digital,
    *pvar_dset_devMbbiDirectSoft, *pvar_dset_devMbbiDirectSoftRaw,
    *pvar_dset_devMbbiDirectSoftCallback, *pvar_dset_devmbbiDirectStream,
    *pvar_dset_asynMbbiDirectUInt32Digital, *pvar_dset_devMbboSoft,
    *pvar_dset_devMbboSoftRaw, *pvar_dset_devMbboSoftCallback,
    *pvar_dset_devmbboStream, *pvar_dset_asynMbboInt32,
    *pvar_dset_asynMbboUInt32Digital, *pvar_dset_devMbboDirectSoft,
    *pvar_dset_devMbboDirectSoftRaw, *pvar_dset_devMbboDirectSoftCallback,
    *pvar_dset_devmbboDirectStream,
    *pvar_dset_asynMbboDirectUInt32Digital, *pvar_dset_devPrintfSoft,
    *pvar_dset_devPrintfSoftCallback, *pvar_dset_devPrintfStdio,
    *pvar_dset_asynPfOctetWrite, *pvar_dset_devsCalcoutSoft,
    *pvar_dset_devscalcoutStream, *pvar_dset_devSiSoft,
    *pvar_dset_devSiSoftCallback, *pvar_dset_devTimestampSI,
    *pvar_dset_devSiGeneralTime, *pvar_dset_devSiEnviron,
    *pvar_dset_devstringinStream, *pvar_dset_asynSiOctetCmdResponse,
    *pvar_dset_asynSiOctetWriteRead, *pvar_dset_asynSiOctetRead,
    *pvar_dset_devSoSoft, *pvar_dset_devSoSoftCallback,
    *pvar_dset_devSoStdio, *pvar_dset_devstringoutStream,
    *pvar_dset_asynSoOctetWrite, *pvar_dset_devSASoft,
    *pvar_dset_devSWaitIoEvent, *pvar_dset_devWfSoft,
    *pvar_dset_devwaveformStream, *pvar_dset_asynWfOctetCmdResponse,
    *pvar_dset_asynWfOctetWriteRead, *pvar_dset_asynWfOctetRead,
    *pvar_dset_asynWfOctetWrite, *pvar_dset_asynWfOctetWriteBinary,
    *pvar_dset_asynInt8ArrayWfIn, *pvar_dset_asynInt8ArrayWfOut,
    *pvar_dset_asynInt16ArrayWfIn, *pvar_dset_asynInt16ArrayWfOut,
    *pvar_dset_asynInt32ArrayWfIn, *pvar_dset_asynInt32ArrayWfOut,
    *pvar_dset_asynFloat32ArrayWfIn, *pvar_dset_asynFloat32ArrayWfOut,
    *pvar_dset_asynFloat64ArrayWfIn, *pvar_dset_asynFloat64ArrayWfOut,
    *pvar_dset_asynInt32TimeSeries, *pvar_dset_asynFloat64TimeSeries,
    *pvar_dset_asynInt64ArrayWfIn, *pvar_dset_asynInt64ArrayWfOut,
    *pvar_dset_asynInt64TimeSeries;

static const char * const deviceSupportNames[] = {
    "devAaiSoft", "devaaiStream", "asynInt8ArrayAai", "asynInt16ArrayAai",
    "asynInt32ArrayAai", "asynFloat32ArrayAai", "asynFloat64ArrayAai",
    "asynInt64ArrayAai", "devAaoSoft", "devaaoStream", "asynInt8ArrayAao",
    "asynInt16ArrayAao", "asynInt32ArrayAao", "asynFloat32ArrayAao",
    "asynFloat64ArrayAao", "asynInt64ArrayAao", "devaCalcoutSoft",
    "devAiSoft", "devAiSoftRaw", "devAiSoftCallback", "devTimestampAI",
    "devAiGeneralTime", "devaiStream", "asynAiInt32",
    "asynAiInt32Average", "asynAiFloat64", "asynAiFloat64Average",
    "asynAiInt64", "devAoSoft", "devAoSoftRaw", "devAoSoftCallback",
    "devaoStream", "asynAoInt32", "asynAoFloat64", "asynAoInt64",
    "asynRecordDevice", "devBiSoft", "devBiSoftRaw", "devBiSoftCallback",
    "devBiDbState", "devbiStream", "asynBiInt32", "asynBiUInt32Digital",
    "devBoSoft", "devBoSoftRaw", "devBoSoftCallback", "devBoGeneralTime",
    "devBoDbState", "devboStream", "asynBoInt32", "asynBoUInt32Digital",
    "devCalcoutSoft", "devCalcoutSoftCallback", "devcalcoutStream",
    "devEventSoft", "devHistogramSoft", "devI64inSoft",
    "devI64inSoftCallback", "devint64inStream", "asynInt64In",
    "devI64outSoft", "devI64outSoftCallback", "devint64outStream",
    "asynInt64Out", "devLiSoft", "devLiSoftCallback", "devLiGeneralTime",
    "devlonginStream", "asynLiInt32", "asynLiUInt32Digital",
    "asynLiInt64", "devLoSoft", "devLoSoftCallback", "devlongoutStream",
    "asynLoInt32", "asynLoUInt32Digital", "asynLoInt64", "devLsiSoft",
    "devLsiEnviron", "devlsiStream", "asynLsiOctetCmdResponse",
    "asynLsiOctetWriteRead", "asynLsiOctetRead", "devLsoSoft",
    "devLsoSoftCallback", "devLsoStdio", "devlsoStream",
    "asynLsoOctetWrite", "devMbbiSoft", "devMbbiSoftRaw",
    "devMbbiSoftCallback", "devmbbiStream", "asynMbbiInt32",
    "asynMbbiUInt32Digital", "devMbbiDirectSoft", "devMbbiDirectSoftRaw",
    "devMbbiDirectSoftCallback", "devmbbiDirectStream",
    "asynMbbiDirectUInt32Digital", "devMbboSoft", "devMbboSoftRaw",
    "devMbboSoftCallback", "devmbboStream", "asynMbboInt32",
    "asynMbboUInt32Digital", "devMbboDirectSoft", "devMbboDirectSoftRaw",
    "devMbboDirectSoftCallback", "devmbboDirectStream",
    "asynMbboDirectUInt32Digital", "devPrintfSoft",
    "devPrintfSoftCallback", "devPrintfStdio", "asynPfOctetWrite",
    "devsCalcoutSoft", "devscalcoutStream", "devSiSoft",
    "devSiSoftCallback", "devTimestampSI", "devSiGeneralTime",
    "devSiEnviron", "devstringinStream", "asynSiOctetCmdResponse",
    "asynSiOctetWriteRead", "asynSiOctetRead", "devSoSoft",
    "devSoSoftCallback", "devSoStdio", "devstringoutStream",
    "asynSoOctetWrite", "devSASoft", "devSWaitIoEvent", "devWfSoft",
    "devwaveformStream", "asynWfOctetCmdResponse", "asynWfOctetWriteRead",
    "asynWfOctetRead", "asynWfOctetWrite", "asynWfOctetWriteBinary",
    "asynInt8ArrayWfIn", "asynInt8ArrayWfOut", "asynInt16ArrayWfIn",
    "asynInt16ArrayWfOut", "asynInt32ArrayWfIn", "asynInt32ArrayWfOut",
    "asynFloat32ArrayWfIn", "asynFloat32ArrayWfOut",
    "asynFloat64ArrayWfIn", "asynFloat64ArrayWfOut",
    "asynInt32TimeSeries", "asynFloat64TimeSeries", "asynInt64ArrayWfIn",
    "asynInt64ArrayWfOut", "asynInt64TimeSeries"
};

static const dset * const devsl[] = {
    pvar_dset_devAaiSoft, pvar_dset_devaaiStream,
    pvar_dset_asynInt8ArrayAai, pvar_dset_asynInt16ArrayAai,
    pvar_dset_asynInt32ArrayAai, pvar_dset_asynFloat32ArrayAai,
    pvar_dset_asynFloat64ArrayAai, pvar_dset_asynInt64ArrayAai,
    pvar_dset_devAaoSoft, pvar_dset_devaaoStream,
    pvar_dset_asynInt8ArrayAao, pvar_dset_asynInt16ArrayAao,
    pvar_dset_asynInt32ArrayAao, pvar_dset_asynFloat32ArrayAao,
    pvar_dset_asynFloat64ArrayAao, pvar_dset_asynInt64ArrayAao,
    pvar_dset_devaCalcoutSoft, pvar_dset_devAiSoft,
    pvar_dset_devAiSoftRaw, pvar_dset_devAiSoftCallback,
    pvar_dset_devTimestampAI, pvar_dset_devAiGeneralTime,
    pvar_dset_devaiStream, pvar_dset_asynAiInt32,
    pvar_dset_asynAiInt32Average, pvar_dset_asynAiFloat64,
    pvar_dset_asynAiFloat64Average, pvar_dset_asynAiInt64,
    pvar_dset_devAoSoft, pvar_dset_devAoSoftRaw,
    pvar_dset_devAoSoftCallback, pvar_dset_devaoStream,
    pvar_dset_asynAoInt32, pvar_dset_asynAoFloat64, pvar_dset_asynAoInt64,
    pvar_dset_asynRecordDevice, pvar_dset_devBiSoft,
    pvar_dset_devBiSoftRaw, pvar_dset_devBiSoftCallback,
    pvar_dset_devBiDbState, pvar_dset_devbiStream, pvar_dset_asynBiInt32,
    pvar_dset_asynBiUInt32Digital, pvar_dset_devBoSoft,
    pvar_dset_devBoSoftRaw, pvar_dset_devBoSoftCallback,
    pvar_dset_devBoGeneralTime, pvar_dset_devBoDbState,
    pvar_dset_devboStream, pvar_dset_asynBoInt32,
    pvar_dset_asynBoUInt32Digital, pvar_dset_devCalcoutSoft,
    pvar_dset_devCalcoutSoftCallback, pvar_dset_devcalcoutStream,
    pvar_dset_devEventSoft, pvar_dset_devHistogramSoft,
    pvar_dset_devI64inSoft, pvar_dset_devI64inSoftCallback,
    pvar_dset_devint64inStream, pvar_dset_asynInt64In,
    pvar_dset_devI64outSoft, pvar_dset_devI64outSoftCallback,
    pvar_dset_devint64outStream, pvar_dset_asynInt64Out,
    pvar_dset_devLiSoft, pvar_dset_devLiSoftCallback,
    pvar_dset_devLiGeneralTime, pvar_dset_devlonginStream,
    pvar_dset_asynLiInt32, pvar_dset_asynLiUInt32Digital,
    pvar_dset_asynLiInt64, pvar_dset_devLoSoft,
    pvar_dset_devLoSoftCallback, pvar_dset_devlongoutStream,
    pvar_dset_asynLoInt32, pvar_dset_asynLoUInt32Digital,
    pvar_dset_asynLoInt64, pvar_dset_devLsiSoft, pvar_dset_devLsiEnviron,
    pvar_dset_devlsiStream, pvar_dset_asynLsiOctetCmdResponse,
    pvar_dset_asynLsiOctetWriteRead, pvar_dset_asynLsiOctetRead,
    pvar_dset_devLsoSoft, pvar_dset_devLsoSoftCallback,
    pvar_dset_devLsoStdio, pvar_dset_devlsoStream,
    pvar_dset_asynLsoOctetWrite, pvar_dset_devMbbiSoft,
    pvar_dset_devMbbiSoftRaw, pvar_dset_devMbbiSoftCallback,
    pvar_dset_devmbbiStream, pvar_dset_asynMbbiInt32,
    pvar_dset_asynMbbiUInt32Digital, pvar_dset_devMbbiDirectSoft,
    pvar_dset_devMbbiDirectSoftRaw, pvar_dset_devMbbiDirectSoftCallback,
    pvar_dset_devmbbiDirectStream, pvar_dset_asynMbbiDirectUInt32Digital,
    pvar_dset_devMbboSoft, pvar_dset_devMbboSoftRaw,
    pvar_dset_devMbboSoftCallback, pvar_dset_devmbboStream,
    pvar_dset_asynMbboInt32, pvar_dset_asynMbboUInt32Digital,
    pvar_dset_devMbboDirectSoft, pvar_dset_devMbboDirectSoftRaw,
    pvar_dset_devMbboDirectSoftCallback, pvar_dset_devmbboDirectStream,
    pvar_dset_asynMbboDirectUInt32Digital, pvar_dset_devPrintfSoft,
    pvar_dset_devPrintfSoftCallback, pvar_dset_devPrintfStdio,
    pvar_dset_asynPfOctetWrite, pvar_dset_devsCalcoutSoft,
    pvar_dset_devscalcoutStream, pvar_dset_devSiSoft,
    pvar_dset_devSiSoftCallback, pvar_dset_devTimestampSI,
    pvar_dset_devSiGeneralTime, pvar_dset_devSiEnviron,
    pvar_dset_devstringinStream, pvar_dset_asynSiOctetCmdResponse,
    pvar_dset_asynSiOctetWriteRead, pvar_dset_asynSiOctetRead,
    pvar_dset_devSoSoft, pvar_dset_devSoSoftCallback,
    pvar_dset_devSoStdio, pvar_dset_devstringoutStream,
    pvar_dset_asynSoOctetWrite, pvar_dset_devSASoft,
    pvar_dset_devSWaitIoEvent, pvar_dset_devWfSoft,
    pvar_dset_devwaveformStream, pvar_dset_asynWfOctetCmdResponse,
    pvar_dset_asynWfOctetWriteRead, pvar_dset_asynWfOctetRead,
    pvar_dset_asynWfOctetWrite, pvar_dset_asynWfOctetWriteBinary,
    pvar_dset_asynInt8ArrayWfIn, pvar_dset_asynInt8ArrayWfOut,
    pvar_dset_asynInt16ArrayWfIn, pvar_dset_asynInt16ArrayWfOut,
    pvar_dset_asynInt32ArrayWfIn, pvar_dset_asynInt32ArrayWfOut,
    pvar_dset_asynFloat32ArrayWfIn, pvar_dset_asynFloat32ArrayWfOut,
    pvar_dset_asynFloat64ArrayWfIn, pvar_dset_asynFloat64ArrayWfOut,
    pvar_dset_asynInt32TimeSeries, pvar_dset_asynFloat64TimeSeries,
    pvar_dset_asynInt64ArrayWfIn, pvar_dset_asynInt64ArrayWfOut,
    pvar_dset_asynInt64TimeSeries
};

epicsShareExtern drvet *pvar_drvet_drvAsyn, *pvar_drvet_stream;

static const char *driverSupportNames[] = {
    "drvAsyn", "stream"};

static struct drvet *drvsl[] = {
    pvar_drvet_drvAsyn,
    pvar_drvet_stream};

epicsShareExtern jlif *pvar_jlif_lnkCalcIf, *pvar_jlif_lnkConstIf,
    *pvar_jlif_lnkDebugIf, *pvar_jlif_lnkStateIf, *pvar_jlif_lnkTraceIf;

static struct jlif *jlifsl[] = {
    pvar_jlif_lnkCalcIf,
    pvar_jlif_lnkConstIf,
    pvar_jlif_lnkDebugIf,
    pvar_jlif_lnkStateIf,
    pvar_jlif_lnkTraceIf};

typedef void (*reg_func)(void);
epicsShareExtern reg_func pvar_func_AsynDriverInterfaceRegistrar,
    pvar_func_aCalcMonitorMemRegister,
    pvar_func_acalcTotalAllocatedMemoryRegister, pvar_func_arrInitialize,
    pvar_func_arrayTestRegister, pvar_func_asSub,
    pvar_func_asynInterposeDelayRegister,
    pvar_func_asynInterposeEchoRegister,
    pvar_func_asynInterposeEosRegister,
    pvar_func_asynInterposeFlushRegister, pvar_func_asynRegister,
    pvar_func_dbndInitialize, pvar_func_decInitialize,
    pvar_func_drvAsynIPPortRegisterCommands,
    pvar_func_drvAsynIPServerPortRegisterCommands,
    pvar_func_editSseqRegistrar, pvar_func_interpRegister,
    pvar_func_rsrvRegistrar, pvar_func_streamRegistrar,
    pvar_func_subAveRegister, pvar_func_syncInitialize,
    pvar_func_tsInitialize, pvar_func_utagInitialize;

epicsShareExtern int * const pvar_int_CASDEBUG;
epicsShareExtern int * const pvar_int_aCalcAsyncThreshold;
epicsShareExtern int * const pvar_int_aCalcLoopMax;
epicsShareExtern int * const pvar_int_aCalcMonitorMem_debug;
epicsShareExtern int * const pvar_int_aCalcPerformDebug;
epicsShareExtern int * const pvar_int_aCalcPostfixDebug;
epicsShareExtern int * const pvar_int_aCalcoutRecordDebug;
epicsShareExtern int * const pvar_int_arrayTestDebug;
epicsShareExtern int * const pvar_int_asCaDebug;
epicsShareExtern int * const pvar_int_atExitDebug;
epicsShareExtern double * const pvar_double_boHIGHlimit;
epicsShareExtern int * const pvar_int_boHIGHprecision;
epicsShareExtern double * const pvar_double_calcoutODLYlimit;
epicsShareExtern int * const pvar_int_calcoutODLYprecision;
epicsShareExtern int * const pvar_int_callbackParallelThreadsDefault;
epicsShareExtern int * const pvar_int_dbAccessDebugPUTF;
epicsShareExtern int * const pvar_int_dbBptNotMonotonic;
epicsShareExtern int * const pvar_int_dbConvertStrict;
epicsShareExtern int * const pvar_int_dbJLinkDebug;
epicsShareExtern int * const pvar_int_dbQuietMacroWarnings;
epicsShareExtern int * const pvar_int_dbRecordsAbcSorted;
epicsShareExtern int * const pvar_int_dbRecordsOnceOnly;
epicsShareExtern int * const pvar_int_dbTemplateMaxVars;
epicsShareExtern int * const pvar_int_dbThreadRealtimeLock;
epicsShareExtern int * const pvar_int_debugSubAve;
epicsShareExtern int * const pvar_int_devaCalcoutSoftDebug;
epicsShareExtern int * const pvar_int_devsCalcoutSoftDebug;
epicsShareExtern int * const pvar_int_histogramSDELprecision;
epicsShareExtern int * const pvar_int_interpDebug;
epicsShareExtern int * const pvar_int_lnkDebug_debug;
epicsShareExtern int * const pvar_int_logClientDebug;
epicsShareExtern int * const pvar_int_sCalcLoopMax;
epicsShareExtern int * const pvar_int_sCalcPerformDebug;
epicsShareExtern int * const pvar_int_sCalcPostfixDebug;
epicsShareExtern int * const pvar_int_sCalcStackHW;
epicsShareExtern int * const pvar_int_sCalcStackLW;
epicsShareExtern int * const pvar_int_sCalcoutRecordDebug;
epicsShareExtern double * const pvar_double_seqDLYlimit;
epicsShareExtern int * const pvar_int_seqDLYprecision;
epicsShareExtern int * const pvar_int_sseqRecDebug;
epicsShareExtern int * const pvar_int_streamDebug;
epicsShareExtern int * const pvar_int_streamDebugColored;
epicsShareExtern int * const pvar_int_streamError;
epicsShareExtern int * const pvar_int_streamErrorDeadTime;
epicsShareExtern int * const pvar_int_streamMsgTimeStamped;
epicsShareExtern int * const pvar_int_swaitRecordDebug;
epicsShareExtern int * const pvar_int_transformRecordDebug;

static struct iocshVarDef vardefs[] = {
    {"CASDEBUG", iocshArgInt, pvar_int_CASDEBUG},
    {"aCalcAsyncThreshold", iocshArgInt, pvar_int_aCalcAsyncThreshold},
    {"aCalcLoopMax", iocshArgInt, pvar_int_aCalcLoopMax},
    {"aCalcMonitorMem_debug", iocshArgInt, pvar_int_aCalcMonitorMem_debug},
    {"aCalcPerformDebug", iocshArgInt, pvar_int_aCalcPerformDebug},
    {"aCalcPostfixDebug", iocshArgInt, pvar_int_aCalcPostfixDebug},
    {"aCalcoutRecordDebug", iocshArgInt, pvar_int_aCalcoutRecordDebug},
    {"arrayTestDebug", iocshArgInt, pvar_int_arrayTestDebug},
    {"asCaDebug", iocshArgInt, pvar_int_asCaDebug},
    {"atExitDebug", iocshArgInt, pvar_int_atExitDebug},
    {"boHIGHlimit", iocshArgDouble, pvar_double_boHIGHlimit},
    {"boHIGHprecision", iocshArgInt, pvar_int_boHIGHprecision},
    {"calcoutODLYlimit", iocshArgDouble, pvar_double_calcoutODLYlimit},
    {"calcoutODLYprecision", iocshArgInt, pvar_int_calcoutODLYprecision},
    {"callbackParallelThreadsDefault", iocshArgInt, pvar_int_callbackParallelThreadsDefault},
    {"dbAccessDebugPUTF", iocshArgInt, pvar_int_dbAccessDebugPUTF},
    {"dbBptNotMonotonic", iocshArgInt, pvar_int_dbBptNotMonotonic},
    {"dbConvertStrict", iocshArgInt, pvar_int_dbConvertStrict},
    {"dbJLinkDebug", iocshArgInt, pvar_int_dbJLinkDebug},
    {"dbQuietMacroWarnings", iocshArgInt, pvar_int_dbQuietMacroWarnings},
    {"dbRecordsAbcSorted", iocshArgInt, pvar_int_dbRecordsAbcSorted},
    {"dbRecordsOnceOnly", iocshArgInt, pvar_int_dbRecordsOnceOnly},
    {"dbTemplateMaxVars", iocshArgInt, pvar_int_dbTemplateMaxVars},
    {"dbThreadRealtimeLock", iocshArgInt, pvar_int_dbThreadRealtimeLock},
    {"debugSubAve", iocshArgInt, pvar_int_debugSubAve},
    {"devaCalcoutSoftDebug", iocshArgInt, pvar_int_devaCalcoutSoftDebug},
    {"devsCalcoutSoftDebug", iocshArgInt, pvar_int_devsCalcoutSoftDebug},
    {"histogramSDELprecision", iocshArgInt, pvar_int_histogramSDELprecision},
    {"interpDebug", iocshArgInt, pvar_int_interpDebug},
    {"lnkDebug_debug", iocshArgInt, pvar_int_lnkDebug_debug},
    {"logClientDebug", iocshArgInt, pvar_int_logClientDebug},
    {"sCalcLoopMax", iocshArgInt, pvar_int_sCalcLoopMax},
    {"sCalcPerformDebug", iocshArgInt, pvar_int_sCalcPerformDebug},
    {"sCalcPostfixDebug", iocshArgInt, pvar_int_sCalcPostfixDebug},
    {"sCalcStackHW", iocshArgInt, pvar_int_sCalcStackHW},
    {"sCalcStackLW", iocshArgInt, pvar_int_sCalcStackLW},
    {"sCalcoutRecordDebug", iocshArgInt, pvar_int_sCalcoutRecordDebug},
    {"seqDLYlimit", iocshArgDouble, pvar_double_seqDLYlimit},
    {"seqDLYprecision", iocshArgInt, pvar_int_seqDLYprecision},
    {"sseqRecDebug", iocshArgInt, pvar_int_sseqRecDebug},
    {"streamDebug", iocshArgInt, pvar_int_streamDebug},
    {"streamDebugColored", iocshArgInt, pvar_int_streamDebugColored},
    {"streamError", iocshArgInt, pvar_int_streamError},
    {"streamErrorDeadTime", iocshArgInt, pvar_int_streamErrorDeadTime},
    {"streamMsgTimeStamped", iocshArgInt, pvar_int_streamMsgTimeStamped},
    {"swaitRecordDebug", iocshArgInt, pvar_int_swaitRecordDebug},
    {"transformRecordDebug", iocshArgInt, pvar_int_transformRecordDebug},
    {NULL, iocshArgInt, NULL}
};

int g5_devices_registerRecordDeviceDriver(DBBASE *pbase)
{
    static int executed = 0;
    const char *bldTop = "/home/epics/workspace/group5";
    const char *envTop = getenv("TOP");

    if (envTop && strcmp(envTop, bldTop)) {
        printf("Warning: IOC is booting with TOP = \"%s\"\n"
               "          but was built with TOP = \"%s\"\n",
               envTop, bldTop);
    }

    if (!pbase) {
        printf("pdbbase is NULL; you must load a DBD file first.\n");
        return -1;
    }

    if (executed) {
        printf("Warning: Registration already done.\n");
    }
    executed = 1;

    registerRecordTypes(pbase, NELEMENTS(rtl), recordTypeNames, rtl);
    registerDevices(pbase, NELEMENTS(devsl), deviceSupportNames, devsl);
    registerDrivers(pbase, NELEMENTS(drvsl), driverSupportNames, drvsl);
    registerJLinks(pbase, NELEMENTS(jlifsl), jlifsl);
    runRegistrarOnce(pvar_func_AsynDriverInterfaceRegistrar);
    runRegistrarOnce(pvar_func_aCalcMonitorMemRegister);
    runRegistrarOnce(pvar_func_acalcTotalAllocatedMemoryRegister);
    runRegistrarOnce(pvar_func_arrInitialize);
    runRegistrarOnce(pvar_func_arrayTestRegister);
    runRegistrarOnce(pvar_func_asSub);
    runRegistrarOnce(pvar_func_asynInterposeDelayRegister);
    runRegistrarOnce(pvar_func_asynInterposeEchoRegister);
    runRegistrarOnce(pvar_func_asynInterposeEosRegister);
    runRegistrarOnce(pvar_func_asynInterposeFlushRegister);
    runRegistrarOnce(pvar_func_asynRegister);
    runRegistrarOnce(pvar_func_dbndInitialize);
    runRegistrarOnce(pvar_func_decInitialize);
    runRegistrarOnce(pvar_func_drvAsynIPPortRegisterCommands);
    runRegistrarOnce(pvar_func_drvAsynIPServerPortRegisterCommands);
    runRegistrarOnce(pvar_func_editSseqRegistrar);
    runRegistrarOnce(pvar_func_interpRegister);
    runRegistrarOnce(pvar_func_rsrvRegistrar);
    runRegistrarOnce(pvar_func_streamRegistrar);
    runRegistrarOnce(pvar_func_subAveRegister);
    runRegistrarOnce(pvar_func_syncInitialize);
    runRegistrarOnce(pvar_func_tsInitialize);
    runRegistrarOnce(pvar_func_utagInitialize);
    iocshRegisterVariable(vardefs);
    return 0;
}

/* g5_devices_registerRecordDeviceDriver */
static const iocshArg rrddArg0 = {"pdbbase", iocshArgPdbbase};
static const iocshArg *rrddArgs[] = {&rrddArg0};
static const iocshFuncDef rrddFuncDef = {
    "g5_devices_registerRecordDeviceDriver",
    1,
    rrddArgs,
    "Register the various records, devices, for this DBD.\n\n"
    "These are registered into the database given as first argument,\n"
    "which should always be 'pdbbase'.\n\n"
    "Example: g5_devices_registerRecordDeviceDriver pdbbase\n",
};
static void rrddCallFunc(const iocshArgBuf *)
{
    iocshSetError(g5_devices_registerRecordDeviceDriver(*iocshPpdbbase));
}

} // extern "C"

/*
 * Register commands on application startup
 */
static int Registration() {
    iocshRegisterCommon();
    iocshRegister(&rrddFuncDef, rrddCallFunc);
    return 0;
}

static int done EPICS_UNUSED = Registration();
