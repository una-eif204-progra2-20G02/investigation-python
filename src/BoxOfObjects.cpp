//
// Created by diana on 11/10/2020.
//

#include "BoxOfObjects.h"

#include <utility>

BoxOfObjects::BoxOfObjects(string name) : BaseObject(std::move(name)) {

}

void BoxOfObjects::setName(string name) {
    BaseObject::setName(name);
}

string BoxOfObjects::getName() {
    return BaseObject::getName();
}

void BoxOfObjects::addObject(const BaseObject *baseObject) {
    baseObjectComposite.push_back(const_cast<BaseObject *&&>(baseObject));
}

void BoxOfObjects::deleteObject() {
    if (!baseObjectComposite.empty()) {
        baseObjectComposite.pop_back();
    }
}

string BoxOfObjects::toString() {
    stringstream output;
    output << "This is the " << BaseObject::toString() << "\nThe box has inside: \n" << endl;
    for (int iterator = 0; iterator < baseObjectComposite.size(); iterator++) {
        output << baseObjectComposite.at(iterator)->toString() << endl;
    }
    return output.str();
}

string BoxOfObjects::doSomething() {
    return BaseObject::doSomething();
}

BoxOfObjects::~BoxOfObjects() {
    for (int iterator = 0; iterator < baseObjectComposite.size(); iterator++) {
        baseObjectComposite.pop_back();
    }
}



