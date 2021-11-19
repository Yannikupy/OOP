#ifndef LAB1_TVECTORITEM_H
#define LAB1_TVECTORITEM_H

#include <iostream>
#include "square.h"
#include <memory>

class TVectorItem {
public:
    TVectorItem(const std::shared_ptr<Square>& other);

    TVectorItem(const std::shared_ptr<TVectorItem>& other);

    std::shared_ptr<Square>& GetSquare();

    TVectorItem(){}
    friend std::ostream &operator<<(std::ostream &os, TVectorItem &p);


private:
    std::shared_ptr<Square> p;
};

#endif //LAB1_TVECTORITEM_H