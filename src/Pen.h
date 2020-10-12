//
// Created by diana on 11/10/2020.
//

#ifndef INVESTIGATION_PYTHON_PEN_H
#define INVESTIGATION_PYTHON_PEN_H

#include"BaseObject.h"

class Pen : public BaseObject {
public:
    explicit Pen(string name);

    void setName(string name) override;

    string getName() override;

    string toString() override;

    string doSomething() override;

    ~Pen() override = default;
};

#endif //INVESTIGATION_PYTHON_PEN_H
