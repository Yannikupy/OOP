
#ifndef LAB1_SQUARE_H
#define LAB1_SQUARE_H


#include "figure.h"
#include <iostream>

class square : public figure  {
public:
    square();

    square(std::istream &is);

    square(double a, double b);

    virtual ~square();
    void Print();
    double Square();

private:
    double len_a{}, len_b{};
};


#endif //LAB1_SQUARE_H
