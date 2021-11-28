#include "square.h"

Square::Square() = default;
std::istream& operator>>(std::istream& is, Square& s) {
    std::cout << "Enter coordinates of square" << std::endl;
    is >> s.a >> s.b >> s.c >> s.d ;
    std::cout << "Square was created via istream" << std::endl;
    return is;
}

Square::~Square() {
   // std::cout << "Square deleted" << std::endl;
}

void Square::Print() {
    std::cout << "Square: " << a << " " << b << " "  << c << " " << d << std::endl;
}
double Square::Area() {
    double len_a = a.dist(b);
    double len_b = b.dist(c);
    return len_a * len_b;
}
size_t Square::VertexesNumber() {
    return 4;
}

std::ostream &operator<<(std::ostream &os, Square &s) {
    os << "Square: " << s.a << " " << s.b << " " << s.c << " " << s.d;
    return os;
}
bool operator==(Square lhs, Square rhs) {
    if(lhs.a == rhs.a && lhs.b == rhs.b && lhs.c == rhs.c && lhs.d == rhs.d) return true;
    else return false;
}

