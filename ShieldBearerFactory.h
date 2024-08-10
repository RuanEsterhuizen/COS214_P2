#ifndef SHIELDBEARERFACTORY_H
#define SHIELDBEARERFACTORY_H

#include <iostream>
using namespace std;

#include "SoldierFactory.h"
#include "ShieldBearer.h";

class ShieldBearerfactory : public SoldierFactory {
    public:
        Soldiers* createUnit();
        int calculateTotalHealthPerUnit(ShieldBearer* unit);
        int calculateTotalDamagePerUnit(ShieldBearer* unit);
        int calculateTotalDefencePerUnit(ShieldBearer* unit);
};

#endif