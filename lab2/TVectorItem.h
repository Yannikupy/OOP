#ifndef LAB1_TVECTORITEM_H
#define LAB1_TVECTORITEM_H

#include <iostream>
#include "square.h"

class TVectorItem {
public:
    TVectorItem(const Square& square);

    TVectorItem(const TVectorItem& other);

    Square& GetSquare();

    TVectorItem(){}

    friend std::ostream &operator<<(std::ostream &os, TVectorItem &p);


private:
    Square p;
};

#endif //LAB1_TVECTORITEM_H