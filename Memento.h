#ifndef MEMENTO_H
#define MEMENTO_H

#include <iostream>
using namespace std;

class Memento {
    private:
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        string unitName;
    
        Memento(int health, int damage, int defence, int soldierCount, string unitName);
    
    public:
        int getHealth();
        int getDamage();
        int getDefence();
        int getAmount();
        string getUnitName();
    
};

#endif