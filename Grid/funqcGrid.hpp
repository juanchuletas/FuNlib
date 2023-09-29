#if !defined(_FUNQC_GRID_H_)
#define _FUNQC_GRID_H_
#include<iostream>
#include "../Static/grid_tools.hpp"
namespace funQC
{   
    namespace grid{
        double *exponential(double r0, double rN, int points,int meshDens);
        double *froeseFischer(double r0, double rN, int points, int atomicN);
        double *create(double rini, double rfin, double rC,int &rcIndex,int order, int numele, int gridType,int confType, int atomicN, double *xpts);
        void refineNear(int index,int steps ,double delta,double *grid, int points);
        int forcedInsertion(double rC, double *grid, int points);
    }
} // namespace funQC


#endif // _FUNQC_GRID_H_
