#include "SecondCircle.h"
#include <iostream>
using namespace std;

SecondCircle::SecondCircle(Coordinate xs, Coordinate ys, Coordinate xt, Coordinate yt) {
    x1 = xs;
    x2 = xt;
    y1 = ys;
    y2 = yt;
}

void SecondCircle::draw() {
    cout << "Circle: drawn, " << x1 << ", " << y1 << ", " << x2 << ", " << y2 << endl;
}