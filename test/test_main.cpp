/*  ---------------------------------------------------------------------
  Copyright 2018-2019 Fangjun Kuang
  email: csukuangfj at gmail dot com
  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.
  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  You should have received a COPYING file of the GNU General Public License
  along with this program. If not, see <http://www.gnu.org/licenses/>
  -----------------------------------------------------------------  */
// Copyright 2006, Google Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include <glog/logging.h>

#include "gtest/gtest.h"

GTEST_API_ int main(int argc, char** argv) {
  google::InitGoogleLogging(argv[0]);
  FLAGS_alsologtostderr = true;
  FLAGS_colorlogtostderr = true;

  // ::testing::GTEST_FLAG(filter) = "ArrayTest*";
  // ::testing::GTEST_FLAG(filter) = "ArrayMathTest*";
  // ::testing::GTEST_FLAG(filter) = "BatchNormalizationLayerTest*";
  // ::testing::GTEST_FLAG(filter) = "BatchNormalizationLayerTest*bprop*";
  // ::testing::GTEST_FLAG(filter) = "LayerTest*";
  // ::testing::GTEST_FLAG(filter) = "ConvolutionLayerTest*";
  // ::testing::GTEST_FLAG(filter) = "DropoutLayerTest*";
  // ::testing::GTEST_FLAG(filter) = "FullConnectedLayerTest*";
  // ::testing::GTEST_FLAG(filter) = "FullConnectedLayerTest*jet*";
  // ::testing::GTEST_FLAG(filter) = "JetTest*";
  // ::testing::GTEST_FLAG(filter) = "L2LossLayerTest*";
  // ::testing::GTEST_FLAG(filter) = "L2LossLayer_Test*bprop*";
  // ::testing::GTEST_FLAG(filter) = "LayerTest*";
  // ::testing::GTEST_FLAG(filter) = "LeakyReLULayerTest*";
  // ::testing::GTEST_FLAG(filter) = "LogLossLayerTest*";
  // ::testing::GTEST_FLAG(filter) = "MaxPoolingLayerTest*";
  // ::testing::GTEST_FLAG(filter) = "NetworkTest*";
  // ::testing::GTEST_FLAG(filter) = "NetworkTest*fprop1*";
  // ::testing::GTEST_FLAG(filter) = "NetworkTest*fprop2*";
  // ::testing::GTEST_FLAG(filter) = "OptimizerTest*";
  // ::testing::GTEST_FLAG(filter) = "ReLULayerTest*";
  // ::testing::GTEST_FLAG(filter) = "RngTest*";
  // ::testing::GTEST_FLAG(filter) = "SoftmaxLayerTest*fprop*";
  // ::testing::GTEST_FLAG(filter) = "SoftmaxLayerTest*jet*";
  // ::testing::GTEST_FLAG(filter) = "SoftmaxWithLogLossLayerTest*";
  //
  // ::testing::GTEST_FLAG(filter) = "io_test*";

  testing::InitGoogleTest(&argc, argv);

  LOG(INFO) << "Running main() from test_main.cpp";

  return RUN_ALL_TESTS();
}
