#if !defined(_GRID_H_)
#define _GRID_H_
#include "../Static/grid_tools.hpp"
class Grid {

    double *nodes{nullptr};
    int numNodes;
    double r0, rN;
    int Ne; 




    public:
        Grid();
        Grid(int nele, int order, double rini, double rfin);
        Grid(int numNodes, double rini, double rfin);
        ~Grid();
        //Setters and getters:
        void set(int numNodes, double rini, double rfin); //Set grid data
        double *getNodes() const;
        void create(double *grid, double *xc, int NumEle, int poly);
        //Methods to build the grid
        void FroeseFischer(int nuclearCharge);
        void Exponential();
        
        void print();




};

#endif // _GRID_H_
