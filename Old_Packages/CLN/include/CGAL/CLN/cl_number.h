// ============================================================================
//
// Copyright (c) 1999 The CGAL Consortium
//
// This software and related documentation is part of an INTERNAL release
// of the Computational Geometry Algorithms Library (CGAL). It is not
// intended for general use.
//
// ----------------------------------------------------------------------------
//
// release       :
// release_date  :
//
// file          : include/CGAL/cl_number.h
// revision      : $Revision$
// revision_date : $Date$
// package       : CLN
// author(s)     : Sylvain Pion <Sylvain.Pion@sophia.inria.fr>
//
// coordinator   : INRIA Sophia-Antipolis (<Mariette.Yvinec@sophia.inria.fr>)
//
// ============================================================================

#ifndef CGAL_CL_NUMBER_H
#define CGAL_CL_NUMBER_H

#include <CGAL/CLN/common.h>
#include <cl_number.h>
#include <cl_number_io.h>

CGAL_BEGIN_NAMESPACE

// Requirements.

inline double	to_double	(const cl_number &I) { return cl_double_approx(I); }

// Specialized utilities.

namespace NTS {

inline bool is_negative		(const cl_number &I) { return minusp(I); } 
inline bool is_positive		(const cl_number &I) { return plusp(I); }
inline bool is_zero		(const cl_number &I) { return zerop(I); }
inline Comparison_result compare (const cl_number &I, const cl_number &J)
{ return Comparison_result(cl_compare(I,J)); }

} // namespace NTS

CGAL_END_NAMESPACE

// #ifdef CGAL_INTERVAL_ARITHMETIC_H
// #include <CGAL/Interval_arithmetic/IA_cl_number.h>
// #endif

#endif // CGAL_CL_NUMBER_H
