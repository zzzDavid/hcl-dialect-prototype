//===----------------------------------------------------------------------===//
//
// Copyright 2020-2021 The HCL-MLIR Authors.
//
//===----------------------------------------------------------------------===//

#ifndef HCL_C_DIALECT_HLSCPP_H
#define HCL_C_DIALECT_HLSCPP_H

#include "mlir-c/Registration.h"

#ifdef __cplusplus
extern "C" {
#endif

MLIR_CAPI_EXPORTED bool mlirTypeIsALoopHandle(MlirType type);
MLIR_CAPI_EXPORTED MlirType mlirLoopHandleTypeGet(MlirContext ctx);

MLIR_CAPI_EXPORTED bool mlirTypeIsAStageHandle(MlirType type);
MLIR_CAPI_EXPORTED MlirType mlirStageHandleTypeGet(MlirContext ctx);

MLIR_DECLARE_CAPI_DIALECT_REGISTRATION(HCL, hcl);

#ifdef __cplusplus
}
#endif

#endif // HCL_C_DIALECT_HLSCPP_H