#include "Memento.h"

Memento::Memento(int health, int damage, int defence, int soldierCount, string unitName) {
    this->healthPerSoldier = health;
    this->damagePerSoldier = damage;
    this->defencePerSoldier = defence;
    this->amountOfSoldiersPerUnit = soldierCount;
    this->unitName = unitName;
}

int Memento::getHealth(){
    return healthPerSoldier;
}

int Memento::getDamage(){
    return damagePerSoldier;
}

int Memento::getDefence(){
    return defencePerSoldier;
}

int Memento::getAmount(){
    return amountOfSoldiersPerUnit;
}

string Memento::getUnitName(){
    return unitName;

}