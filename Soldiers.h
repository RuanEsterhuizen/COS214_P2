#ifndef SOLDIERS_H
#define SOLDIERS_H

#include <iostream>
using namespace std;

// should we do templates for this?
class Soldiers {
    private:
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        string unitName;

        
        
        // template method primitive operations
        virtual void prepare() = 0;
        virtual void execute() = 0;
        virtual void retreat() = 0;
        virtual void rest() = 0;

    public:

        void engage();  //template method that uses prepare() and execute()
        void disengage();  //template method that uses retreat() and rest()

};

#endif