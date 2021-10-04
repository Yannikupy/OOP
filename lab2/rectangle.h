
#ifndef LAB_RECTANGLE_H
#define LAB_RECTANGLE_H

#include "figure.h"

class Rectangle: public Figure {
public:
    Rectangle();
    virtual ~Rectangle();
    void Print();
    void Area();
    size_t VertexesNumber();
    friend std::ostream& operator<<(std::ostream& os, Rectangle& s);
    friend std::istream& operator>>(std::istream& is, Rectangle& s);
    friend bool operator==(Rectangle lhs, Rectangle rhs);
private:
    Point a, b, c, d;
};


#endif //LAB_RECTANGLE_H
