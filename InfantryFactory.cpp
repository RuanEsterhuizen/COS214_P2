#include "InfantryFactory.h"

Soldiers *InfantryFactory::createUnit()
{
    Infantry* infantry = new Infantry();
    soldiers.push_back(infantry);
    return infantry;
}

int InfantryFactory::calculateTotalHealthPerUnit(Infantry *unit)
{
    return unit->calculateTotalHealthPerUnit();
}

int InfantryFactory::calculateTotalDamagePerUnit(Infantry *unit)
{
    return unit->calculateTotalDamagePerUnit();
}

int InfantryFactory::calculateTotalDefencePerUnit(Infantry *unit)
{
    return unit->calculateTotalDefencePerUnit();
}
