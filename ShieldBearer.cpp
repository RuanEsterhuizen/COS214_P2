#include "ShieldBearer.h"

ShieldBearer::ShieldBearer():Soldiers(100,50,100,75,"ShieldBearers")
{
    
}

ShieldBearer::ShieldBearer(int health, int damage, int defence, int amount, string unitName):Soldiers(health, damage, defence, amount, unitName)
{
    
}

void ShieldBearer::prepare()
{
    cout << "ShieldBearer preparing..." << endl;

    //some more implimentation needed here

}

void ShieldBearer::execute()
{
    cout << "ShieldBearer executing..." << endl;

    //some more implimentation needed here
}

void ShieldBearer::retreat()
{
    cout << "ShieldBearer retreating..." << endl;

    //some more implimentation needed here
}

void ShieldBearer::rest()
{
    cout << "ShieldBearer resting..." << endl;

    //some more implimentation needed here
}

Soldiers* ShieldBearer::clonis() {
    //makes a deep copy of the soldier that called this
    // do we use the SoldierFactory or should we make a constructor?

    Soldiers * copy = new ShieldBearer(this->getHealth(), this->getDamage(), this->getDefence(), this->getAmount(), this->getUnitName());

    return copy;
}




