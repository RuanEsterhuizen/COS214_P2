#include "Memento.h"

Memento::Memento(int health, int damage, int defence, int soldierCount, string unitName) {
    this->healthPerSoldier = health;
    this->damagePerSoldier = damage;
    this->defencePerSoldier = defence;
    this->amountOfSoldiersPerUnit = soldierCount;
    this->unitName = unitName;

    //this also needs to be saved on a stack -> caretaker
}