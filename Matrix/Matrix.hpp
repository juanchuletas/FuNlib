#if !defined(_MATRIX_H_)
#define _MATRIX_H_
#include<string>
#include <iostream>
#include <iomanip>
#include "../Tools/inline_methods.hpp"
namespace funlib{

    class Matrix{

        int m_rows; 
        int m_cols;
        int m_GloblalSize; 
        double  *items;

        public:
            Matrix();
            Matrix(int rows, int cols);
            Matrix(int MatSize);//Default constructor
            Matrix(int MatSize,double& data);//Copy Constructor
            Matrix(int rows, int cols, double *data);
            Matrix(const Matrix &source);
            ~Matrix();
            //METHODS
            void fillWithZeros();
            void printMatrix();
            void printMatrix(int, int, std::string name);
            void sort();
            bool isSquare()const;
            void swapRows(int a_Row, int b_Row);
            void addFactorXRowToRow(double factor, int a_Row, int b_Row );
            int rowIndexWithMaxElememInCol(int searchingColumn,int startingRow);
            void rowTimesFactor(int targetRow, double factor);
            Matrix& idenitity(); 
            Matrix & sum();
            //GETTERS
            int getSize() const; 
            int getRows() const; 
            int getCols() const; 
            //SETTERS
            void setMatrix(int dimension);

            //OPERATORS
            Matrix & operator=(const Matrix &source);
            const double& operator[](int i) const;
            double& operator[](int i);
    };

}

#endif // _MATRIX_H_
