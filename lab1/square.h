
#ifndef LAB1_SQUARE_H
#define LAB1_SQUARE_H


#include "figure.h"
#include <iostream>
#include "point.h"

class Square : public Figure  {
public:
    Square();
    virtual ~Square();
    void Print();
    void Area();
    size_t VertexesNumber();
private:
    Point a, b, c, d;
};


#endif //LAB1_SQUARE_H
