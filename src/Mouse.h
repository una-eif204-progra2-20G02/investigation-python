//
// Created by diana on 11/10/2020.
//

#ifndef INVESTIGATION_PYTHON_MOUSE_H
#define INVESTIGATION_PYTHON_MOUSE_H

#include"BaseObject.h"

class Mouse : public BaseObject {
public:
    explicit Mouse(string name);

    void setName(string name) override;

    string getName() override;

    string toString() override;

    string doSomething() override;

    ~Mouse() override = default;
};

#endif //INVESTIGATION_PYTHON_MOUSE_H
