//
// Created by diana on 12/10/2020.
//

#ifndef INVESTIGATION_PYTHON_BIRDADAPTER_H
#define INVESTIGATION_PYTHON_BIRDADAPTER_H

#include"IRealDuck.h"
#include"ToyDuck.h"

class BirdAdapter : public ToyDuck {
protected:
    IRealDuck *realDuck; //It has to be the interface expected
public:
    explicit BirdAdapter(IRealDuck *realDuck);

    string squeak() override;

    void setRealDuck(IRealDuck *realDuck);

    IRealDuck *getRealDuck();

    ~BirdAdapter() override { delete realDuck; }
};

#endif //INVESTIGATION_PYTHON_BIRDADAPTER_H
