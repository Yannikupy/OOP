#ifndef LAB2_VECTOR_H
#define LAB2_VECTOR_H
#include "square.h"

class vector {
public:
    vector();
    ~vector();
    void Print();
    void push_back(const Square& value);
    void pop_back();
    void clear();
    int size();
    bool empty();
    void resize(int count);
    void erase(size_t pos);
    friend std::ostream& operator<<(std::ostream& os, vector& s);
    friend std::istream& operator>>(std::istream& is, vector& p);
    int _size;
private:
    Square *_array;
};


#endif //LAB2_VECTOR_H
