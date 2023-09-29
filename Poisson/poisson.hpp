#if !defined(_POISSON_EQ_)
#define _POISSON_EQ_
#include<iostream>
#include "../Tools/matrices_operations.hpp"
#include "../LinearAlgebra/LUDECOMP/ludecomp_gauss.hpp"
#include "../LinearAlgebra/LUDECOMP/ludecomp.hpp"
#include "../LinearAlgebra/LUDECOMP/cholesky.hpp"

namespace funQC
{
    namespace Poisson{

        double *getSourceVector(double *matS, double *rightVec, double *boundaryVector, double bcValue, int domainSize);
        void getBoundaryVector(double *l_mat, double *boundaryVector, int nodes);
        double *solveEquation(double *l_mat, double *sourceVector,int domainSize);
        double *solve(double *l_mat, double *sourceVector,int domainSize);
        double *solve(double *f_mat, double *smat, double *xvec,double eigenVal,int domainSize);

    }
} // namespace funQC


#endif // _POISSON_EQ_
