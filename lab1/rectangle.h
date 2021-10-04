
#ifndef LAB_RECTANGLE_H
#define LAB_RECTANGLE_H

#include "figure.h"

class Rectangle: public Figure {
public:
    Rectangle();
    Rectangle(std::istream &is);
    virtual ~Rectangle();
    void Print(std::ostream& os);
    double Area();
    size_t VertexesNumber();
private:
    Point a, b, c, d;
};


#endif //LAB_RECTANGLE_H
