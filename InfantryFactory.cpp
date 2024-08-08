#include "InfantryFactory.h"

Soldiers *InfantryFactory::createUnit()
{
    //should the factory hardcode or take input?

    return new Infantry();
}