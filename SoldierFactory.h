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
        virtual ~SoldierFactory();
        virtual int calculateTotalHealthPerUnit(Soldiers * unit) = 0;
        virtual int calculateTotalDamagePerUnit(Soldiers * unit) = 0;
        virtual int calculateTotalDefencePerUnit(Soldiers * unit) = 0;

    // does the factory need a contructor and destructor
};

#endif