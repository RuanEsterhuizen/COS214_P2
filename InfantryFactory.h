#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H

#include <iostream>
using namespace std;

#include "SoldierFactory.h"

class InfantryFactory : public SoldierFactory {
    public:
        Soldiers* createUnit();
        int calculateTotalHealthPerUnit();
        int calculateTotalDamagePerUnit();
        int calculateTotalDefencePerUnit();
};

#endif