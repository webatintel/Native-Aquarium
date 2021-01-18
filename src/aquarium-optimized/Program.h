//
// Copyright (c) 2019 The Aquarium Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// Program.h: Define base class for Programs of specific backends.

#ifndef PROGRAM_H
#define PROGRAM_H

#include <string>

#include "common/Path.h"

class Program {
public:
  Program(const Path &mVertexShader, const Path &fragmentShader)
      : mVId(mVertexShader), mFId(fragmentShader) {}
  virtual ~Program() {}
  virtual void setProgram() {}
  virtual void compileProgram(bool enableAlphaBlending,
                              const std::string &alpha) = 0;

protected:
  void loadProgram();

  Path mVId;
  Path mFId;

  std::string VertexShaderCode;
  std::string FragmentShaderCode;
};

#endif  // PROGRAM_H
