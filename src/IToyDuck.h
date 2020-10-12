//
// Created by diana on 12/10/2020.
//

#ifndef INVESTIGATION_PYTHON_ITOYDUCK_H
#define INVESTIGATION_PYTHON_ITOYDUCK_H

#include <iostream>
#include<sstream>

using namespace std;

class IToyDuck {
public:
    virtual string squeak() = 0;

    virtual ~IToyDuck() = default;
};

#endif //INVESTIGATION_PYTHON_ITOYDUCK_H
