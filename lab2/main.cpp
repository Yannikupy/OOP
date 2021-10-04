#include <iostream>
#include "square.h"
#include "rectangle.h"
#include "trapezoid.h"
#include "vector.h"

int main() {
    Square a;
    std::cin >> a;
    std::cout << a << std::endl;
    Square a1;
    std::cin >> a1;
    vector v;
    v.push_back(a);
    v.push_back(a1);
    v.Print();
    v.erase(0);
    std::cin >> v;
    std::cout << v;
    v.clear();
    a.Area();
    std::cout << "Количество вершин в квадрате " << a.VertexesNumber() << std::endl;
    Rectangle b;
    std::cin >> b;
    b.Print();
    b.Area();
    std::cout << "Количество вершин в прямоугольнике " << b.VertexesNumber() << std::endl;
    Trapezoid c;
    std::cin >> c;
    c.Print();
    c.Area();
    std::cout << "Количество вершин в трапеции " << c.VertexesNumber() << std::endl;
    vector l;
    l.Print();
    Trapezoid k = c;
    k.Print();
    if(k == c) std::cout << "Equal trapezoids" << std::endl;
    return 0;
}
