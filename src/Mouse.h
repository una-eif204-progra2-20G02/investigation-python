//
// Created by diana on 11/10/2020.
//

#ifndef INVESTIGATION_PYTHON_MOUSE_H
#define INVESTIGATION_PYTHON_MOUSE_H

#include"BaseObject.h"

class Mouse : public BaseObject {
public:
    explicit Mouse(string name);

    string toString() override;

    string doSomething() override;

    ~Mouse() override = default;
};

#endif //INVESTIGATION_PYTHON_MOUSE_H
