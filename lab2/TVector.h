#pragma once

#include "square.h"

class TVector {
public:
    TVector();
    TVector(const TVector &vector);

    virtual ~TVector();

    void InsertLast(const Square &square);
    Square RemoveLast();

    const Square &Last();
    Square &operator[](const size_t index);

    size_t Length();
    bool Empty();

    void Clear();

    friend std::ostream &operator<<(std::ostream &os, const TVector &vector);

private:
    Square *data_;
    size_t size_, capacity_;
};