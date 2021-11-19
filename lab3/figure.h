#ifndef LAB1_FIGURE_H
#define LAB1_FIGURE_H

#include "point.h"

class Figure{
public:
    virtual ~Figure() {};
    virtual void Print() = 0;
    virtual double Area() = 0;
    virtual size_t VertexesNumber() = 0;
};


#endif //LAB1_FIGURE_H
