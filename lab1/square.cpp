#include "square.h"

square::square() {
    std::cout << "Enter coordinates" << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    std::cout << "square was created via istream" << std::endl;
}

square::~square() {
    std::cout << "square deleted" << std::endl;
}

void square::Print() {
    std::cout << "Square: " << a << " " << b << " "  << c << " " << d << std::endl;
}
void square::Area() {
    double len_a = a.dist(b);
    double len_b = b.dist(c);
    std::cout << "Area of square: " << len_a * len_b << std::endl;
}
size_t square::VertexesNumber() {
    return 4;
}
