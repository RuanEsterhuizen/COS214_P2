#include "ShieldBearerFactory.h"

Soldiers *ShieldBearerfactory::createUnit()
{
    ShieldBearer* shieldBearer = new ShieldBearer();
    soldiers.push_back(shieldBearer);
    return shieldBearer;
}

int ShieldBearerfactory::calculateTotalHealthPerUnit(ShieldBearer *unit)
{
    return unit->calculateTotalHealthPerUnit();
}

int ShieldBearerfactory::calculateTotalDamagePerUnit(ShieldBearer *unit)
{
    return unit->calculateTotalDamagePerUnit();
}

int ShieldBearerfactory::calculateTotalDefencePerUnit(ShieldBearer *unit)
{
    return unit->calculateTotalHealthPerUnit();
}
