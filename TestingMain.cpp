#include <iostream>
#include <map>
#include <vector>
#include "SoldierFactory.h"
#include "InfantryFactory.h"
#include "ShieldBearerFactory.h"
#include "BoatmanFactory.h"
#include "Caretaker.h"

using namespace std;

int main() {
    Soldiers * romeArmy1;
    ShieldBearer * romeArmy2 = new ShieldBearer(100,100,100,100, "Principe");
    Soldiers * romeArmy3;
    Soldiers * romeArmy4;
    InfantryFactory * r1 = new InfantryFactory();
    ShieldBearerFactory * r2 = new ShieldBearerFactory();
    BoatmanFactory * r3 = new BoatmanFactory();
    romeArmy1 = r1->createUnit();
    romeArmy4 = r2->createUnit();
    romeArmy3 = r3->createUnit();
    romeArmy1->setUnitName("Rome Army 1");
    Caretaker soreLoser;
    Memento * romeArmy2Mem = romeArmy2->militusMemento();
    soreLoser.storeMemento(romeArmy2Mem);


    cout << "Statistical Report of Roman Army 1:\n";
    cout << "\tTotal Damage: " << r1->calculateTotalDamagePerUnit(romeArmy1) << endl;
    cout << "\tTotal Defence: " << r1->calculateTotalDefencePerUnit(romeArmy1) << endl;
    cout << "\tTotal Health: " << r1->calculateTotalHealthPerUnit(romeArmy1) << endl << endl;

    cout << "Statistical Report of Roman Army 2:\n";
    cout << "\tTotal Damage: " << r2->calculateTotalDamagePerUnit(romeArmy2) << endl;
    cout << "\tTotal Defence: " << r2->calculateTotalDefencePerUnit(romeArmy2) << endl;
    cout << "\tTotal Health: " << r2->calculateTotalHealthPerUnit(romeArmy2) << endl << endl;

    cout << "Statistical Report of Roman Army 3:\n";
    cout << "\tTotal Damage: " << r3->calculateTotalDamagePerUnit(romeArmy3) << endl;
    cout << "\tTotal Defence: " << r3->calculateTotalDefencePerUnit(romeArmy3) << endl;
    cout << "\tTotal Health: " << r3->calculateTotalHealthPerUnit(romeArmy3) << endl << endl;


    Soldiers * parthiaArmy1;
    ShieldBearer * parthiaArmy2 = new ShieldBearer(100,100,100,100, "Hillmen");
    ShieldBearer * parthiaArmy3 = new ShieldBearer(100,100,200,100, "Hillmen 2");
    InfantryFactory p1;
    ShieldBearerFactory p2;
    BoatmanFactory p3;
    parthiaArmy1 = p1.createUnit();
    parthiaArmy1->setUnitName("Partia Army 1");

    romeArmy1->engage(parthiaArmy1);
    cout << endl << "Round over" << endl << endl;
    romeArmy1->engage(parthiaArmy1);
    cout << endl << "Round over" << endl << endl;
    romeArmy2->engage(parthiaArmy2);
    cout << endl << "Round over" << endl << endl;
    romeArmy1->engage(parthiaArmy2);
    cout << endl << "Round over" << endl << endl;
    romeArmy2->engage(parthiaArmy2);
    cout << endl << "Round over" << endl << endl;
    romeArmy2->engage(parthiaArmy3);
    cout << endl << "Round over" << endl << endl;
    romeArmy2->engage(parthiaArmy3);
    cout << endl << "Round over" << endl << endl;
    romeArmy3->engage(parthiaArmy3);
    cout << endl << "Round over" << endl << endl;

    romeArmy1 = new Infantry(200,200,200,200, "Pretorians");
    Soldiers * romeArmy5 = romeArmy1->clonis();

    romeArmy2->vivificaMemento(soreLoser.retrieveMemento());
    romeArmy2->engage(parthiaArmy3);
    cout << endl << "Round over" << endl << endl;
    return 0;
}