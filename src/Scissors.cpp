//
// Created by diana on 12/10/2020.
//

#include "Scissors.h"

Scissors::Scissors(string name) : BaseObject(name) {

}

void Scissors::setName(string name) {
    BaseObject::setName(name);
}

string Scissors::getName() {
    return BaseObject::getName();
}

string Scissors::toString() {
    return BaseObject::toString();
}

string Scissors::doSomething() {
    return BaseObject::doSomething();
}

