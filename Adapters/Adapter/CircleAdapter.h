#ifndef ADAPTER_CIRCLEADAPTER_H
#define ADAPTER_CIRCLEADAPTER_H
#include "SecondCircle.h"
#include "Circle.h"

class CircleAdapter: public Circle, private SecondCircle {
public:
    CircleAdapter (Coordinate x, Coordinate y, Dimension w, Dimension h);
    void draw() override ;
};


#endif //ADAPTER_CIRCLEADAPTER_H
