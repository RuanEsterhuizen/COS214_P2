#include "ShieldBearerFactory.h"

Soldiers * ShieldBearerFactory::createUnit()
{
    ShieldBearer* shieldBearer = new ShieldBearer();
    soldiers.push_back(shieldBearer);
    return shieldBearer;
}

int ShieldBearerFactory::calculateTotalHealthPerUnit(Soldiers *unit)
{   
    return unit->getAmount() * unit->getHealth();
}

int ShieldBearerFactory::calculateTotalDamagePerUnit(Soldiers *unit)
{
    return unit->getAmount() * unit->getDamage();
}

int ShieldBearerFactory::calculateTotalDefencePerUnit(Soldiers *unit)
{
    return unit->getAmount() * unit->getDefence();
}
