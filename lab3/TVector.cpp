#include "TVector.h"
#include "cstdlib"

TVector::TVector(){
    std::shared_ptr<Square[]> _array(nullptr);
    _size = 0;
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

void TVector::push_back(std::shared_ptr<Square> &&value) {
    Square* _array1 = new Square[_size + 1];
    for(int i = 0; i < _size; i++){
        _array1[i] = _array[i];
    }
    _array1[_size] = value;
    _size++;
    _array.reset(new Square[_size]);
    for(int i = 0; i < _size; i++){
        _array[i] = _array1[i];
    }
    delete[] _array1;
}

void TVector::pop_back() {
    Square* tmp = new Square[_size];
    for(int i = 0; i < _size - 1; i++){
        tmp[i] = _array[i];
    }
    _size--;
    _array.reset(new Square[_size]);
    for(int i = 0; i < _size; i++){
        _array[i] = tmp[i];
    }
    delete[] tmp;
}

void TVector::clear() {
    if(_array){
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
        _size = 0;
    }
    else if (count == _size) return;
    else if(count > _size){
        Square init;
        Square* _array1 = new Square[count];
        for (int i = 0; i < _size; i++){
            _array1[i] = _array[i];
        }
        int tmp_size = _size;
        _size = count;
        for (int i = tmp_size; i < count; i++){
            _array1[i] = init;
        }
        _array.reset(new Square[_size]);
        for(int i = 0; i < _size; i++){
            _array[i] = _array1[i];
        }
        delete[] _array1;
    }
    else{
        Square* _array1 = new Square[count];
        for (int i = 0; i < count; i++){
            _array1[i] = _array[i];
        }
        _size = count;
        _array.reset(new Square[_size]);
        for(int i = 0; i < _size; i++){
            _array[i] = _array1[i];
        }
        delete[] _array1;
    }
}

void TVector::erase(size_t pos) {
    if(_size == 0){
        std::cout << "ERROR, VECTOR IS EMPTY" << std::endl;
        return;
    }
    Square* tmp = new Square[_size];
    for(int i = 0; i < _size; i++){
        tmp[i] = _array[i];
    }
    for (int i = pos; i < _size - 1; i++){
        tmp[pos] = tmp[pos + 1];
    }
    _size--;
    _array.reset(new Square[_size]);
    for(int i = 0; i < _size; i++){
        _array[i] = tmp[i];
    }
    delete[] tmp;
}
std::ostream & operator<<(std::ostream &os, TVector &s) {
    s.Print();
    return os;
}
std::istream& operator>>(std::istream& is, TVector& s) {
    Square a;
    is >> a;
    s.push_back(std::shared_ptr<Square> (new Square(a)));
    return is;
}

