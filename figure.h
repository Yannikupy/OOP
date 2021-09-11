#ifndef LAB1_FIGURE_H
#define LAB1_FIGURE_H

#include "point.h"

class figure{
public:
    virtual ~figure() {};
    virtual void Print() = 0;
    virtual void Area() = 0;
    virtual size_t VertexesNumber() = 0;
};


#endif //LAB1_FIGURE_H
