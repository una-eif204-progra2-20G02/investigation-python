//
// Created by diana on 12/10/2020.
//

#ifndef INVESTIGATION_PYTHON_TOYDUCK_H
#define INVESTIGATION_PYTHON_TOYDUCK_H

#include"IToyDuck.h"


class ToyDuck : public IToyDuck {
public:
    ToyDuck() = default;

    string squeak() override;

    ~ToyDuck() override = default;
};

#endif //INVESTIGATION_PYTHON_TOYDUCK_H
