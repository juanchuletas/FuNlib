#if !defined(_LOBATTO_X_W_H_)
#define _LOBATTO_X_W_H_
#include<iostream>
#include<cmath>
void get_lobatto_quad(int n, double *x, double *w);
void lobatto_coords_weights(int order, double *xtab, double *weight);

#endif // _LOBATTO_X_W_H_
