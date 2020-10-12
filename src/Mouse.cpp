//
// Created by diana on 11/10/2020.
//

#include "Mouse.h"

Mouse::Mouse(string name) : BaseObject(std::move(name)) {

}

string Mouse::getName() {
    return BaseObject::getName();
}

void Mouse::setName(string name) {
    BaseObject::setName(name);
}

string Mouse::toString() {
    stringstream output;
    output << BaseObject::toString() << endl;
    return output.str();
}

string Mouse::doSomething() {
    return BaseObject::toString();
}





