

#include "trapezoid.h"
#include "figure.h"
#include <cmath>

Trapezoid::Trapezoid(): a(), b(), c(), d() {
    std::cout << "Default trapezoid was created" << std::endl;
}
Trapezoid::Trapezoid(std::istream &is) {
    std::cout << "Enter lower left coordinate" << std::endl;
    std::cin >> a;
    std::cout << "Enter upper left coordinate" << std::endl;
    std::cin >> b;
    std::cout << "Enter upper right coordinate" << std::endl;
    std::cin >> c;
    std::cout << "Enter lower right coordinate" << std::endl;
    std::cin >> d;
    std::cout << "Trapezoid was created" << std::endl;
}
Trapezoid::~Trapezoid() {
    std::cout << "Trapezoid deleted" << std::endl;
}

void Trapezoid::Print(std::ostream& os) {
    std::cout << "Trapezoid: " << a << " " << b << " "  << c << " " << d << std::endl;
}
double Trapezoid::Area() {
    double A = a.dist(d);
    double B = b.dist(c);
    double C = a.dist(b);
    double D = c.dist(d);
    double p = (A + B + C + D) / 2;
    double area = ((A + B) / abs(A - B)) * sqrt((p - A) * (p - B) * (p - A - C) * (p - A- D)) ;
    return area;
}

size_t Trapezoid::VertexesNumber() {
    return 4;
}