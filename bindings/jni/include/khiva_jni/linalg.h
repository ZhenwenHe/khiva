// Copyright (c) 2019 Shapelets.io
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef KHIVA_BINDINGJAVA_LINALG_H
#define KHIVA_BINDINGJAVA_LINALG_H

#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Calculates the minimum norm least squares solution \f$x\f$ \f$(\left\lVert{A·x - b}\right\rVert^2)\f$ to
 * \f$A·x = b\f$. This function uses the singular value decomposition function of Arrayfire. The actual formula that
 * this function computes is \f$x = V·D\dagger·U^T·b\f$. Where \f$U\f$ and \f$V\f$ are orthogonal matrices and
 * \f$D\dagger\f$ contains the inverse values of the singular values contained in D if they are not zero, and zero
 * otherwise.
 *
 * @param ref_a A Coefficient matrix containing the coefficients of the linear equation problem to solve.
 * @param ref_b A vector with the measured values.
 * @return A reference to the solution to the linear equation problem minimizing the norm 2.
 */
JNIEXPORT jlong JNICALL Java_io_shapelets_khiva_Linalg_lls(JNIEnv *env, jobject, jlong ref_a, jlong ref_b);

#ifdef __cplusplus
}
#endif

#endif
