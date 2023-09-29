#if !defined(_LIL_H_)
#define _LIL_H_
#include <string>
#include "../Polynomials/polynomial.hpp"

class LIP {
    int Npol;
    int grad;
    int Nqpts;
    int Nnodes;
    double *xp{nullptr};
    Polynomial *p;

    public:
        LIP();
        LIP(int order, int qpts);
        LIP(const LIP &lip);
        ~LIP();
        void evaluate(double *x);
        void derivatives(double *f);
        void setNodes(double *nodes);
        void setNodes();
        double getNode(int i) const;
        int getNumNodes()const;
        void getTransformedNodes(double *xpts);
        int order();
        int getQuadPoints() const;
        Polynomial & operator()(int,std::string);
};

double * der(Polynomial &p);

#endif // _LIL_H_
