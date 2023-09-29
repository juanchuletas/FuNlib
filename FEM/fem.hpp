#if !defined(_FEM_H_)
#define _FEM_H_
#include<iostream>
#include "../Numeric/LIP/LIP.hpp"
#include "../Numeric/Quadratures/gauss.hpp"
#include "../Tools/math_modules.hpp"
#include "../Tools/potentials.hpp"
#include "../Poisson/poisson.hpp"
class FEM{

    protected:
        int NumEle; 
        int order; //Order of the LIP
        int elemPoints; //Number of points per element
        int quadPoints;
        int numGridPoints;
        int bcSize;
        int globalSize;
        int poissSize,poissBCSize, poissElem; 
        LIP g; 
        double *femGrid{nullptr};
        int *linkMat{nullptr};
        double *elemetSize{nullptr};
        double *FemSMat{nullptr}; 



    public: 
        FEM();
        FEM(int nele, int order, double *_grid, LIP & lip);
        ~FEM();
        //SETTERS AND GETTERS
        // Build the FEM elemental matrices using a Lagrange interpolating polynomial 

    private: 
        double *vnuclear(double diff, double sum, int atomicN);
        double *numeric();
        double *radial(double diff, double sum, int exponent);


    public:   
        double *overlap();
        double *stiffness();
       

        void assemble(double *l_mat, double *u_mat, double *bcVector);
        void applyBoundaryConditions(double *matG, double *mat,int sized,int pts);
        //void assemble(double *kmat,double *vnucmat ,double *smat, int atomicN);
        void assemble(double *kmat,double *vnucmat ,double *smat,int atomicN,int index=1000000, double wall=-1.0, double *boundaryVec  = nullptr);
        double * integrateFunction(double *femMAt, double *function);
        void numericIntegral(double *numericMat, double *function, double *objectiveMat);
        double * numericIntegral(double *vector);
        double * divideOverGridPoints(double *input); 
        int getBCSize() const;
        void buildLinkMatrix();
        int getLinkMat(int index);
        
        //************

};

#endif // _FEM_H_
