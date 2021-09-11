

#include "trapezoid.h"
#include "figure.h"
#include <cmath>

trapezoid::trapezoid() {
    std::cout << "Enter coordinates" << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    std::cout << "trapezoid was created via istream" << std::endl;
}

trapezoid::~trapezoid() {
    std::cout << "trapezoid deleted" << std::endl;
}

void trapezoid::Print() {
    std::cout << "Trapezoid: " << a << " " << b << " "  << c << " " << d << std::endl;
}
void trapezoid::Area() {
    double A = a.dist(d);
    double B = b.dist(c);
    double C = a.dist(b);
    double D = c.dist(d);
    double p = (A + B + C + D) / 2;
    double area = ((A + B) / abs(A - B)) * sqrt((p - A) * (p - B) * (p - A - C) * (p - A- D)) ;
    std::cout << "Area of trapezoid: " << area << std::endl;
}

size_t trapezoid::VertexesNumber() {
    return 4;
}