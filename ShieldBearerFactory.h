#ifndef SHIELDBEARERFACTORY_H
#define SHIELDBEARERFACTORY_H

#include <iostream>
using namespace std;

#include "SoldierFactory.h"
#include "ShieldBearer.h"

class ShieldBearerFactory : public SoldierFactory {
    public:
        Soldiers* createUnit();
        int calculateTotalHealthPerUnit(Soldiers * unit);
        int calculateTotalDamagePerUnit(Soldiers * unit);
        int calculateTotalDefencePerUnit(Soldiers * unit);
};

#endif