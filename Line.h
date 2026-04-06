#ifndef LINE_H
#define LINE_H
#include "Point.h"
class Line {
private:
    Point start;
    Point end;
public:
    Line();
    Line(int x1, int y1, int x2, int y2);
    Line(const Line& other);
    ~Line();
void move(int dx, int dy);
void print() const;
};
#endif
