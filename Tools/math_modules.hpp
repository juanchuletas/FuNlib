#if !defined(_MATH_METHODS_H_)
#define _MATH_METHODS_H_
#include<iostream>
#include<cmath>
#include "matrices_operations.hpp"
void poissonSolver(double *hartree_vec,double *sij,double *lij,double *rho,int pnodes,double *b,double hp);
double doInterpolation(double *xin,double *yin,int grade);
double nPolExtrapolation(double *x,double *y, int N,double target);
double polReg(double *x, double *y);
double  fact(double n);
#endif // _MATH_METHODS_H_
