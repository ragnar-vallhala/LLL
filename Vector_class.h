/*
Written by Ashutosh Vishwakarma
Date 16-04-2023
*/


#pragma once
#ifndef Vector_class
#define Vector_class


class Vector {
private:

    int dim;        //Dimensions in the vector

    double* vec;  //Vector

public:

    /*
    Default Constructor
    */
    Vector() = default;

    /*
    Constructor
    @param dimension: Dimension
    */
    Vector(int dimension);

    /*
    Copy Constructor
    @param &vector: reference to a vector
    */
    Vector(Vector& vector);

    /*
    Takes input for the vector elements from terminal
    */
    void inputVector();

    /*
    Prints the vector elements to terminal
    */
    void printVector();

    /*
    Returns eucledian norm of the vector
    */
    double norm();

    /*
    Overload of the + operator
    */
    Vector operator +(Vector vector);


    /*
    Overload of the - operator
    */
    Vector operator -(Vector vector);

    /*
    Gives dot product
    @param vector: Second vector
    */
    double dot(Vector vector);

    /*
    Overload of * operator
    Gives scalar multiple
    */
    Vector operator* (double num);


};



class Basis {
private:
    int numVec;
    int dimVec;
    Vector* basis;
    Vector* gramSch;

public:

    /*
    Deafault constructor
    */
    Basis() = default;

    /*
    Constructor
    @param l: number of vector
    @param k: dimension of vector
    */
    Basis(int l, int k);

    /*
    Prints all vectors of basis
    */
    void printBasis();

    /*
    Takes input of basis
    */
    void inputBasis();

    /*
    Updates Gram Schimdth
    */
    void updGramSch();

};


#endif