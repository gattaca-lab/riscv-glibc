/* Configuration for math tests.  RISC-V version
   Copyright (C) 2014-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Copied from the aarch64 version

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/* Trapping exceptions are not supported on RISC-V.  */
#define EXCEPTION_ENABLE_SUPPORTED(EXCEPT)	((EXCEPT) == 0)

#define EXCEPTION_TESTS_float 0
#define EXCEPTION_TESTS_double        0
#define EXCEPTION_TESTS_long_double   0

#include_next <math-tests.h>