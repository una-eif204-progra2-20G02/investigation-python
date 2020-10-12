//
// Created by diana on 11/10/2020.
//
#include<iostream>
#include"BoxOfObjects.h"
#include"Scissors.h"
#include "Mouse.h"
#include"Pen.h"
#include"Headphones.h"

using namespace std;

int main() {
    BaseObject *headphones = new Headphones("headphones");
    BaseObject *scissors = new Scissors("scissors");
    BaseObject *mouse = new Mouse("mouse");
    BaseObject *pen = new Pen("pen");
    BaseObject *box1 = new BoxOfObjects("Composite 1");
    BaseObject *box2 = new BoxOfObjects("Composite 2");

    //The following are examples of simple objects:
    cout << headphones->doSomething() << endl;
    cout << headphones->toString() << endl;
    cout << scissors->doSomething() << endl;
    cout << scissors->toString() << endl;

    //Now, the sense of composite is treating a composed object like a single one, like the box:
    box1->addObject(mouse);
    box1->addObject(pen);

    box2->addObject(headphones);
    box2->addObject(scissors);

    //And of course, you can add a box inside another one:
    box2->addObject(box1);
    cout << "Box inside another box:" << endl << box2->toString();
    box1->addObject(box2);
    cout << box2->toString();

    delete headphones;
    delete scissors;
    delete mouse;
    delete pen;
    box1->~BaseObject();
    box2->~BaseObject();
    delete box1;
    delete box2;

    return 0;
}

