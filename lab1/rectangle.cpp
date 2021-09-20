

#include "rectangle.h"

Rectangle::Rectangle() {
    std::cout << "Enter coordinates" << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    std::cout << "Rectangle was created via istream" << std::endl;
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