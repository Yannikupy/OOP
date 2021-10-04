#include "square.h"

Square::Square() : a(), b(), c(), d() {
    std::cout << "Default square was created" << std::endl;
}
Square::Square(std::istream &is) {
    std::cout << "Enter lower left coordinate" << std::endl;
    std::cin >> a;
    std::cout << "Enter upper left coordinate" << std::endl;
    std::cin >> b;
    std::cout << "Enter upper right coordinate" << std::endl;
    std::cin >> c;
    std::cout << "Enter lower right coordinate" << std::endl;
    std::cin >> d;
    std::cout << "Square was created" << std::endl;
}
Square::~Square() {
    std::cout << "Square deleted" << std::endl;
}

void Square::Print(std::ostream& os) {
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
