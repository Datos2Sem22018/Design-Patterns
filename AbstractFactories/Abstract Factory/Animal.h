#ifndef ABSTRACT_FACTORY_ANIMAL_H
#define ABSTRACT_FACTORY_ANIMAL_H
#include <string>

class Animal {
public:
    Animal();
    virtual void draw() = 0;
protected:
    int total;
    int id;
};


#endif //ABSTRACT_FACTORY_ANIMAL_H
