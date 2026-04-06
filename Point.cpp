#include <iostream>
#include "Point.h"
using namespace std;
Point::Point() {
    x = 0;
    y = 0;
    cout << "Point(): created point (" << x << ", " << y << ")" << endl;
}
Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
    cout << "Point(int, int): created point (" << this->x << ", " << this->y << ")" << endl;
}
Point::Point(const Point& other) {
    x = other.x;
    y = other.y;
    cout << "Point copy constructor: copied point (" << x << ", " << y << ")" << endl;
}
Point::~Point() {
    cout << "~Point(): destroyed point (" << x << ", " << y << ")" << endl;
}
void Point::setX(int value) {
    x = value;
}
void Point::setY(int value) {
    y = value;
}
int Point::getX() const {
    return x;
}
int Point::getY() const {
    return y;
}
void Point::move(int dx, int dy) {
    x += dx;
    y += dy;
    cout << "move(): point moved to (" << x << ", " << y << ")" << endl;
}
void Point::print() const {
    cout << "Point coordinates: (" << x << ", " << y << ")" << endl;
}
