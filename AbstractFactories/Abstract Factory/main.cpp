#include <iostream>
#include "Factory.h"
#include "Africans.h"
#include "Europeans.h"

using namespace std;

int main() {
#ifdef ABSTRACT_FACTORY_EUROPEANS_H
    Factory* factory = new Europeans;
#endif
    Animal* animals[2];
    animals[0] = factory->createVegetarian();
    animals[1] = factory->createCarnivore();
    for (int i = 0; i < 2; ++i) {
        animals[i]->draw();
    }
    return 0;
}