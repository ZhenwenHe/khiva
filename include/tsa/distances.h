// Copyright (c) 2018 Grumpy Cat Software S.L.
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include <arrayfire.h>

namespace tsa {

namespace distances {

/**
 * @brief Calculates euclidean distances between time series.
 *
 * @param tss Expects an input array whose dimension zero is the length of the time series (all the same) and
 * dimension one indicates the number of time series.
 *
 * @return af::array An upper triangular matrix where each position corresponds to the distance between two
 * time series. Diagonal elements will be zero. For example: Position row 0 column 1 records the distance
 * between time series 0 and time series 1.
 */
af::array euclidean(af::array tss);

/**
 * @brief Calculates non squared version of the euclidean distance.
 *
 * @param tss Expects an input array whose dimension zero is the length of the time series (all the same) and
 * dimension one indicates the number of time series.
 *
 * @return array An upper triangular matrix where each position corresponds to the distance between two time series.
 * Diagonal elements will be zero. For example: Position row 0 column 1 recordd the distance between time series 0
 * and time series 1.
 */
af::array squaredEuclidean(af::array tss);

/**
 * @brief Calculates the Dynamic Warping Distance.
 *
 * @param a The input time series of reference.
 * @param b The input query.
 *
 * @return array The resulting distance between a and b.
 */
double dwt(std::vector<double> a, std::vector<double> b);

/**
 * @brief Calculates the Dynamic Warping Distance.
 *
 * @param tss Expects an input array whose dimension zero is the length of the time series (all the same) and
 * dimension one indicates the number of time series.
 *
 * @return af::array An upper triangular matrix where each position corresponds to the distance between
 * two time series. Diagonal elements will be zero. For example: Position row 0 column 1 recordd the
 * distance between time series 0 and time series 1.
 */
af::array dwt(af::array tss);

};  // namespace distances
};  // namespace tsa