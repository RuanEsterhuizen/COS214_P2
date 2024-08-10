#include "BoatmanFactory.h"

Soldiers *BoatmanFactory::createUnit()
{
    Boatman* boatman = new Boatman();
    soldiers.push_back(boatman);
    return boatman;
}

int BoatmanFactory::calculateTotalHealthPerUnit(Boatman *unit)
{
    return unit->calculateTotalHealthPerUnit();
}

int BoatmanFactory::calculateTotalDamagePerUnit(Boatman *unit)
{
    return unit->calculateTotalDamagePerUnit();
}

int BoatmanFactory::calculateTotalDefencePerUnit(Boatman *unit)
{
    return unit->calculateTotalDefencePerUnit();
}
