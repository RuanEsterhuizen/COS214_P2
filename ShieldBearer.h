#ifndef SHIELDBEARER_H
#define SHIELDBEARER_H

#include <iostream>
using namespace std;

#include "Soldiers.h"

class ShieldBearer : public Soldiers {
    private:
        //primitive operations used by engage()
        void prepare();
        void execute();
        //primitive operations used by disengage()
        void retreat();
        void rest();
    public: 
        Soldiers* clonis();  //the part from the prototype

        //stuff not in spec
        ShieldBearer();
        ShieldBearer(int health, int damage, int defence, int amount, string unitName);
};

#endif