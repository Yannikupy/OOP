#include "TVector.h"
#include "cstdlib"

template <class T> TVector<T>::TVector(){
    std::shared_ptr<T[]> _array(nullptr);
    _size = 0;
}
template <class T> TVector<T>::~TVector()
{
    clear();
}
template <class T> void TVector<T>::Print() {
    for(int i = 0; i < _size; i++){
        std::cout << _array[i] << std::endl;
    }
}

template <class T> void TVector<T>::push_back(std::shared_ptr<T> &&value) {
    T* _array1 = new T[_size + 1];
    for(int i = 0; i < _size; i++){
        _array1[i] = _array[i];
    }
    _array1[_size] = value;
    _size++;
    _array.reset(new T[_size]);
    for(int i = 0; i < _size; i++){
        _array[i] = _array1[i];
    }
    delete[] _array1;
}

template <class T> void TVector<T>::pop_back() {
    T* tmp = new T[_size];
    for(int i = 0; i < _size - 1; i++){
        tmp[i] = _array[i];
    }
    _size--;
    _array.reset(new T[_size]);
    for(int i = 0; i < _size; i++){
        _array[i] = tmp[i];
    }
    delete[] tmp;
}

template <class T> void TVector<T>::clear() {
    if(_array){
        _array = nullptr;
    }
    _size = 0;
}

template <class T> int TVector<T>::size() {
    return _size;
}

template <class T> bool TVector<T>::empty() {
    if(_size == 0) return true;
    else return false;
}

template <class T> void TVector<T>::resize(int count) {
    if(count == 0){
        _size = 0;
    }
    else if (count == _size) return;
    else if(count > _size){
        T init;
        T* _array1 = new T[count];
        for (int i = 0; i < _size; i++){
            _array1[i] = _array[i];
        }
        int tmp_size = _size;
        _size = count;
        for (int i = tmp_size; i < count; i++){
            _array1[i] = init;
        }
        _array.reset(new T[_size]);
        for(int i = 0; i < _size; i++){
            _array[i] = _array1[i];
        }
        delete[] _array1;
    }
    else{
        T* _array1 = new T[count];
        for (int i = 0; i < count; i++){
            _array1[i] = _array[i];
        }
        _size = count;
        _array.reset(new T[_size]);
        for(int i = 0; i < _size; i++){
            _array[i] = _array1[i];
        }
        delete[] _array1;
    }
}

template <class T> void TVector<T>::erase(size_t pos) {
    if(_size == 0){
        std::cout << "ERROR, VECTOR IS EMPTY" << std::endl;
        return;
    }
    T* tmp = new T[_size];
    for(int i = 0; i < _size; i++){
        tmp[i] = _array[i];
    }
    for (int i = pos; i < _size - 1; i++){
        tmp[pos] = tmp[pos + 1];
    }
    _size--;
    _array.reset(new T[_size]);
    for(int i = 0; i < _size; i++){
        _array[i] = tmp[i];
    }
    delete[] tmp;
}
template <class T>
std::istream& operator>>(std::istream& is, TVector<T>& s) {
    T a;
    is >> a;
    s.push_back(a);
    return is;
}

template<class T>
std::ostream & operator<<(std::ostream &os, TVector<T>  &s) {
    s.Print();
    return os;
}
#include "square.h"
template class TVector<Square>;
template std::ostream& operator<<(std::ostream& os, TVector<Square>& stack);