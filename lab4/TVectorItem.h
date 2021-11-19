#ifndef LAB1_TVECTORITEM_H
#define LAB1_TVECTORITEM_H

#include <iostream>
#include "square.h"
#include <memory>

template <class T> class TVectorItem {
public:
    TVectorItem(const std::shared_ptr<T>& other);

    TVectorItem(const std::shared_ptr<TVectorItem<T>>& other);

    std::shared_ptr<T>& GetSquare();

    TVectorItem(){}

    template<class A> friend std::ostream &operator<<(std::ostream &os, TVectorItem<A> &p);


private:
    std::shared_ptr<T> p;
};

#endif //LAB1_TVECTORITEM_H