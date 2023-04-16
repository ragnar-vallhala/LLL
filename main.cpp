/*
Written by Ashutosh Vishwakarma
And Hitesh Choudhary
Date 16-04-2023
*/


#include <iostream>
#include "Vector_class.h"



int main() {
    Basis b(3,3);
    b.inputBasis();
    b.LLL();
    b.printBasis();


    return 0;
}
