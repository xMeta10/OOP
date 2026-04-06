#ifndef COLOREDPOINT_H
#define COLOREDPOINT_H
#include <string>
#include "Point.h"
class ColoredPoint : public Point {
private:
    std::string color;
public:
    ColoredPoint();
    ColoredPoint(int x, int y, const std::string& color);
    ColoredPoint(const ColoredPoint& other);
    ~ColoredPoint();
void setColor(const std::string& newColor);
    std::string getColor() const;
void print() const;
};
#endif
