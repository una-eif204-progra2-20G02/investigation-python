//
// Created by diana on 11/10/2020.
//

#include "Mouse.h"

Mouse::Mouse(string name) : BaseObject(std::move(name)) {

}

string Mouse::toString() {
    stringstream output;
    output << "Mouse" << endl;
    return output.str();
}

string Mouse::doSomething() {
    return "I do ssomething too";
}



