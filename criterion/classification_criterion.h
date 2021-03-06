// Copyright (c) 2017 The Authors. All rights reserved.
// Use of this source code is governed by a MIT license that can be
// found in the LICENSE file, See the AUTHORS file for names of contributors.

#ifndef CLASSIFICATION_CRITERION_
#define CLASSIFICATION_CRITERION_

#include "criterion.h"

namespace tree_based_model {

class ClassificationCriterion : public Criterion {
public:
  ClassificationCriterion() = default;
  virtual ~ClassificationCriterion() = default;

};

}

#endif // CLASSIFICATION_CRITERION_
