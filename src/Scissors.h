//
// Created by diana on 12/10/2020.
//

#ifndef INVESTIGATION_PYTHON_SCISSORS_H
#define INVESTIGATION_PYTHON_SCISSORS_H

#include"BaseObject.h"

class Scissors : public BaseObject {
public:
    explicit Scissors(string name);

    void setName(string name) override;

    string getName() override;

    string toString() override;

    string doSomething() override;

    ~Scissors() override = default;
};

#endif //INVESTIGATION_PYTHON_SCISSORS_H
