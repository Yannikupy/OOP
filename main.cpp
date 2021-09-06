#include <iostream>
#include "square.h"

int main() {
    square a;
    a.Print();
    square b(2, 5);
    b.Print();
    std::cout << b.Square() << std::endl;
    square c(std::cin);
    c.Print();
    std::cout << c.Square() << std::endl;
    square d = b;
    d.Print();
    figure* f = new square(c);
    f->Print();
    std::cout << "square:" << f->Square() << std::endl;
    delete f;
    return 0;
}
