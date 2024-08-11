#include "SoldierFactory.h"


SoldierFactory::~SoldierFactory(){
    for(Soldiers * soldier : soldiers){
        delete soldier;
    }
    soldiers.clear();
}