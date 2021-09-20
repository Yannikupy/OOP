
#ifndef LAB_RECTANGLE_H
#define LAB_RECTANGLE_H

#include "figure.h"

class rectangle: public Figure {
public:
    rectangle();
    virtual ~rectangle();
    void Print();
    void Area();
    size_t VertexesNumber();
private:
    Point a, b, c, d;
};


#endif //LAB_RECTANGLE_H
