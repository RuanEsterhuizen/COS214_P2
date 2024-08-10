#ifndef SHIELDBEARERFACTORY_H
#define SHIELDBEARERFACTORY_H

#include <iostream>
using namespace std;

#include "SoldierFactory.h"
#include "ShieldBearer.h";

class ShieldBearerfactory : public SoldierFactory {
    public:
        Soldiers* createUnit();
        int calculateTotalHealthPerUnit();
        int calculateTotalDamagePerUnit();
        int calculateTotalDefencePerUnit();
};

#endif