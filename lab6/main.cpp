#include <iostream>
#include "square.h"
#include "TVector.h"
int main () {
    Square a (std::cin);
    std:: cout << "The area of your figure is : " << a.Area() << std:: endl;

    Square b (std::cin);
    std:: cout << "The area of your figure is : " << b.Area() << std:: endl;

    Square c (std::cin);
    std:: cout << "The area of your figure is : " << c.Area() << std:: endl;
    
    TVector<Square> vector;
    std:: cout << "Is tree empty? " << vector.Empty() << std:: endl;
    std:: cout << "And now, is tree empty? " << vector.Empty() << std:: endl;
    vector.InsertLast(std::make_shared<Square>(a));
    vector.InsertLast(std::make_shared<Square>(b));
    vector.InsertLast(std::make_shared<Square>(c));
    std::cout << vector << std::endl;
    return 0;
}