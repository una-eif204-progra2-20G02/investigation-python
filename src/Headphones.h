//
// Created by diana on 11/10/2020.
//

#ifndef INVESTIGATION_PYTHON_HEADPHONES_H
#define INVESTIGATION_PYTHON_HEADPHONES_H

#include"BaseObject.h"

class Headphones : public BaseObject {
public:
    explicit Headphones(string name);

    void setName(string name) override;

    string getName() override;

    string toString() override;

    string doSomething() override;

    ~Headphones() override = default;
};

#endif //INVESTIGATION_PYTHON_HEADPHONES_H
