#include "Boatman.h"

void Boatman::prepare()
{
    cout << "Boatman preparing..." << endl;

    //some more implimentation needed here
}

void Boatman::execute()
{
    cout << "Boatman executing..." << endl;

    //some more implimentation needed here
}

void Boatman::retreat()
{
    cout << "Boatman retreating..." << endl;

    //some more implimentation needed here
}

void Boatman::rest()
{
    cout << "Boatman rest..." << endl;

    //some more implimentation needed here
}

Soldiers* Boatman::clonis() {
    //makes a deep copy of the soldier that called this
    // do we use the SoldierFactory or should we make a constructor?
}

Boatman::Boatman():Soldiers(50,75,100,75,"Boatman")
{
    
}
