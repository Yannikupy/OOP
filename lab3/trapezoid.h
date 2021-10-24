
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
    friend std::ostream& operator<<(std::ostream& os, Trapezoid& s);
    friend std::istream& operator>>(std::istream& is, Trapezoid& s);
    friend bool operator==(Trapezoid lhs, Trapezoid rhs);
private:
    Point a, b, c, d;
};


#endif //LAB_TRAPEZOID_H
