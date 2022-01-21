#ifndef LAB1_SQUARE_H
#define LAB1_SQUARE_H

#include "figure.h"
#include <iostream>
#include "point.h"

class Square : public Figure  {
public:
    Square();
    Square(std::istream &is);
    virtual ~Square();
    void Print(std::ostream &os);
    double Area();
    size_t VertexesNumber();
    friend std::ostream& operator<<(std::ostream& os, Square& s);
    friend std::istream& operator>>(std::istream& is, Square& p);
    friend bool operator==(Square lhs, Square rhs);
private:
    Point a, b, c, d;
};


#endif //LAB1_SQUARE_H
