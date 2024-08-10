#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H

#include <iostream>
using namespace std;

#include "SoldierFactory.h"
#include "Infantry.h"

class InfantryFactory : public SoldierFactory {

    public:
        Soldiers* createUnit();
        int calculateTotalHealthPerUnit(Infantry* unit);
        int calculateTotalDamagePerUnit(Infantry* unit);
        int calculateTotalDefencePerUnit(Infantry* unit);
};

#endif