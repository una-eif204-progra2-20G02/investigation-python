//
// Created by diana on 11/10/2020.
//

#ifndef INVESTIGATION_PYTHON_BASEOBJECT_H
#define INVESTIGATION_PYTHON_BASEOBJECT_H

#include"IBaseObject.h"

class BaseObject : public IBaseObject {
private:
    string name;
public:
    BaseObject();

    explicit BaseObject(string name);

    virtual void setName(string name);

    virtual string getName();

    string toString() override;

    string doSomething() override;

    virtual ~BaseObject() = default;
};

#endif //INVESTIGATION_PYTHON_BASEOBJECT_H
