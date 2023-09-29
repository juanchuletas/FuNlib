#if !defined(_LOBATTO_H_)
#define _LOBATTO_H_
#include "../Polynomials/polynomial.hpp"
#include "lobatto_coords_weights.hpp"
#include<iostream>

class Lobatto{

        int nQpts;
        double *x; 
        double *w;

        public:
            Lobatto();
            Lobatto(int _pts);
            ~Lobatto();

            void set();
            double *getCoords() const ;
            double *getWeights() const; 
            int getNumNodes() const;
            double operator()(Polynomial &p, Polynomial &);
            double operator()(Polynomial &p, Polynomial &,Polynomial &c);
            double operator()(double *a, double *b);

};


#endif // _LOBATTO_H_
