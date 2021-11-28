#include <iostream>
#include "square.h"
#include "TVector.h"

int main() {
    Square a, b, c;
    std::cin >> a >> b >> c;
    TVector<Square> v;
    v.InsertLast(std::shared_ptr<Square>(new Square(a)));
    v.InsertLast(std::shared_ptr<Square>(new Square(b)));
    v.InsertLast(std::shared_ptr<Square>(new Square(c)));

    for (auto && i : v)
        std::cout << i << std::endl;

    std::cout << "Before pop_back\n" << v << std::endl;
    v.RemoveLast();
    std::cout << "After pop_back\n" << v << std::endl;
    return 0;
}
