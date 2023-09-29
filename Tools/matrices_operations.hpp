#if !defined(_MATRICES_OPERATIONS)
#define _MATRICES_OPERATIONS
#include<iostream>
#include<cmath>
namespace funQC{
    namespace matrix{
        void diag (int n, double *h, double *s, double *e, double *v);
        void sum(double *A, double *B, double *C, int sizeA, int sizeB);
        void sub(double *A, double *B, double *C, int sizeA, int sizeB);
        void product(double *mat_A,double *mat_B, double *mat_C,int N,int M, int P);
        void MatXvec(double *matA,double *vec,double *res,int SIZE);
        void ScalarXMatrix(double coeff,double *mat_A,double *mat_Res,int N,int M);
        void ColumnMayor(double *mat_A, double *mat_C, int N, int M);
        void RowMayor(double *mat_A, double *mat_C, int N, int M);
        void FillZeroMat(double *mat,int M,int N);
        void divideBy(double *newrho, double *rho,double *femnodes,int nfembasis);
        void matMult(double *A, int rowsA,int colsA, double *B,int rowsB, int colsB,double *C);
    }
}
extern "C" void dgesv_( int* n, int* nrhs, double* a, int* lda, int* ipiv, double* b, int* ldb, int* info );
extern "C" void dsyev_(char*, char*, int*, double*, int*, double*, double*, int*, int*);
extern "C" void dsysv_( char* uplo, int* n, int* nrhs, double* a, int* lda,int* ipiv, double* b, int* ldb, double* work, int* lwork, int* info );
#endif // _MATRICES_OPERATIONS
