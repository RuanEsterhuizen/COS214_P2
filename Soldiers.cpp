#include "Soldiers.h"
Soldiers::Soldiers()
{
    this->healthPerSoldier = 100;
    this->damagePerSoldier = 80;
    this->defencePerSoldier = 50;
    this->amountOfSoldiersPerUnit = 10;
    this->unitName = "Unknown unit - No team";
    this->disengaged = true;
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

bool Soldiers::isDisengaged()
{
    return disengaged;
}

void Soldiers::killSoldiers(int amount)
{
    this->amountOfSoldiersPerUnit = this->amountOfSoldiersPerUnit - 10;
    if(amountOfSoldiersPerUnit <= 0)
        this->amountOfSoldiersPerUnit = 0;
}

void Soldiers::engage(Soldiers* other) // template method that uses prepare() and execute()
{
    cout << unitName + ", engage!" << endl;

    this->disengaged = false;

    this->prepare();

    if(other->isDisengaged()) {
        cout << "The enemy was ambushed!" << endl << unitName + " defeats " << other->getUnitName;
        delete other;
        return;
    }
    else {
        Memento* mem = militusMemento();

        int enemyDefence = other->getDefence * other->getAmount;
        int ourDamage = this->getDamage * this->getAmount;

        if(enemyDefence < ourDamage) { //they get killed, we lose some soldiers
            cout << "Hard fought victory." << endl << unitName + " defeats " << other->getUnitName*();
            this->killSoldiers(10);
            delete other;
        }
        else if(enemyDefence == ourDamage) { //its a tie, both lose lots of soldiers
            cout << "It is a tie." << endl; 
            other->killSoldiers(other->amountOfSoldiersPerUnit*0.5);
            this->killSoldiers(this->amountOfSoldiersPerUnit*0.5);
        }
        else if(enemyDefence > ourDamage) { //we lost
            cout << "Defeat." << endl << other->getUnitName*() + " defeats " << unitName;
            this->amountOfSoldiersPerUnit = 0;
        }

    }

    
    if(this->amountOfSoldiersPerUnit == 0) {
        cout << "We lost too many soldiers, regrouping" << endl;
        this->vivificaMemento();
    }


    this->execute();
    cout << "engage complete" << endl;
    this->disengage();
}

void Soldiers::disengage()  //template method that uses retreat() and rest()
{
    cout << unitName + ", disengage!" << endl;
    this->retreat();
    this->rest();

    this->disengaged = true;

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
}
