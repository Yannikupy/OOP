
#include "rectangle.h"

Rectangle::Rectangle() = default;
std::istream& operator>>(std::istream& is, Rectangle& s) {
    std::cout << "Enter coordinates of rectangle" << std::endl;
    is >> s.a >> s.b >> s.c >> s.d ;
    std::cout << "Rectangle was created via istream" << std::endl;
    return is;
}
Rectangle::~Rectangle(){
    std::cout << "Rectangle deleted" << std::endl;
}
void Rectangle::Print() {
    std::cout << "Rectangle: " << a << " " << b << " "  << c << " " << d << std::endl;
}
void Rectangle::Area() {
    double len_a = a.dist(b);
    double len_b = b.dist(c);
    std::cout << "Area of Rectangle: " << len_a * len_b << std::endl;
}
size_t Rectangle::VertexesNumber() {
    return 4;
}
std::ostream &operator<<(std::ostream &os, Rectangle &s) {
    os << "Rectangle: " << s.a << " " << s.b << " " << s.c << " " << s.d;
    return os;
}
bool operator==(Rectangle lhs, Rectangle rhs) {
    if(lhs.a == rhs.a && lhs.b == rhs.b && lhs.c == rhs.c && lhs.d == rhs.d) return true;
    else return false;
}