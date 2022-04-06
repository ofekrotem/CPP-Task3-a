#include "Matrix.hpp"

namespace zich {
    Matrix::Matrix(vector<double> nums, int n, int m){
            this->data = nums;
            this->rows = n;
            this->cols = m;
    }

    std::vector<double> arr1 = {0, 0, 0, 0};
    Matrix mat1(arr1, 2, 2);

    double Matrix::sum() const{
        return 0;
    }

    double Matrix::mul(const int row, const int col, const Matrix &a){
        return 0;
    }

    

    Matrix operator+(const Matrix &a,const Matrix &b){
        return mat1;
    }

    Matrix operator+=(const Matrix &a,const Matrix &b){
        return mat1;
    }
    
    Matrix operator+(const Matrix &a){
        return mat1;
    }

    Matrix operator-(const Matrix &a,const Matrix &b){
        return mat1;
    }
    
    Matrix operator-=(const Matrix &a,const Matrix &b){
        return mat1;
    }
    
    Matrix operator-(const Matrix &a){
        return mat1;
    }

    bool operator>(const Matrix &a,const Matrix &b){
        return true;
    }
    
    bool operator<(const Matrix &a,const Matrix &b){
        return true;
    }
    
    bool operator==(const Matrix &a,const Matrix &b){
        return true;
    }
    
    bool operator!=(const Matrix &a,const Matrix &b){
        return true;
    }       
    
    bool operator>=(const Matrix &a,const Matrix &b){
        return true;
    }
    
    bool operator<=(const Matrix &a,const Matrix &b){
        return true;
    }

    Matrix operator++(const Matrix &a){ //suffix
        return mat1;
    }
    
    Matrix operator--(const Matrix &a){ //suffix
        return mat1;
    }

    Matrix& operator++(const Matrix &a,const int b){ //prefix
        return mat1;
    }
    
    Matrix& operator--(const Matrix &a,const int b){ //prefix
        return mat1;
    }

    Matrix operator*(const Matrix &a,const double n){
        return mat1;
    }
    
    Matrix operator*(const double n,const Matrix &a){
        return mat1;
    }
    
    Matrix operator*(const Matrix &a,const Matrix &b){
        return mat1;
    }

    
    Matrix operator*=(const Matrix &a,const double n){
        return mat1;
    }
    
    Matrix operator*=(const Matrix &a,const Matrix &b){
        return mat1;
    }
    
    ostream& operator<<(ostream& os, const Matrix &a){
        return os;
    }
    
    istream& operator>>(istream& is, Matrix &a){
        return is;
    }
}