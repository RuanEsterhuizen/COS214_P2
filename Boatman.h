#ifndef BOATMAN_H
#define BOATMAN_H

#include <iostream>
using namespace std;

#include "Soldiers.h"

class Boatman : public Soldiers {
    private: 
        //primitive operations used by engage()
        void prepare();
        void execute();
        //primitive operations used by disengage()
        void retreat();
        void rest();
    public:
        Soldiers* clonis(); //the part from the prototype

        //stuff not in the spec
        Boatman();
        Boatman(int health, int damage, int defence, int amount, string unitName);
};

#endif