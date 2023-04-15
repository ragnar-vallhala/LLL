/*
Written by Ashutosh Vishwakarma
Date 16-04-2023
*/


#include <iostream>
#include "Vector_class.h"



int main() {
    Vector v1(10);
    v1 = v1 - v1;
    v1.printVector();

    return 0;
}
