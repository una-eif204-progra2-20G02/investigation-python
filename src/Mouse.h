//
// Created by diana on 11/10/2020.
//

#ifndef INVESTIGATION_PYTHON_MOUSE_H
#define INVESTIGATION_PYTHON_MOUSE_H
#include"IBaseObject.h"

class Mouse : public IBaseObject
{
public:
    Mouse() = default;
    string toString() override;
    string doSomething() override;
    virtual ~Mouse() = default;
};
#endif //INVESTIGATION_PYTHON_MOUSE_H
