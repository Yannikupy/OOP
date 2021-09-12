

#include "rectangle.h"

rectangle::rectangle() {
    std::cout << "Enter coordinates" << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    std::cout << "rectangle was created via istream" << std::endl;
}
rectangle::~rectangle(){
    std::cout << "rectangle deleted" << std::endl;
}
void rectangle::Print() {
    std::cout << "Rectangle: " << a << " " << b << " "  << c << " " << d << std::endl;
}
void rectangle::Area() {
    double len_a = a.dist(b);
    double len_b = b.dist(c);
    std::cout << "Area of rectangle: " << len_a * len_b << std::endl;
}
size_t rectangle::VertexesNumber() {
    return 4;
}