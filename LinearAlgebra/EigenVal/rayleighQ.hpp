#if !defined(_RAYLEIGH_Q_H_)
#define _RAYLEIGH_Q_H_
#include "../../Tools/matrices_operations.hpp"
namespace funQC{ 

    namespace LinearAlgebra{


        double* rayleighQuotient(double *matF, double *matS, double *cvec,double *xvec, int nRows, int nCols, int numEigenvalues);
    }
}


#endif // _RAYLEIGH_Q_H_
