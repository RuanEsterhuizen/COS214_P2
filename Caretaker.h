#ifndef CARETAKER_H
#define CARETAKER_H

#include <iostream>
using namespace std;

#include "Memento.h"

class Caretaker {
    public:
        void storeMemento(Memento* memento);
        Memento* retrieveMemento();
        ~Caretaker();
    private:
        Memento* memento;
};

#endif