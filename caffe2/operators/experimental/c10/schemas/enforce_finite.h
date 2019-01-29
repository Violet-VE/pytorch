#pragma once

#include <ATen/core/Tensor.h>
#include <c10/util/Array.h>

namespace caffe2 {
namespace ops {

struct EnforceFinite final {
  static constexpr const char* name = "enforce_finite";

  using Signature = void(const at::Tensor& input);

  static constexpr size_t num_outputs() {return 0;}

  static constexpr c10::guts::array<const char*, 1> parameter_names() {
    return {"input"};
  }
};

} // namespace ops
} // namespace caffe2
