/*
 * Copyright (c) 2007, 2008, 2009, 2010 Joseph Gaeddert
 * Copyright (c) 2007, 2008, 2009, 2010 Virginia Polytechnic
 *                                      Institute & State University
 *
 * This file is part of liquid.
 *
 * liquid is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * liquid is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with liquid.  If not, see <http://www.gnu.org/licenses/>.
 */

//
// Floating-point matrix
// 

#include "liquid.internal.h"

#define MATRIX(name)    LIQUID_CONCAT(fmatrix, name)
#define MATRIX_NAME     "fmatrix"
#define T               float
#define MATRIX_PRINT_ELEMENT(X,R,C,r,c) \
    printf("%12.8f", matrix_access(X,R,C,r,c));

#include "matrix.c"
#include "matrix_base.c"
#include "matrix_inv.c"
#include "matrix.linsolve.c"
#include "matrix_ludecomp.c"

