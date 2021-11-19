#include "TVector.h"
#include <cassert>
#include <memory>

template <class T>
TVector<T>::TVector():size(0), data(nullptr), capacity(0) {
}

template <class T>
TVector<T>::TVector(const std::shared_ptr<TVector<T>> p){
    TVector<T> const& other = *p;
}

template <class T>
TVector<T>::~TVector() {

}

template <class T>
void TVector<T>::InsertLast(const std::shared_ptr<T>& square){
    if(capacity != 0 && capacity > size){
        data[size++] = square;
    }
    else{
        if(capacity == 0)
            capacity = 1;
        capacity *= 2;
        TVectorItem<T>* data_new = new TVectorItem<T>[capacity];
        for(int i = 0; i < size; ++i){
            data_new[i] = data[i];
        }
        data_new[size++] = square;
        data.reset(data_new);
    }
}

template <class T>
void TVector<T>::RemoveLast(){
    if(size > 0)
        --size;
}

template <class T>
std::shared_ptr<T>& TVector<T>::Last(){
    assert(size > 0);
    return data[size - 1].GetSquare();
}
template <class T>
size_t TVector<T>::Length() {
    return size;
}
template <class T>
std::shared_ptr<T>& TVector<T>::operator[] (const size_t idx){
    assert(idx >= 0 && idx < size);
    return data[idx].GetSquare();
}
template <class T>
bool TVector<T>::Empty(){
    return size == 0;
}
template <class T>
void TVector<T>::Clear() {
    data = nullptr;
    capacity = size = 0;
}

template <class T>
std::ostream& operator<<(std::ostream& os, const TVector<T>& arr){
    os << "[";
    for(int i = 0; i < arr.size; ++i){
        os << arr.data[i].GetSquare()->Area() << " ";
    }
    os << "]";
    return os;
}

#include "square.h"

template class TVector<Square>;
template std::ostream& operator<<(std::ostream& os, const TVector<Square>& arr);



