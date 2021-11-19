#include <iostream>
#include "TVectorItem.h"

TVectorItem::TVectorItem(const std::shared_ptr<Square>& other){
    p = other;
}

TVectorItem::TVectorItem(const std::shared_ptr<TVectorItem>& other){
    p = other->p;
}

std::shared_ptr<Square>& TVectorItem::GetSquare(){
    return p ;
}

std::ostream &operator<<(std::ostream &os, TVectorItem &p){
    os << *p.GetSquare();
    return os;
}
