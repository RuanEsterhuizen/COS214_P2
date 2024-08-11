#ifndef SOLDIERS_H
#define SOLDIERS_H

#include <iostream>
#include "Memento.h"
using namespace std;


// should we do templates for this?
class Soldiers {

    //all the children should be friends
    friend class Infantry;
    friend class Boatman;
    friend class ShieldBearer;

    private:
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        string unitName;

        
        
        // template method primitive operations
        virtual void prepare() = 0;
        virtual void execute() = 0;
        virtual void retreat() = 0;
        virtual void rest() = 0;

    public:
        bool prepared;
        Soldiers();
        Soldiers(int health, int damage, int defence, int amount, string unitName);
        int getHealth();
        int getDamage();
        int getDefence();
        int getAmount();
        string getUnitName();
        void setUnitName(string newName);
        bool isPrepared();

        void killSoldiers(int amount);

        //destructor somewhere?

        //the part from prototype
        virtual Soldiers* clonis() = 0;

        void engage(Soldiers* other);  //template method that uses prepare() and execute()
        void disengage();  //template method that uses retreat() and rest()

        //the memento stuff
        Memento* militusMemento();
        void vivificaMemento(Memento* memento); 

        

};

#endif