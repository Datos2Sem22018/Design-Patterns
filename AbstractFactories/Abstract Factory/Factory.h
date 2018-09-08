#ifndef ABSTRACT_FACTORY_FACTORY_H
#define ABSTRACT_FACTORY_FACTORY_H
#include "Animal.h"

class Factory {
public:
    virtual Animal* createVegetarian() = 0;
    virtual Animal* createCarnivore() = 0;
};


#endif //ABSTRACT_FACTORY_FACTORY_H
