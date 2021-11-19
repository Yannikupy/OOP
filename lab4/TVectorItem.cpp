#include <iostream>
#include "TVectorItem.h"

template <class T>
TVectorItem<T>::TVectorItem(const std::shared_ptr<T>& other){
    p = other;
}
template <class T>
TVectorItem<T>::TVectorItem(const std::shared_ptr<TVectorItem<T>>& other){
    p = other->p;
}
template <class T>
std::shared_ptr<T>& TVectorItem<T>::GetSquare(){
    return p ;
}
template <class A>
std::ostream &operator<<(std::ostream &os, TVectorItem<A> &p){
    os << *p.GetSquare();
    return os;
}
#include "square.h"
template class TVectorItem<Square>;
template std::ostream& operator<<(std::ostream &os, TVectorItem<Square> &p);
