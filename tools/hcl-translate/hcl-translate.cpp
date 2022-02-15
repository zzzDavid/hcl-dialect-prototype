//===- hcl-translate.cpp ---------------------------------*- C++ -*-===//
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This is a command line utility that translates a file from/to MLIR using one
// of the registered translations.
//
//===----------------------------------------------------------------------===//

#include "mlir/InitAllTranslations.h"
#include "mlir/Support/LogicalResult.h"
#include "mlir/Translation.h"
#include "hcl/Translation/EmitHLSCpp.h"
#ifdef OPENSCOP
#include "hcl/Target/ExtractScopStmt.h"
#endif

#include "hcl/Dialect/HeteroCLDialect.h"

int main(int argc, char **argv) {
  mlir::registerAllTranslations();
  mlir::hcl::registerEmitHLSCppTranslation();
  #ifdef OPENSCOP
  mlir::hcl::registerToOpenScopExtractTranslation();
  #endif

  return failed(
      mlir::mlirTranslateMain(argc, argv, "HeteroCL MLIR Dialect Translation Tool"));
}
