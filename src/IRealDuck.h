//
// Created by diana on 12/10/2020.
//

#ifndef INVESTIGATION_PYTHON_IREALDUCK_H
#define INVESTIGATION_PYTHON_IREALDUCK_H

#include <iostream>
#include<sstream>

using namespace std;

class IRealDuck {
public:
    virtual string fly() = 0;

    virtual string makeSound() = 0;

    virtual ~IRealDuck() = default;
};

#endif //INVESTIGATION_PYTHON_IREALDUCK_H
