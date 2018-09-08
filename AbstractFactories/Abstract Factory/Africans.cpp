#include "Africans.h"
#include "Lion.h"
#include "Elephant.h"
#include <iostream>
using namespace std;

Animal* Africans::createCarnivore() {
    return new Lion;
}

Animal* Africans::createVegetarian() {
    return new Elephant;
}