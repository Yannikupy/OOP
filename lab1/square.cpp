#include "square.h"

Square::Square() {
    std::cout << "Enter coordinates" << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    std::cout << "Square was created via istream" << std::endl;
}

Square::~Square() {
    std::cout << "Square deleted" << std::endl;
}

void Square::Print() {
    std::cout << "Square: " << a << " " << b << " "  << c << " " << d << std::endl;
}
void Square::Area() {
    double len_a = a.dist(b);
    double len_b = b.dist(c);
    std::cout << "Area of Square: " << len_a * len_b << std::endl;
}
size_t Square::VertexesNumber() {
    return 4;
}
