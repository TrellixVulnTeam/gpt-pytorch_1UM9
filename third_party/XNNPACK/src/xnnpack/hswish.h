// Copyright 2019 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#pragma once

#include <stddef.h>
#include <stdint.h>

#include <xnnpack/params.h>
#include <xnnpack/common.h>

#ifdef __cplusplus
extern "C" {
#endif


#define DECLARE_F32_HSWISH_UKERNEL_FUNCTION(fn_name) \
  XNN_INTERNAL void fn_name(                         \
      size_t n,                                      \
      const float* x,                                \
      float* y,                                      \
      const union xnn_f32_hswish_params* params);

DECLARE_F32_HSWISH_UKERNEL_FUNCTION(xnn_f32_hswish_ukernel__neon_x4)
DECLARE_F32_HSWISH_UKERNEL_FUNCTION(xnn_f32_hswish_ukernel__neon_x8)

DECLARE_F32_HSWISH_UKERNEL_FUNCTION(xnn_f32_hswish_ukernel__neonfma_x4)
DECLARE_F32_HSWISH_UKERNEL_FUNCTION(xnn_f32_hswish_ukernel__neonfma_x8)

DECLARE_F32_HSWISH_UKERNEL_FUNCTION(xnn_f32_hswish_ukernel__sse_x4)
DECLARE_F32_HSWISH_UKERNEL_FUNCTION(xnn_f32_hswish_ukernel__sse_x8)

DECLARE_F32_HSWISH_UKERNEL_FUNCTION(xnn_f32_hswish_ukernel__avx_x8)
DECLARE_F32_HSWISH_UKERNEL_FUNCTION(xnn_f32_hswish_ukernel__avx_x16)

DECLARE_F32_HSWISH_UKERNEL_FUNCTION(xnn_f32_hswish_ukernel__fma3_x8)
DECLARE_F32_HSWISH_UKERNEL_FUNCTION(xnn_f32_hswish_ukernel__fma3_x16)

DECLARE_F32_HSWISH_UKERNEL_FUNCTION(xnn_f32_hswish_ukernel__avx512f_x16)
DECLARE_F32_HSWISH_UKERNEL_FUNCTION(xnn_f32_hswish_ukernel__avx512f_x32)

DECLARE_F32_HSWISH_UKERNEL_FUNCTION(xnn_f32_hswish_ukernel__psimd_x4)
DECLARE_F32_HSWISH_UKERNEL_FUNCTION(xnn_f32_hswish_ukernel__psimd_x8)

DECLARE_F32_HSWISH_UKERNEL_FUNCTION(xnn_f32_hswish_ukernel__wasm_x1)
DECLARE_F32_HSWISH_UKERNEL_FUNCTION(xnn_f32_hswish_ukernel__wasm_x2)
DECLARE_F32_HSWISH_UKERNEL_FUNCTION(xnn_f32_hswish_ukernel__wasm_x4)

DECLARE_F32_HSWISH_UKERNEL_FUNCTION(xnn_f32_hswish_ukernel__scalar_x1)
DECLARE_F32_HSWISH_UKERNEL_FUNCTION(xnn_f32_hswish_ukernel__scalar_x2)
DECLARE_F32_HSWISH_UKERNEL_FUNCTION(xnn_f32_hswish_ukernel__scalar_x4)


#ifdef __cplusplus
}  // extern "C"
#endif
