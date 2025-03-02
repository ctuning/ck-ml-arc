/*
 * Copyright (c) 2017 cTuning foundation.
 * See CK COPYRIGHT.txt for copyright details.
 *
 * See CK LICENSE for licensing details.
 * See CK COPYRIGHT for copyright details.
 */

#include "ck_nntest_caffe_softmax.h"

using namespace caffe;

int main() {
  Caffe::set_mode(Caffe::CPU);

  CK::Caffe::test_softmax();

  return 0;
}
