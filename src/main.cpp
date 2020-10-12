//
// Created by diana on 11/10/2020.
//
#include <iostream>
#include "BoxOfObjects.h"
#include "Scissors.h"
#include "Mouse.h"
#include "Pen.h"
#include "Headphones.h"
#include "RealDuck.h"
#include "ToyDuck.h"
#include "BirdAdapter.h"

using namespace std;

int main() {
    BaseObject *headphones = new Headphones("Headphones");
    BaseObject *scissors = new Scissors("Scissors");
    BaseObject *mouse = new Mouse("Mouse");
    BaseObject *pen = new Pen("Pen");
    BaseObject *box1 = new BoxOfObjects("Composite 1");
    BaseObject *box2 = new BoxOfObjects("Composite 2");

    cout << "----------------------------COMPOSITE------------------------------------------"<< endl;

    //The following are examples of simple objects:
    cout << headphones->doSomething() << endl;
    cout << headphones->toString() << endl;
    cout << scissors->doSomething() << endl;
    cout << scissors->toString() << endl;

    //Now, the sense of composite is treating a composed object as a single one like the box,
    //and of course, you can add a box inside another one:
    box1->addObject(mouse);
    box1->addObject(pen);

    box2->addObject(headphones);
    box2->addObject(scissors);
    box2->addObject(box1);

    cout << "Box inside another box:" << endl << box2->toString() << endl << endl;

    cout << "----------------------------ADAPTER------------------------------------------"<< endl;

    IRealDuck* realDuck = new RealDuck();
    IToyDuck* toyDuck = new ToyDuck();
    BirdAdapter birdAdapter(realDuck);

    cout << realDuck->makeSound() << endl;
    cout << toyDuck->squeak() << endl;
    cout << birdAdapter.squeak() << endl;



    delete headphones;
    delete scissors;
    delete mouse;
    delete pen;
    delete box1;
    delete box2;
    delete realDuck;
    delete toyDuck;

    return 0;
}

