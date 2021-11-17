#include <iostream>
#include "square.h"
#include "rectangle.h"
#include "trapezoid.h"
#include "TVector.h"

int main() {
    TVector v;
    Square a, b;
    std::cin >> a >> b;
    v.push_back(std::shared_ptr<Square>(new Square));
    v.push_back(std::shared_ptr<Square>(new Square(a)));
    v.push_back(std::shared_ptr<Square>(new Square(b)));
    std::cout << "Before pop_back\n" << v << std::endl;
    v.pop_back();
    std::cout << "After pop_back\n" << v << std::endl;
    v.resize(4);
    std::cout << "After resize\n" << v << std::endl;
    v.erase(1);
    std::cout << "After erase\n" << v << std::endl;
    v.clear();
    std::cout << "After clear\n" << v << std::endl;
    return 0;
}
