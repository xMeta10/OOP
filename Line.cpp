#include <iostream>
#include "Line.h"
using namespace std;
Line::Line() : start(0, 0), end(0, 0) {
    cout << "Line(): created line" << endl;
}
Line::Line(int x1, int y1, int x2, int y2) : start(x1, y1), end(x2, y2) {
    cout << "Line(int, int, int, int): created line" << endl;
}
Line::Line(const Line& other) : start(other.start), end(other.end) {
    cout << "Line copy constructor: copied line" << endl;
}
Line::~Line() {
    cout << "~Line(): destroyed line" << endl;
}
void Line::move(int dx, int dy) {
    start.move(dx, dy);
    end.move(dx, dy);
    cout << "Line moved" << endl;
}
void Line::print() const {
    cout << "Line points:" << endl;
    start.print();
    end.print();
}
