#include "tvector.h"

#include <cstring>

enum {
    CAPACITY = 32,
};

TVector::TVector()
        : data_(nullptr), size_(0), capacity_(CAPACITY)
{
    data_ = (Square *)malloc(capacity_ * sizeof(Square));
}

TVector::TVector(const TVector &vector)
        : data_(nullptr), size_(vector.size_), capacity_(vector.capacity_)
{
    data_ = (Square *)malloc(vector.capacity_ * sizeof(Square));
    std::memcpy(data_, vector.data_, capacity_ * sizeof(Square));
}

TVector::~TVector()
{
    free(data_);
    data_ = nullptr;
    size_ = 0;
    capacity_ = 0;
}

size_t TVector::Length()
{
    return size_;
}

bool TVector::Empty()
{
    return !size_;
}

Square &TVector::operator[](const size_t index)
{
    return data_[index];
}

void TVector::InsertLast(const Square &square)
{
    if (size_ >= capacity_) {
        capacity_ <<= 1;
        data_ = (Square *)realloc(data_, capacity_ * sizeof(Square));
    }

    data_[size_++] = square;
}

Square TVector::RemoveLast()
{
    return data_[--size_];
}

const Square &TVector::Last()
{
    return data_[size_ - 1];
}

void TVector::Clear()
{
    size_ = 0;
    capacity_ = CAPACITY;
    data_ = (Square *)realloc(data_, capacity_ * sizeof(Square));
}

std::ostream &operator<<(std::ostream &os, const TVector &vector)
{
    for (size_t i = 0; i < vector.size_; ++i)
        os << vector.data_[i];
    return os;
}
