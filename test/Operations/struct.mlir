// RUN: hcl-opt %s 
module {
  func @top (%arg0 : !hcl.struct<!hcl.struct<i3, memref<10xf32>>, i3>) -> () {
    %0 = hcl.struct_access %arg0[0] : !hcl.struct<!hcl.struct<i3, memref<10xf32>>, i3> to !hcl.struct<i3, memref<10xf32>>
    %zero = arith.constant 0 : i32
    %1 = hcl.struct_construct (%0, %zero) : !hcl.struct<i3, memref<10xf32>>, i32 to !hcl.struct<!hcl.struct<i3, memref<10xf32>>, i32>
    return
  }
} 