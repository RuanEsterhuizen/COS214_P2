#include "Soldiers.h"

Soldiers::Soldiers()
{
    this->healthPerSoldier = 100;
    this->damagePerSoldier = 80;
    this->defencePerSoldier = 50;
    this->amountOfSoldiersPerUnit = 10;
    this->unitName = "Unknown unit - No team";
    this->prepared = true;
}

Soldiers::Soldiers(int health, int damage, int defence, int amount, string unitName)
{
    this->healthPerSoldier = health;
    this->damagePerSoldier = damage;
    this->defencePerSoldier = defence;
    this->amountOfSoldiersPerUnit = amount;
    this->unitName = unitName;
    this->prepared = true;
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

void Soldiers::setUnitName(string newName){
    this->unitName = newName;
}

bool Soldiers::isPrepared()
{
    return prepared;
}

void Soldiers::killSoldiers(int amount)
{
    this->amountOfSoldiersPerUnit = this->amountOfSoldiersPerUnit - 10;
    if(amountOfSoldiersPerUnit <= 0)
        this->amountOfSoldiersPerUnit = 0;
}

void Soldiers::engage(Soldiers* other) // template method that uses prepare() and execute()
{
    if(other->amountOfSoldiersPerUnit == 0){
        cout << "We found an enemy banner" << endl;
        return;
    }
    cout << unitName + ", engage!" << endl;

    this->prepare();

    if(!other->isPrepared()) {
        cout << "The enemy was ambushed!" << endl << unitName + " defeats " << other->getUnitName() << endl;
        other->amountOfSoldiersPerUnit = 0;
        return;
    }
    else {
        Memento* mem = militusMemento();
        int enemyDefence = other->getDefence() * other->getAmount();
        int ourDamage = this->getDamage() * this->getAmount();

        if(enemyDefence < ourDamage) { //they get killed, we lose some soldiers
            cout << "Hard fought victory." << endl << unitName + " defeats " << other->getUnitName() << endl;
            this->killSoldiers(10);
            other->amountOfSoldiersPerUnit = 0;
        }
        else if(enemyDefence == ourDamage) { //its a tie, both lose lots of soldiers
            cout << "It is a tie." << endl; 
            other->killSoldiers(other->amountOfSoldiersPerUnit*0.5);
            this->killSoldiers(this->amountOfSoldiersPerUnit*0.5);
        }
        else if(enemyDefence > ourDamage) { //we lost
            cout << "Defeat." << endl << other->getUnitName() + " defeats " << unitName << endl;
            this->amountOfSoldiersPerUnit = 0;
        }
        if(this->amountOfSoldiersPerUnit == 0) {
        cout << "We lost too many soldiers, regrouping" << endl;
        this->vivificaMemento(mem);
        this->disengage();
        }
        delete mem;
    }

    
    
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
    return new Memento(healthPerSoldier, damagePerSoldier, defencePerSoldier, amountOfSoldiersPerUnit, unitName);;
}

void Soldiers::vivificaMemento(Memento *memento)
{
    this->healthPerSoldier = memento->getHealth();
    this->damagePerSoldier = memento->getDamage();
    this->defencePerSoldier = memento->getDefence();
    this->amountOfSoldiersPerUnit = memento->getAmount();
    this->unitName = memento->getUnitName();
}
