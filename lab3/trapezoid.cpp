

#include "trapezoid.h"
#include "figure.h"
#include <cmath>

Trapezoid::Trapezoid() = default;
std::istream& operator>>(std::istream& is, Trapezoid& s) {
    std::cout << "Enter coordinates of trapezoid" << std::endl;
    is >> s.a >> s.b >> s.c >> s.d ;
    std::cout << "Trapezoid was created via istream" << std::endl;
    return is;
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

std::ostream &operator<<(std::ostream &os, Trapezoid &s) {
    os << "Trapezoid: " << s.a << " " << s.b << " " << s.c << " " << s.d;
    return os;
}

bool operator==(Trapezoid lhs, Trapezoid rhs) {
    if(lhs.a == rhs.a && lhs.b == rhs.b && lhs.c == rhs.c && lhs.d == rhs.d) return true;
    else return false;
}
