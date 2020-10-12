//
// Created by diana on 11/10/2020.
//

#ifndef INVESTIGATION_PYTHON_BASEOBJECT_H
#define INVESTIGATION_PYTHON_BASEOBJECT_H

#include <iostream>
#include<sstream>

using namespace std;

class BaseObject {
protected:
    string name;
public:
    BaseObject() = default;

    explicit BaseObject(string name);

    virtual void setName(string name) = 0;

    virtual void addObject(const BaseObject* baseObject) { }

    virtual void deleteObject() { }

    virtual string getName() = 0;

    virtual string toString() = 0;

    virtual string doSomething() = 0;

    virtual ~BaseObject() = default;
};

#endif //INVESTIGATION_PYTHON_BASEOBJECT_H
