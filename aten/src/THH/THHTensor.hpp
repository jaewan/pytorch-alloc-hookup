// !!! This is a file automatically generated by hipify!!!
#pragma once

// STOP!!! Thinking of including this header directly?  Please
// read Note [TH abstraction violation]

#include <THH/THHTensor.h>
#include <TH/THTensor.hpp>
#include <THH/THHStorage.hpp>
#include <THH/THHGeneral.hpp>

#include <ATen/ATen.h>

TORCH_CUDA_CU_API void THCTensor_setStorage(
    THCState* state,
    THCTensor* self,
    THCStorage* storage_,
    ptrdiff_t storageOffset_,
    at::IntArrayRef size_,
    at::IntArrayRef stride_);
