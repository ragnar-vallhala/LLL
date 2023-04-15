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
    void inputTerminal();

    /*
    Prints the vector elements to terminal
    */
    void printTerminal();

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

#endif