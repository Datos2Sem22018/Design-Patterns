#ifndef ABSTRACT_FACTORY_AFRICANS_H
#define ABSTRACT_FACTORY_AFRICANS_H
#include "Factory.h"


class Africans : public Factory {
public:
    Animal* createVegetarian() override ;
    Animal* createCarnivore() override;
};


#endif //ABSTRACT_FACTORY_AFRICANS_H
