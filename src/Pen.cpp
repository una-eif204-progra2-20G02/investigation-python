//
// Created by diana on 11/10/2020.
//

#include "Pen.h"

Pen::Pen(string name) : BaseObject(name) {

}

void Pen::setName(string name) {
    BaseObject::setName(name);
}

string Pen::getName() {
    return BaseObject::getName();
}

string Pen::toString() {
    return BaseObject::toString();
}

string Pen::doSomething() {
    return BaseObject::doSomething();
}

