#include <iostream>
#include "square.h"
#include "TVector.h"

int main() {
    Square a, b, c;
    std::cin >> a >> b >> c;
    TVector<Square> v;
    v.push_back(std::shared_ptr<Square>(new Square(a)));
    v.push_back(std::shared_ptr<Square>(new Square(b)));
    v.push_back(std::shared_ptr<Square>(new Square(c)));
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
