///////////////////////////////////////////////////////////////////////////////
// FILE: ray.h
//
// AUTHORS:
// Joseph Gibson / <joseph.gibson@nasa.gov>
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// @file
///
/// @brief  Ray class
///////////////////////////////////////////////////////////////////////////////

#ifndef RAY_H
#define RAY_H

///////////////////////////////////////////////////////////////////////////////
// INCLUDES
///////////////////////////////////////////////////////////////////////////////
#include "vec3.h"

///////////////////////////////////////////////////////////////////////////////
// CLASSES
///////////////////////////////////////////////////////////////////////////////
class Ray {
public:
    Ray() {}
    Ray(const vec3 & a, const vec3 & b) : A(a), B(b) {}
    vec3 origin() const { return A; }
    vec3 direction() const { return B; }
    vec3 point_at_parameter(const float t) const { return A + (t * B); }

    vec3 A;
    vec3 B;
};

#endif//RAY_H
