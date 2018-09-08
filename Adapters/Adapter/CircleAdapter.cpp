#include "CircleAdapter.h"
#include <iostream>
using namespace std;

CircleAdapter::CircleAdapter(Coordinate x, Coordinate y, Dimension w, Dimension h):SecondCircle(x, y, x + w, y + h) {
    cout << "Circle: " << x << ", " << y << ", " << w << ", " << h << endl;
}

void CircleAdapter::draw() {
    cout << "Circle: drawn" << endl;
}