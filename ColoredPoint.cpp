#include <iostream>
#include "ColoredPoint.h"
using namespace std;
ColoredPoint::ColoredPoint() : Point() {
    color = "white";
    cout << "ColoredPoint(): created colored point, color = " << color << endl;
}
ColoredPoint::ColoredPoint(int x, int y, const std::string& color) : Point(x, y) {
    this->color = color;
    cout << "ColoredPoint(int, int, string): created colored point, color = " << this->color << endl;
}
ColoredPoint::ColoredPoint(const ColoredPoint& other) : Point(other) {
    color = other.color;
    cout << "ColoredPoint copy constructor: copied colored point, color = " << color << endl;
}
ColoredPoint::~ColoredPoint() {
    cout << "~ColoredPoint(): destroyed colored point, color = " << color << endl;
}
void ColoredPoint::setColor(const std::string& newColor) {
    color = newColor;
}
std::string ColoredPoint::getColor() const {
    return color;
}
void ColoredPoint::print() const {
    Point::print();
    cout << "Color: " << color << endl;
}
