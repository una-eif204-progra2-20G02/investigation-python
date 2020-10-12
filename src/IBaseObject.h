//
// Created by diana on 11/10/2020.
//

#ifndef INVESTIGATION_PYTHON_IBASEOBJECT_H
#define INVESTIGATION_PYTHON_IBASEOBJECT_H
#include<iostream>
#include<sstream>
using namespace std;

class IBaseObject
{
public:
    virtual string toString () = 0;
    virtual string doSomething() = 0;
    ~IBaseObject() = default;
};
#endif //INVESTIGATION_PYTHON_IBASEOBJECT_H
