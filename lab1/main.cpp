#include <iostream>
#include "square.h"
#include "rectangle.h"
#include "trapezoid.h"

int main() {
    Square a;
    Square sqr(std::cin);
    sqr.Print(std::cout);
    std::cout << "Площадь квадрата: " << sqr.Area() << std::endl;
    std::cout << "Количество вершин в квадрате " << sqr.VertexesNumber() << std::endl;
    Rectangle b;
    Rectangle rec(std::cin);
    rec.Print(std::cout);
    std::cout << "Площадь прямоугольника: " << rec.Area() << std::endl;
    std::cout << "Количество вершин в прямоугольнике " << rec.VertexesNumber() << std::endl;
    Trapezoid c;
    Trapezoid tr(std::cin);
    tr.Print(std::cout);
    std::cout << "Площадь трапеции: " << tr.Area() << std::endl;
    std::cout << "Количество вершин в трапеции " << tr.VertexesNumber() << std::endl;
    return 0;
}
