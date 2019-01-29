#pragma once

#include <ATen/core/Tensor.h>
#include <c10/util/Array.h>
#include "caffe2/core/context_base.h"

namespace caffe2 {
namespace ops {

struct Add final {
  static constexpr const char* name = "add";

  using Signature = at::Tensor (
      const at::Tensor& input1,
      const at::Tensor& input2,
      const at::Tensor& output,
      bool legacy_broadcast,
      int64_t axis);

  static constexpr size_t num_outputs() {return 1;}

  static constexpr c10::guts::array<const char*, 5> parameter_names() {
    return {"input1", "input2", "output", "legacy_broadcast", "axis"};
  }
};

} // namespace ops
} // namespace caffe2
