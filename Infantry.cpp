#include "Infantry.h"

Infantry::Infantry():Soldiers(50,100,50,100,"Infantry")
{
    
}

Infantry::Infantry(int health, int damage, int defence, int amount, string unitName):Soldiers(health, damage, defence, amount, unitName)
{
    
}

void Infantry::prepare()
{
    cout << "Infantry preparing..." << endl;

    //some more implimentation needed here

}

void Infantry::execute()
{

    cout << "Infantry executing..." << endl;

    //some more implimentation needed here


}

void Infantry::retreat()
{

    cout << "Infantry retreating..." << endl;

    //some more implimentation needed here

}

void Infantry::rest()
{

    cout << "Infantry resting..." << endl;

    //some more implimentation needed here


}



Soldiers *Infantry::clonis()
{
    //makes a deep copy of the soldier that called this
    // do we use the SoldierFactory or should we make a constructor?

    Soldiers * copy = new Infantry(this->getHealth(), this->getDamage(), this->getDefence(), this->getAmount(), this->getUnitName());

    return copy;
}
