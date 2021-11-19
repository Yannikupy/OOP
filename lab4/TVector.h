#ifndef LAB1_TVECTOR_H
#define LAB1_TVECTOR_H

#include <iostream>
#include "TVectorItem.h"
#include "square.h"
#include <memory>

template <class T> class TVector {
public:

    TVector();

    TVector(const std::shared_ptr<TVector> p);

    ~TVector();

    void InsertLast(const std::shared_ptr<T>& square);

    void RemoveLast();

    std::shared_ptr<T>& Last();

    std::shared_ptr<T>& operator[] (const size_t idx);

    bool Empty();

    size_t Length();

    template<class A> friend std::ostream& operator<<(std::ostream& os, const TVector<A>& arr);

    void Clear();


private:
    size_t capacity;
    std::shared_ptr<TVectorItem<T>[]> data;
    size_t size;
};

#endif //LAB1_TVECTOR_H
