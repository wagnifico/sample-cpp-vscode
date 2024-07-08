
#ifndef _CLASS_H_
#define _CLASS_H_

#include <iostream>

class DummyClass {

    public:

        void sayHelloFromHeader(){
            int a = 1;
            std::cout << "Hello from class.h" << std::endl;
        };

        void sayHelloFromCode();

};

#endif