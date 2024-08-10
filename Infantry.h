#ifndef INFANTRY_H
#define INFANTRY_H

#include <iostream>
using namespace std;

#include "Soldiers.h"

class Infantry : public Soldiers {

    private: 
        //primitive operations used by engage()
        void prepare();
        void execute();
        //primitive operations used by disengage()
        void retreat();
        void rest();
    public:
        Infantry();  //not in spec
        Infantry(int health, int damage, int defence, int amount, string unitName);
        Soldiers* clonis();  //the part from the prototype
};

#endif