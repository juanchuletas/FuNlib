#if !defined(_POLYN_H_)
#define _POLYN_H_
#include<iostream>
class Polynomial{

    public:
        double *x{nullptr};
        double *dx{nullptr}; 
        int npts;
        int order;
        Polynomial();
        Polynomial(int _order, int _quadPts);
        ~Polynomial();
        void set(int _order, int _quadPts);
        int getOrder();


};

#endif // MACRO
