#include "Europeans.h"
#include "Deer.h"
#include "Wolf.h"
#include <iostream>
using namespace std;

Animal* Europeans::createVegetarian() {
    return new Deer;
}

Animal* Europeans::createCarnivore() {
    return new Wolf;
}