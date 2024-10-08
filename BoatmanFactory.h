#ifndef BOATMANFACTORY_H
#define BOATMANFACTORY_H

#include <iostream>
using namespace std;

#include "SoldierFactory.h"
#include "Boatman.h"

class BoatmanFactory : public SoldierFactory {
    public:
        Soldiers* createUnit();
        int calculateTotalHealthPerUnit(Soldiers *unit);
        int calculateTotalDamagePerUnit(Soldiers *unit);
        int calculateTotalDefencePerUnit(Soldiers *unit);
};

#endif