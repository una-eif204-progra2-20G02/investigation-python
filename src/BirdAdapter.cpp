//
// Created by diana on 12/10/2020.
//

#include "BirdAdapter.h"

BirdAdapter::BirdAdapter(IRealDuck *realDuck) {
    this->realDuck = realDuck;
}

string BirdAdapter::squeak() {
    return realDuck->makeSound();
}

void BirdAdapter::setRealDuck(IRealDuck *realDuck) {
    this->realDuck = realDuck;
}

IRealDuck *BirdAdapter::getRealDuck() {
    return realDuck;
}

