
#include <iostream>

#include "class.h"

int main(){

    int a = 0;
    std::cout << "Hello from main.cpp" << std::endl;

    DummyClass A;
    A.sayHelloFromHeader();
    A.sayHelloFromCode();

    return 0;
}