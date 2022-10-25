/*
 * Portable freestanding math functions
 * Pete Filandr <pfiland@mindspring.com>
 *
 * This is free and unencumbered software
 * released into the public domain.
 */

#ifndef H_FS_MATH_H
#define H_FS_MATH_H

double fs_sqrt(double x);
double fs_log(double x);
double fs_log10(double x);
/*
** exp(x) = 1 + x + x^2/2! + x^3/3! + ...
*/
double fs_exp(double x);
double fs_modf(double value, double *iptr);
double fs_fmod(double x, double y);
double fs_pow(double x, double y);
double fs_cos(double x);
/*
** C99
*/
double fs_log2(double x);
double fs_exp2(double x);
long double fs_powl(long double x, long double y);
long double fs_sqrtl(long double x);
long double fs_logl(long double x);
long double fs_expl(long double x);
long double fs_cosl(long double x);
long double fs_fmodl(long double x, long double y);

#endif
