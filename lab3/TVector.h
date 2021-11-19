#ifndef LAB1_TVECTOR_H
#define LAB1_TVECTOR_H

#include <iostream>
#include "TVectorItem.h"
#include "square.h"
#include <memory>

class TVector {
public:

    TVector();

    TVector(const std::shared_ptr<TVector> p);

    ~TVector();

    void InsertLast(const std::shared_ptr<Square>& square);

    void RemoveLast();

    std::shared_ptr<Square>& Last();

    std::shared_ptr<Square>& operator[] (const size_t idx);

    bool Empty();

    size_t Length();

    friend std::ostream& operator<<(std::ostream& os, const TVector& arr);

    void Clear();


private:
    size_t size;
    size_t capacity;
    std::shared_ptr<TVectorItem[]> data;
};

#endif //LAB1_TVECTOR_H
