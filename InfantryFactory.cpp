#include "InfantryFactory.h"

Soldiers *InfantryFactory::createUnit()
{
    return new Infantry();
}