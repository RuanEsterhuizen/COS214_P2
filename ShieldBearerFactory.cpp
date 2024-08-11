#include "ShieldBearerFactory.h"

Soldiers *ShieldBearerfactory::createUnit()
{
    ShieldBearer* shieldBearer = new ShieldBearer();
    soldiers.push_back(shieldBearer);
    return shieldBearer;
}

int ShieldBearerFactory::calculateTotalHealthPerUnit(ShieldBearer *unit)
{
    return unit->getAmount() * unit->getHealth();
}

int ShieldBearerFactory::calculateTotalDamagePerUnit(ShieldBearer *unit)
{
    return unit->getAmount() * unit->getDamage();
}

int ShieldBearerFactory::calculateTotalDefencePerUnit(ShieldBearer *unit)
{
    return unit->getAmount() * unit->getDefence();
}
