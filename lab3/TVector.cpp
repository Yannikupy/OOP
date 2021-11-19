#include "TVector.h"
#include <cassert>
#include <memory>

TVector::TVector():size(0), data(nullptr), capacity(0) {
}

TVector::TVector(const std::shared_ptr<TVector> p){
    TVector const& other = *p;
}

TVector::~TVector() {

}

void TVector::InsertLast(const std::shared_ptr<Square>& square){
    if(capacity != 0 && capacity > size){
        data[size++] = square;
    }
    else{
        if(capacity == 0)
            capacity = 1;
        capacity *= 2;
        TVectorItem* data_new = new TVectorItem[capacity];
        for(int i = 0; i < size; ++i){
            data_new[i] = data[i];
        }
        data_new[size++] = square;
        data.reset(data_new);
    }
}

void TVector::RemoveLast(){
    if(size > 0)
        --size;
}

std::shared_ptr<Square>& TVector::Last(){
    assert(size > 0);
    return data[size - 1].GetSquare();
}

size_t TVector::Length() {
    return size;
}

std::shared_ptr<Square>& TVector::operator[] (const size_t idx){
    assert(idx >= 0 && idx < size);
    return data[idx].GetSquare();
}

bool TVector::Empty(){
    return size == 0;
}

void TVector::Clear() {
    data = nullptr;
    capacity = size = 0;
}

std::ostream& operator<<(std::ostream& os, const TVector& arr){
    os << "[";
    for(int i = 0; i < arr.size; ++i){
        os << arr.data[i].GetSquare()->Area() << " ";
    }
    os << "]";
    return os;
}



