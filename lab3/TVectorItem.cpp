#include <iostream>
#include "TVectorItem.h"

TVectorItem::TVectorItem(const Square& square){
    p = square;
}

TVectorItem::TVectorItem(const TVectorItem& other){
    p = other.p;
}

Square& TVectorItem::GetSquare(){
    return p;
}

std::ostream &operator<<(std::ostream &os, TVectorItem &p){
    os << p;
    return os;
}