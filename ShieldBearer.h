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
};

#endif