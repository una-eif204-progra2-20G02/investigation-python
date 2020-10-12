//
// Created by diana on 11/10/2020.
//

#ifndef INVESTIGATION_PYTHON_HEADPHONES_H
#define INVESTIGATION_PYTHON_HEADPHONES_H
#include"IBaseObject.h"

class Headphones : public IBaseObject
{
public:
    Headphones() = default;
    string toString() override;
    string doSomething() override;
    virtual ~Headphones() = default;
};
#endif //INVESTIGATION_PYTHON_HEADPHONES_H
