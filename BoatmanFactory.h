#ifndef BOATMANFACTORY_H
#define BOATMANFACTORY_H

#include <iostream>
using namespace std;

#include "SoldierFactory.h"

class BoatmanFactory : public SoldierFactory {
    public:
        Soldiers* createUnit();
        int calculateTotalHealthPerUnit();
        int calculateTotalDamagePerUnit();
        int calculateTotalDefencePerUnit();
};

#endif