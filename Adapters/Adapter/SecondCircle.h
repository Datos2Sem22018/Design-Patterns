#ifndef ADAPTER_SECONDCIRCLE_H
#define ADAPTER_SECONDCIRCLE_H
#include "Circle.h"

class SecondCircle {
public:
    SecondCircle(Coordinate xs, Coordinate ys, Coordinate xt, Coordinate yt);
    void draw() ;
private:
    Coordinate x1;
    Coordinate x2;
    Coordinate y1;
    Coordinate y2;
};


#endif //ADAPTER_SECONDCIRCLE_H
