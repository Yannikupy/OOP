#pragma once

#include "square.h"

#include <ostream>
#include <memory>

class TVector {
public:
    TVector();
    TVector(const TVector &);

    virtual ~TVector();

    inline size_t Length() const
    {
        return length_;
    }

    inline bool Empty() const
    {
        return !length_;
    }

    inline const std::shared_ptr<Square> &operator[](const size_t index) const
    {
        return data_[index];
    }

    inline std::shared_ptr<Square> Last() const
    {
        return data_[length_ - 1];
    }

    void InsertLast(const std::shared_ptr<Square> &);
    void EmplaceLast(const Square &&);

    void Remove(const size_t index);

    inline Square RemoveLast()
    {
        return *data_[--length_];
    }

    void Clear();

    friend std::ostream &operator<<(std::ostream &, const TVector &);

private:
    void _Resize(const size_t new_capacity);

    std::shared_ptr<Square> *data_;
    size_t length_, capacity_;

    enum { CAPACITY = 32 };
};
