//
// Created by diana on 12/10/2020.
//

#include "RealDuck.h"

string RealDuck::fly() {
    stringstream output;
    output << "The real duck flies" << endl;
    return output.str();
}

string RealDuck::makeSound() {
    stringstream output;
    output << "The real duck makes sound" << endl;
    return output.str();
}

