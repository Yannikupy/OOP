#include <iostream>
#include "square.h"
#include "rectangle.h"
#include "trapezoid.h"

int main() {
    Square a;
    a.Print();
    a.Area();
    std::cout << "Количество вершин в квадрате " << a.VertexesNumber() << std::endl;
    Rectangle b;
    b.Print();
    b.Area();
    std::cout << "Количество вершин в прямоугольнике " << b.VertexesNumber() << std::endl;
    Trapezoid c;
    c.Print();
    c.Area();
    std::cout << "Количество вершин в трапеции " << c.VertexesNumber() << std::endl;
    return 0;
}
