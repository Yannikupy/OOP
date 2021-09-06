#include "square.h"

square::square()
 :  len_a(0.0),
    len_b(0.0) {
    std::cout << "Default square was created" << std::endl;
}
square::square(double a, double b)
 :  len_a(a),
    len_b(b){
    std::cout << "Square created" << std::endl;
}
square::square(std::istream &is) {
    std::cout << "Enter lengths" << std::endl;
    is >> len_a;
    is >> len_b;
    std::cout << "Square was created via istream" << std::endl;
}

void square::Print() {
    std::cout << len_a << ',';
    std::cout << len_b << std::endl;
}

double square::Square() {
    double result = len_a * len_b;
    return result;
}

square::~square() {
    std::cout << "Square deleted" << std::endl;
}