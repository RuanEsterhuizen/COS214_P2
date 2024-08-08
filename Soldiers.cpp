#include "Soldiers.h"

Soldiers::Soldiers(int health, int damage, int defence, int amount, string unitName)
{
    this->healthPerSoldier = health;
    this->damagePerSoldier = damage;
    this->defencePerSoldier = defence;
    this->amountOfSoldiersPerUnit = amount;
    this->unitName = unitName;
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
    return NULL;
}

void Soldiers::vivificaMemento(Memento *memento)
{
    //restores to the state of this memento
}
