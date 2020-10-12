//
// Created by diana on 11/10/2020.
//

#include "BaseObject.h"

BaseObject::BaseObject(string name) {
    this->name = name;
}

void BaseObject::setName(string name) {
    this->name = name;
}

string BaseObject::getName() {
    return name;
}

string BaseObject::toString() {
    stringstream output;
    output << "- " << name << endl;
    return output.str();
}

string BaseObject::doSomething() {
    return "I do something";
}
