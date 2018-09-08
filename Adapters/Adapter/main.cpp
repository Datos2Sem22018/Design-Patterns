#include <iostream>
#include "CircleAdapter.h"

int main() {
    Circle *c = new CircleAdapter(140, 210, 70, 42);
    c->draw();
}