#ifndef LAB2_VECTOR_H
#define LAB2_VECTOR_H
#include "square.h"
#include <memory>

class TVector {
public:
    TVector();
    ~TVector();
    void Print();
    void push_back(std::shared_ptr<Square> &&value);
    void pop_back();
    void clear();
    int size();
    bool empty();
    void resize(int count);
    void erase(size_t pos);
    friend std::ostream& operator<<(std::ostream& os, TVector& s);
    friend std::istream& operator>>(std::istream& is, TVector& p);
    int _size;
private:
    std::shared_ptr<Square[]> _array;
};


#endif //LAB2_VECTOR_H
