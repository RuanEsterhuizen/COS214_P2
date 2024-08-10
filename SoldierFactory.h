#ifndef SOLDIERFACTORY_H
#define SOLDIERFACTORY_H

#include <iostream>
#include <vector>
using namespace std;

#include "Soldiers.h"

class SoldierFactory {

    protected:
        vector<Soldiers*> soldiers;
    protected:
        virtual Soldiers* createUnit() = 0;

        //should these be virtual or pure virtual?
        virtual int calculateTotalHealthPerUnit() = 0;
        virtual int calculateTotalDamagePerUnit() = 0;
        virtual int calculateTotalDefencePerUnit() = 0;

    // does the factory need a contructor and destructor
};

#endif