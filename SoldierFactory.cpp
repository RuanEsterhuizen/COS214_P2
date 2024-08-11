#include "SoldierFactory.h"


SoldierFactory::~SoldierFactory(){
    for(Soldiers * soldier : soldiers){
        if(soldier != nullptr){
            delete soldier;
        }
        
    }
    soldiers.clear();
}