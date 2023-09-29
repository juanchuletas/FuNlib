#if !defined(_LU_DECOMP_GAUSS_)
#define _LU_DECOMP_GAUSS_
#include<iostream>
#include<cmath>
namespace LinearAlgebra{


    class GaussLU{
        public:
            static int getMaxValueAtColumn(int index, double *matA, int rows, int cols);
            static void decomp(double *matA,int rows, int cols);
            static void swapRows(int row1, int row2, double *matrix ,int N);
            static double *solve(double *matA,int rows, int cols);
            static void pivot_scale(int k,double *matA, int rows, int cols);
            static void decomp(double *matA, int rows, int cols, int pivoting);
            static void assamble(double *matTot,double *matA, double *xvec,int rows, int cols);
            static void backSub(double *matA,double *xvec,int rows, int cols);  
    };



}

#endif // _LU_DECOMP_GAUSS_
