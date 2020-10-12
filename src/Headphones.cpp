//
// Created by diana on 11/10/2020.
//

#include "Headphones.h"

Headphones::Headphones(string name) : BaseObject(std::move(name)) {

}

void Headphones::setName(string name) {
    BaseObject::setName(name);
}

string Headphones::getName() {
    return BaseObject::getName();
}

string Headphones::toString() {
    stringstream output;
    output << BaseObject::toString() << endl;
    return output.str();
}

string Headphones::doSomething() {
    return BaseObject::doSomething();
}




