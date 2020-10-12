//
// Created by diana on 11/10/2020.
//

#ifndef INVESTIGATION_PYTHON_BOXOFOBJECTS_H
#define INVESTIGATION_PYTHON_BOXOFOBJECTS_H

#include"BaseObject.h"
#include<vector>

class BoxOfObjects : public BaseObject {
private:
    vector<BaseObject *> baseObjectComposite;
public:
    explicit BoxOfObjects(string name);

    void setName(string name) override;

    string getName() override;

    void addObject(const BaseObject *baseObject) override;

    void deleteObject() override;

    string toString() override;

    string doSomething() override;

    ~BoxOfObjects() override;
};

#endif //INVESTIGATION_PYTHON_BOXOFOBJECTS_H
