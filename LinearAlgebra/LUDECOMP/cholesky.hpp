#if !defined(_CHOLESKY_H_)
#define _CHOLESKY_H_
#include<iostream>
#include<cmath>
namespace LinearAlgebra{
    class Cholesky{
        public:
            static void decomp(double *matA, double *matAux, int rows, int cols);
            static void solve(double *LU, double *b, double *x, int d);


    };
}

#endif // _CHOLESKY_H_
