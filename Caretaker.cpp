#include "Caretaker.h"

void Caretaker::storeMemento(Memento *memento)
{
    this->memento = memento;
}

Memento* Caretaker::retrieveMemento()
{
    return this->memento;
}

Caretaker::~Caretaker()
{
    delete memento;
}
