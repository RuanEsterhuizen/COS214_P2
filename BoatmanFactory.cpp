#include "BoatmanFactory.h"

Soldiers *BoatmanFactory::createUnit()
{
    Boatman* boatman = new Boatman();
    soldiers.push_back(boatman);
    return boatman;
}

int BoatmanFactory::calculateTotalHealthPerUnit(Boatman *unit)
{
    return unit->getAmount() * unit->getHealth();
}

int BoatmanFactory::calculateTotalDamagePerUnit(Boatman *unit)
{
    return unit->getAmount() * unit->getDamage();
}

int BoatmanFactory::calculateTotalDefencePerUnit(Boatman *unit)
{
    return unit->getAmount() * unit->getDefence();
}
