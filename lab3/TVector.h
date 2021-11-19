#ifndef LAB1_TVECTOR_H
#define LAB1_TVECTOR_H

#include <iostream>
#include "TVectorItem.h"
#include "square.h"

class TVector {
public:

    TVector();

    TVector(const TVector& other);

    ~TVector();

    void InsertLast(const Square& pentagon);

    void RemoveLast();

    Square& Last();

    Square& operator[] (const size_t idx);

    bool Empty();

    size_t Length();

    friend std::ostream& operator<<(std::ostream& os, const TVector& arr);

    void Clear();


private:
    size_t size;
    size_t capacity;
    TVectorItem *data;
};

#endif //LAB1_TVECTOR_H
