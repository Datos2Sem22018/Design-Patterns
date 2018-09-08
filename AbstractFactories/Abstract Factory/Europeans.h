#ifndef ABSTRACT_FACTORY_EUROPEANS_H
#define ABSTRACT_FACTORY_EUROPEANS_H
#include "Factory.h"


class Europeans : public Factory {
public:
    Animal* createCarnivore() override ;
    Animal* createVegetarian() override ;
};


#endif //ABSTRACT_FACTORY_EUROPEANS_H
