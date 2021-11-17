

#ifndef LAB_POINT_H
#define LAB_POINT_H

#include <iostream>

class Point {
public:
    Point();
    Point(std::istream &is);
    Point(double x, double y);

    double dist(Point& other);

    friend std::istream& operator>>(std::istream& is, Point& p);
    friend std::ostream& operator<<(std::ostream& os, Point& p);
    friend bool operator==(Point lhs, Point rhs);
private:
    double x_;
    double y_;
};



#endif //LAB_POINT_H
