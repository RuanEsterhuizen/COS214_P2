#include "Soldiers.h"

void Soldiers::engage()  //template method that uses prepare() and execute()
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
