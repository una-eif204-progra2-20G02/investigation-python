//
// Created by diana on 12/10/2020.
//

#ifndef INVESTIGATION_PYTHON_REALDUCK_H
#define INVESTIGATION_PYTHON_REALDUCK_H

#include"IRealDuck.h"


class RealDuck : public IRealDuck {
public:
    RealDuck() = default;

    string fly() override;

    string makeSound() override;

    ~RealDuck() override = default;
};

#endif //INVESTIGATION_PYTHON_REALDUCK_H
