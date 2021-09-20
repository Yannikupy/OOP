
#ifndef LAB_TRAPEZOID_H
#define LAB_TRAPEZOID_H


#include "figure.h"

class Trapezoid: public Figure{
public:
    Trapezoid();
    virtual ~Trapezoid();
    void Print();
    void Area();
    size_t VertexesNumber();

private:
    Point a, b, c, d;
};


#endif //LAB_TRAPEZOID_H
