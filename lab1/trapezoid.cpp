

#include "trapezoid.h"
#include "figure.h"
#include <cmath>

Trapezoid::Trapezoid() {
    std::cout << "Enter coordinates" << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    std::cout << "Trapezoid was created via istream" << std::endl;
}

Trapezoid::~Trapezoid() {
    std::cout << "Trapezoid deleted" << std::endl;
}

void Trapezoid::Print() {
    std::cout << "Trapezoid: " << a << " " << b << " "  << c << " " << d << std::endl;
}
void Trapezoid::Area() {
    double A = a.dist(d);
    double B = b.dist(c);
    double C = a.dist(b);
    double D = c.dist(d);
    double p = (A + B + C + D) / 2;
    double area = ((A + B) / abs(A - B)) * sqrt((p - A) * (p - B) * (p - A - C) * (p - A- D)) ;
    std::cout << "Area of Trapezoid: " << area << std::endl;
}

size_t Trapezoid::VertexesNumber() {
    return 4;
}