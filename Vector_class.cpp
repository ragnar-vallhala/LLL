/*
Written by Ashutosh Vishwakarma
Date 16-04-2023
*/


#include "Vector_class.h"
#include <iostream>
#include <math.h>

Vector::Vector(int dimension)
{
    this->dim = dimension;
    this->vec = new double[dimension];
}

Vector::Vector(Vector& vector)
{
    this->dim = vector.dim;
    this->vec = new double[dim];

    for (int i{}; i < this->dim; i++) { this->vec[i] = vector.vec[i]; }
}

void Vector::inputVector()
{
    for (int i{}; i < this->dim; i++) {
        std::cin >> this->vec[i];
    }
}

void Vector::printVector()
{
    std::cout << "(";
    for (int i{}; i < this->dim; i++) {
        std::cout << this->vec[i] ;
        if(i<this->dim-1)std::cout<<", ";
    }
    std::cout << ")\n";
}

double Vector::norm()
{
    double sqrSum = 0;
    for (int i{}; i < this->dim; i++) { sqrSum += pow(this->vec[i], 2); }
    return sqrt(sqrSum);
}

Vector Vector::operator+(Vector vector)
{
    if (this->dim != vector.dim) { Vector ref; return ref; }
    Vector newVector(this->dim);
    for (int i{}; i < this->dim; i++) {
        newVector.vec[i] = this->vec[i] + vector.vec[i];
    }
    return newVector;
}

Vector Vector::operator-(Vector vector)
{
    if (this->dim != vector.dim) { Vector ref; return ref; }
    Vector newVector(this->dim);
    for (int i{}; i < this->dim; i++) {
        newVector.vec[i] = this->vec[i] - vector.vec[i];
    }
    return newVector;
}

double Vector::dot(Vector vector)
{
    double dotPrd{};
    for (int i{}; i < this->dim; i++) {
        dotPrd += this->vec[i] * vector.vec[i];
    }
    return dotPrd;
}

Vector Vector::operator*(double num)
{   
    Vector mult(this->dim);
    for (int i{}; i < this->dim; i++) {
        mult.vec[i] = num * this->vec[i];
    }
    return mult;
}


Basis::Basis(int l, int k)
{
    this->numVec = l;
    this->dimVec = k;
    this->basis = new Vector[numVec];
    this->gramSch = new Vector[numVec];

    Vector temp(dimVec);

    for (int i{}; i < numVec; i++) {
       this->basis[i] = temp;
       this->gramSch[i] = temp;
    }
}

void Basis::printBasis()
{
    std::cout << '{';
    for (int i{}; i < this->numVec; i++) {
        this->basis[i].printVector();
        if (i < this->numVec - 1) std::cout << ", ";
    }
    std::cout << "}\n";
}

void Basis::inputBasis()
{
    for (int i{}; i < this->numVec; i++) {
        this->basis[i].inputVector();
    }

}

void Basis::updGramSch()
{
    this->gramSch[0] = this->basis[0];
    for (int i{ 1 }; i < this->numVec; i++) {
        this->gramSch[i] = this->basis[i];

        Vector summation(this->dimVec);     //summation of vectors with their projection coefficients
        summation = summation - summation;  //to set all component to zero
        for (int j{ 0 }; j < i; j++) {
            double uji = (this->basis[i].dot(this->gramSch[j])) / (pow(this->gramSch[j].norm(), 2));

        }
    }
}
