#include <iostream>
#include "square.h"
#include "TVector.h"

int main() {
    Square a;
    std::cin >> a;
    Square a1;
    std::cin >> a1;
    TVector v;
    v.push_back(a);
    v.push_back(a1);
    std::cout << v.Last() << std::endl;
    std::cout << v << std::endl;
    TVector v2(v);
    std::cout << v2 << std::endl;
    std::cout << v2.Last() << std::endl;
    v.clear();
    return 0;
}
