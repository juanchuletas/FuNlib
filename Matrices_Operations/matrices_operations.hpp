#if !defined(_MATRICES_OPERATIONS_H_)
#define _MATRICES_OPERATIONS_H_
#include "../Matrix/matrix.hpp"

 namespace funlib{

   namespace matrix
   {
      

      funlib::Matrix gemm(const funlib::Matrix & mat1, const funlib::Matrix& mat2);

      void addIdentityMatrix(funlib::Matrix &fMat, funlib::Matrix &iMat,funlib::Matrix &inputMat); //Adds an identity matrix at the end of the cols of the input matrix
      void inverse(funlib::Matrix & mat);

   } // namespace LinearAlgebra
 }

#endif // _MATRICES_OPERATIONS_H_
