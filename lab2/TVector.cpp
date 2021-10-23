#include "TVector.h"
#include "cstdlib"

TVector::TVector()
    : _array(nullptr)
    , _size(0)
{

}
TVector::~TVector()
{
    clear();
}

void TVector::Print() {
    for(int i = 0; i < _size; i++){
        std::cout << _array[i] << std::endl;
    }
}

void TVector::push_back(const Square& value) {
    if(_size == 0){
        _array = (Square*) malloc(sizeof value);
        _array[_size] = value;
        _size++;
    }
    else{
        _array = (Square*) realloc(_array, _size * sizeof value + sizeof value);
        _array[_size] = value;
        _size++;
    }
}

void TVector::pop_back() {
    Square tmp[_size];
    for(int i = 0; i < _size - 1; i++){
        tmp[i] = _array[i];
    }
    free(_array);
    _size--;
    _array = (Square*) malloc(sizeof tmp);
    for(int i = 0; i < _size; i++){
        _array[i] = tmp[i];
    }
}

void TVector::clear() {
    if(_array){
        free(_array);
        _array = nullptr;
    }
    _size = 0;
}

int TVector::size() {
    return _size;
}

bool TVector::empty() {
    if(_size == 0) return true;
    else return false;
}

void TVector::resize(int count) {
    if(count == 0){
        free(_array);
        _size = 0;
    }
    else if (count == _size) return;
    else if(count > _size){
        Square init;
        int _tmp_size = _size;
        _size = count;
        _array = (Square*) realloc(_array, (sizeof init) * _size);
        for (int i = _tmp_size; i < _size; i++){
            _array[i] = init;
        }
    }
    else{
        _size = count;
        Square tmp[_size];
        for(int i = 0; i < _size; i++){
            tmp[i] = _array[i];
        }
        _array = (Square*) malloc(sizeof tmp);
        for(int i = 0; i < _size; i++){
            _array[i] = tmp[i];
        }
    }
}

void TVector::erase(size_t pos) {
    if(_size == 0){
        std::cout << "ERROR, VECTOR IS EMPTY" << std::endl;
        return;
    }
    Square tmp[_size];
    for(int i = 0; i < _size; i++){
        tmp[i] = _array[i];
    }
    for (int i = pos; i < _size - 1; i++){
        tmp[pos] = tmp[pos + 1];
    }
    _size--;
    free(_array);
    _array = (Square*) malloc(sizeof tmp);
    for(int i = 0; i < _size; i++){
        _array[i] = tmp[i];
    }
}
std::ostream & operator<<(std::ostream &os, TVector &s) {
    s.Print();
    return os;
}
std::istream& operator>>(std::istream& is, TVector& s) {
    Square a;
    is >> a;
    s.push_back(a);
    return is;
}

