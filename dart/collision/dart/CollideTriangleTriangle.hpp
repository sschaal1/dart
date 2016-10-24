/*
 * Copyright (c) 2016, Graphics Lab, Georgia Tech Research Corporation
 * Copyright (c) 2016, Humanoid Lab, Georgia Tech Research Corporation
 * Copyright (c) 2016, Personal Robotics Lab, Carnegie Mellon University
 * All rights reserved.
 *
 * This file is provided under the following "BSD-style" License:
 *   Redistribution and use in source and binary forms, with or
 *   without modification, are permitted provided that the following
 *   conditions are met:
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
 *   CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 *   INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 *   MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *   DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
 *   CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 *   USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 *   AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *   LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *   ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *   POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef DART_COLLISION_DART_COLLIDETRIANGLETRIANGLE_HPP_
#define DART_COLLISION_DART_COLLIDETRIANGLETRIANGLE_HPP_

#include <Eigen/Dense>

#include "dart/collision/dart/NarrowPhaseAlgorithms.hpp"

namespace dart {
namespace collision {

namespace v1 {

//template <bool ReturnAllContacts = true>
//int collideTriangleTriangle(
//    const Eigen::Vector3d& a1,
//    const Eigen::Vector3d& a2,
//    const Eigen::Vector3d& a3,
//    const Eigen::Vector3d& b1,
//    const Eigen::Vector3d& b2,
//    const Eigen::Vector3d& b3,
//    Eigen::Vector3d* contacts);

int collideTriangleTriangle(
    const Eigen::Vector3d& A1,
    const Eigen::Vector3d& A2,
    const Eigen::Vector3d& A3,
    const Eigen::Vector3d& B1,
    const Eigen::Vector3d& B2,
    const Eigen::Vector3d& B3,
    Eigen::Vector3d* contacts,
    const bool returnAllContacts = true);

} // namespace v1

inline namespace stable {
  using v1::collideTriangleTriangle;
} // namespace stable

}  // namespace collision
}  // namespace dart

//#include "dart/collision/dart/CollideTriangleTriangleImpl.hpp"

#endif  // DART_COLLISION_DART_COLLIDETRIANGLETRIANGLE_HPP_
