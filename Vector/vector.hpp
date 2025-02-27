#ifndef _VECTOR_H_
#define _VECTOR_H_
#include "../Tools/inline_methods.hpp"
namespace funlib{

class Vector{

    private:
        double *component{nullptr};
        int N; 
    public:
    //Constructors--------
        Vector(int vectorSize); //empty vector
        Vector(int vectorSize, double *array); //constructs a vector from an array
        //Copy Constructor:
        Vector(const Vector&);
        //An asignment operator:
        const Vector& operator=(const Vector&);
        const Vector& operator=(const double&);
        //Adding two Vectors
        const Vector& operator+=(const Vector&);
        //Substracting doublewo vectors
        const Vector& operator-=(const Vector&);
        //Multiplying the current vector by a scalar
        const Vector& operator*=(const double&);
        //Dividing the current vector by a scalar
        const Vector& operator/=(const double&);
        //const double perdot(const Vector<double,N>&);
        bool operator==(const Vector&);
        //const Vector& operator+(const Vector&);
        //Dot product;
    // Maths
        Vector& cross(const Vector &v1, const Vector &v2);
        double dot(const Vector &v1, const Vector &v2);
    //Setters and getters-----
        const double& operator[](int i) const;
         double& operator[](int i);
        void set(int i, const double& a);
        int size() const ; 
    //Destructor
        ~Vector();
    

}; 



}
//#include "vector.cpp"
#endif