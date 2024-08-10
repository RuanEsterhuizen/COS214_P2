#include "ShieldBearerFactory.h"

Soldiers *ShieldBearerfactory::createUnit()
{
    return new ShieldBearer();
}