#include "InfantryFactory.h"

Soldiers *InfantryFactory::createUnit()
{
    Infantry* infantry = new Infantry();
    soldiers.push_back(infantry);
    return infantry;
}

int InfantryFactory::calculateTotalHealthPerUnit(Infantry *unit)
{
    return unit->getAmount() * unit->getHealth();
}

int InfantryFactory::calculateTotalDamagePerUnit(Infantry *unit)
{
    return unit->getAmount() * unit->getDamage();
}

int InfantryFactory::calculateTotalDefencePerUnit(Infantry *unit)
{
    return unit->getAmount() * unit->getDefence();
}
