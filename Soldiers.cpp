#include "Soldiers.h"
Soldiers::Soldiers()
{
    this->healthPerSoldier = 100;
    this->damagePerSoldier = 80;
    this->defencePerSoldier = 50;
    this->amountOfSoldiersPerUnit = 10;
    this->unitName = "Unknown unit - No team";
}

Soldiers::Soldiers(int health, int damage, int defence, int amount, string unitName)
{
    this->healthPerSoldier = health;
    this->damagePerSoldier = damage;
    this->defencePerSoldier = defence;
    this->amountOfSoldiersPerUnit = amount;
    this->unitName = unitName;
}

int Soldiers::getHealth(){
    return healthPerSoldier;
}

int Soldiers::getDamage(){
    return damagePerSoldier;
}

int Soldiers::getDefence(){
    return defencePerSoldier;
}

int Soldiers::getAmount(){
    return amountOfSoldiersPerUnit;
}

string Soldiers::getUnitName(){
    return unitName;
}



int Soldiers::calculateTotalHealthPerUnit()
{
    return healthPerSoldier * amountOfSoldiersPerUnit;
}

int Soldiers::calculateTotalDamagePerUnit()
{
    return damagePerSoldier * amountOfSoldiersPerUnit;
}

int Soldiers::calculateTotalDefencePerUnit()
{
    return defencePerSoldier * amountOfSoldiersPerUnit;
}

void Soldiers::engage() // template method that uses prepare() and execute()
{
    cout << unitName + ", engage!" << endl;
    this->prepare();
    this->execute();
    cout << "engage complete" << endl;
}

void Soldiers::disengage()  //template method that uses retreat() and rest()
{
    cout << unitName + ", disengage!" << endl;
    this->retreat();
    this->rest();
    cout << "disengage complete" << endl;
}

Memento *Soldiers::militusMemento()
{
    //creates a memento with the current state
    Memento * memento = new Memento(int health, int damage, int defence, int soldierCount, string unitName);
    return memento;
}

void Soldiers::vivificaMemento(Memento *memento)
{
    this->healthPerSoldier = memento->getHealth();
    this->damagePerSoldier = memento->getDamage();
    this->defencePerSoldier = memento->getDefence();
    this->amountOfSoldiersPerUnit = memento->getAmount();
    this->unitName = memento->getUnitName();
    //restores to the state of this memento
}
