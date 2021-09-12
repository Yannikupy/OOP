#include <iostream>
#include "square.h"
#include "rectangle.h"
#include "trapezoid.h"

int main() {
    square a;
    a.Print();
    a.Area();
    std::cout << "Количество вершин в квадрате " << a.VertexesNumber() << std::endl;
    rectangle b;
    b.Print();
    b.Area();
    std::cout << "Количество вершин в прямоугольнике " << b.VertexesNumber() << std::endl;
    trapezoid c;
    c.Print();
    c.Area();
    std::cout << "Количество вершин в трапеции " << c.VertexesNumber() << std::endl;
    return 0;
}
