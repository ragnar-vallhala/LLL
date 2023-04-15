/*
Written by Ashutosh Vishwakarma
Date 16-04-2023
*/


#include <iostream>
#include "Vector_class.h"
using namespace std;


int main() {
    Vector temp(3);
    temp.inputTerminal();
    Vector newVec = temp;
    newVec = temp * 5;
    newVec.printTerminal();

    return 0;
}
