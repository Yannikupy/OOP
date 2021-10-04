#include "vector.h"
#include "cstdlib"

vector::vector()
    : _array(nullptr)
    , _size(0)
{

}
vector::~vector()
{
    clear();
}

void vector::Print() {
    for(int i = 0; i < _size; i++){
        std::cout << _array[i] << std::endl;
    }
}

void vector::push_back(const Square& value) {
    if(_size == 0){
        _array = (Square*) malloc(sizeof value * _size + sizeof value);
        _array[_size] = value;
        _size++;
    }
    else{
        _array = (Square*) realloc(_array, _size * sizeof value + sizeof value);
        _array[_size] = value;
        _size++;
    }
}

void vector::pop_back() {
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

void vector::clear() {
    if(_array){
        free(_array);
        _array = nullptr;
    }
    _size = 0;
}

int vector::size() {
    return _size;
}

bool vector::empty() {
    if(_size == 0) return true;
    else return false;
}

void vector::resize(int count) {
    if (count == _size) return;
    else if(count > _size){
        Square init;
        _array = (Square*) realloc(_array, sizeof _array + sizeof init * (count - _size));
        for (int i = 0; i < count - _size; i++){
            push_back(init);
        }
    }
    else{
        for(int i = 0; i < _size - count; i++){
            pop_back();
        }
    }
    _size = count;
}

void vector::erase(size_t pos) {
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
std::ostream & operator<<(std::ostream &os, vector &s) {
    s.Print();
    return os;
}
std::istream& operator>>(std::istream& is, vector& s) {
    Square a;
    is >> a;
    s.push_back(a);
    return is;
}

