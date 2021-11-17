#ifndef LAB1_SQUARE_H
#define LAB1_SQUARE_H

#include "figure.h"
#include <iostream>
#include "point.h"
#include <memory>

class Square : public Figure  {
public:
    Square();
    Square(const std::shared_ptr<Square>& square);
    virtual ~Square();
    void Print();
    void Area();
    size_t VertexesNumber();
    friend std::ostream& operator<<(std::ostream& os, Square& s);
    friend std::istream& operator>>(std::istream& is, Square& p);
    friend bool operator==(Square lhs, Square rhs);
private:
    Point a, b, c, d;
};


#endif //LAB1_SQUARE_H
