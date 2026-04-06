#ifndef POINTERLINE_H
#define POINTERLINE_H
#include "Point.h"
class PointerLine {
private:
    Point start;
    Point* end;
public:
    PointerLine();
    PointerLine(int x1, int y1, int x2, int y2);
    PointerLine(const PointerLine& other);
    ~PointerLine();
void move(int dx, int dy);
void print() const;
};
#endif
