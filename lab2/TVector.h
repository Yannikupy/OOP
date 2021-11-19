#ifndef LAB2_TVECTOR_H
#define LAB2_TVECTOR_H
#include "square.h"

class TVector {
public:
    TVector();
    TVector(TVector& other);
    virtual ~TVector();
    void Print();
    void push_back(const Square& value);
    void pop_back();
    void clear();
    int length();
    Square& Last();
    Square& operator[](int idx);
    bool empty();
    void resize(int count);
    void erase(size_t pos);
    friend std::ostream& operator<<(std::ostream& os, TVector& s);
    friend std::istream& operator>>(std::istream& is, TVector& p);
    int _size;
private:
    Square *_array;
};


#endif //LAB2_TVECTOR_H
