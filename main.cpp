/*
Written by Ashutosh Vishwakarma
Date 16-04-2023
*/


#include <iostream>
#include "Vector_class.h"



int main() {
    Basis b(2,2);
    b.inputBasis();
    b.LLL();
    b.printBasis();


    return 0;
}
