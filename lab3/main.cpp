#include <iostream>
#include "square.h"
#include "TVector.h"
#include <memory>

int main() {
    TVector v;
    Square a, b;
    std::cin >> a >> b;
    v.InsertLast(std::shared_ptr<Square>(new Square));
    v.InsertLast(std::shared_ptr<Square>(new Square(a)));
    v.InsertLast(std::shared_ptr<Square>(new Square(b)));
    std::cout << "Before pop_back\n" << v << std::endl;
    v.RemoveLast();
    std::cout << "After pop_back\n" << v << std::endl;
    v.Clear();
    std::cout << "After clear\n" << v << std::endl;
    return 0;
}
