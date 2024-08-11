#include "BoatmanFactory.h"

Soldiers *BoatmanFactory::createUnit()
{
    Boatman* boatman = new Boatman();
    soldiers.push_back(boatman);
    return boatman;
}

int BoatmanFactory::calculateTotalHealthPerUnit(Soldiers *unit)
{
    return unit->getAmount() * unit->getHealth();
}

int BoatmanFactory::calculateTotalDamagePerUnit(Soldiers *unit)
{
    return unit->getAmount() * unit->getDamage();
}

int BoatmanFactory::calculateTotalDefencePerUnit(Soldiers *unit)
{
    return unit->getAmount() * unit->getDefence();
}
