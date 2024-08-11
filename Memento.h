#ifndef MEMENTO_H
#define MEMENTO_H

#include <iostream>
using namespace std;

class Memento {

    friend class Soldiers;

    private:
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        string unitName;
    public:
        Memento(int health, int damage, int defence, int soldierCount, string unitName);
        int getHealth();
        int getDamage();
        int getDefence();
        int getAmount();
        string getUnitName();
    
};

#endif