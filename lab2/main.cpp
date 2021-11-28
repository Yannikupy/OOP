#include <iostream>
#include "square.h"
#include "TVector.h"

int main() {
    Square a;
    std::cin >> a;
    Square a1;
    std::cin >> a1;
    TVector v;
    v.InsertLast(a);
    v.InsertLast(a1);
    std::cout << v << std::endl;
    TVector v2(v);
    std::cout << v2 << std::endl;
    v.Clear();
    v2.Clear();
    return 0;
}
