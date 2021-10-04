

#include "rectangle.h"

Rectangle::Rectangle() : a(), b(), c(), d() {
    std::cout << "Default rectangle was created" << std::endl;
}
Rectangle::Rectangle(std::istream &is) {
    std::cout << "Enter lower left coordinate" << std::endl;
    std::cin >> a;
    std::cout << "Enter upper left coordinate" << std::endl;
    std::cin >> b;
    std::cout << "Enter upper right coordinate" << std::endl;
    std::cin >> c;
    std::cout << "Enter lower right coordinate" << std::endl;
    std::cin >> d;
    std::cout << "Rectangle was created" << std::endl;
}
Rectangle::~Rectangle(){
    std::cout << "Rectangle deleted" << std::endl;
}
void Rectangle::Print(std::ostream& os) {
    std::cout << "Rectangle: " << a << " " << b << " "  << c << " " << d << std::endl;
}
double Rectangle::Area() {
    double len_a = a.dist(b);
    double len_b = b.dist(c);
    return len_a * len_b;
}
size_t Rectangle::VertexesNumber() {
    return 4;
}