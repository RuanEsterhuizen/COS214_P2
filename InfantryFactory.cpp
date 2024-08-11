#include "InfantryFactory.h"

Soldiers *InfantryFactory::createUnit()
{
    Infantry* infantry = new Infantry();
    soldiers.push_back(infantry);
    return infantry;
}

int InfantryFactory::calculateTotalHealthPerUnit(Soldiers *unit) 
{
    return unit->getAmount() * unit->getHealth();
}

int InfantryFactory::calculateTotalDamagePerUnit(Soldiers *unit) 
{
    return unit->getAmount() * unit->getDamage();
}

int InfantryFactory::calculateTotalDefencePerUnit(Soldiers *unit) 
{
    return unit->getAmount() * unit->getDefence();
}
