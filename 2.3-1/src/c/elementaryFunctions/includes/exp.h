/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2006-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __EXP_H__
#define __EXP_H__

#include "dynlib_elementaryfunctions.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"


#ifdef  __cplusplus
extern "C" {
#endif
/*
** Compute Exponential for different types .
*/

/*
** \brief Float Exponential function
** \param in : input value.
*/
EXTERN_ELEMFUNCT float		sexps(float in);

/*
** \brief Double Exponential function
** \param in : input value.
*/
EXTERN_ELEMFUNCT double		dexps(double in);

/*
** \brief Float Complex Exponential function
** \param in : input value.
*/
EXTERN_ELEMFUNCT floatComplex	cexps(floatComplex in);

/*
** \brief Double Complex Exponential function
** \param in : input value.
*/
EXTERN_ELEMFUNCT doubleComplex	zexps(doubleComplex in);

/*
** \brief Uint8 Exponential function
** \param in : input value.
*/
EXTERN_ELEMFUNCT float		u8exps(uint8 in);

/*
** \brief Int8 Exponential function
** \param in : input value.
*/
EXTERN_ELEMFUNCT float		i8exps(int8 in);

/*
** \brief Uint16 Exponential function
** \param in : input value.
*/
EXTERN_ELEMFUNCT float		u16exps(uint16 in);

/*
** \brief Int16 Exponential function
** \param in : input value.
*/
EXTERN_ELEMFUNCT float		i16exps(int16 in);

/*
** \brief Float Matrix Exponential function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
EXTERN_ELEMFUNCT void		sexpa(float* in, int size, float* out);

/*
** \brief Double Matrix Exponential function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
EXTERN_ELEMFUNCT void		dexpa(double* in, int size, double* out);

/*
** \brief Float Complex Matrix Exponential function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
EXTERN_ELEMFUNCT void		cexpa(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix Exponential function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
EXTERN_ELEMFUNCT void		zexpa(doubleComplex* in, int size, doubleComplex* out);

/*
** \brief Uint8 Matrix Exponential function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
EXTERN_ELEMFUNCT void		u8expa(uint8* in, int size, float* out);

/*
** \brief Int8 Matrix Exponential function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
EXTERN_ELEMFUNCT void		i8expa(int8* in, int size, float* out);

/*
** \brief Uint16 Matrix Exponential function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
EXTERN_ELEMFUNCT void		u16expa(uint16* in, int size, float* out);

/*
** \brief Int16 Matrix Exponential function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
EXTERN_ELEMFUNCT void		i16expa(int16* in, int size, float* out);


#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /* !__EXP_H__ */

