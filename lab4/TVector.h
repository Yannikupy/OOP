#ifndef LAB2_VECTOR_H
#define LAB2_VECTOR_H
#include "square.h"
#include <memory>

template <class T> class TVector {
public:
    TVector();
    ~TVector();
    void Print();
    void push_back(std::shared_ptr<T> &&value);
    void pop_back();
    void clear();
    int size();
    bool empty();
    void resize(int count);
    void erase(size_t pos);

    template<class A>friend std::ostream& operator<<(std::ostream& os, TVector<A>& s);

    template<class A>friend std::istream& operator>>(std::istream& is, TVector<A>& p);
    int _size;
private:
    std::shared_ptr<T[]> _array;
};


#endif //LAB2_VECTOR_H
