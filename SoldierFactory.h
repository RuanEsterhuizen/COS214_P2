#ifndef SOLDIERFACTORY_H
#define SOLDIERFACTORY_H

#include <iostream>
using namespace std;

#include "Soldiers.h"

class SoldierFactory {
    private:
        Soldiers* soldiers;
    protected:
        virtual Soldiers* createUnit() = 0;

        //should these be virtual or pure virtual?
        virtual int calculateTotalHealthPerUnit();
        virtual int calculateTotalDamagePerUnit();
        virtual int calculateTotalDefencePerUnit();

    // does the factory need a contructor and destructor
};

#endif