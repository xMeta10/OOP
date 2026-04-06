#include <iostream>
#include "PointerLine.h"
using namespace std;
PointerLine::PointerLine() : start(0, 0) {
    end = new Point(0, 0);
    cout << "PointerLine(): created line with pointer" << endl;
}
PointerLine::PointerLine(int x1, int y1, int x2, int y2) : start(x1, y1) {
    end = new Point(x2, y2);
    cout << "PointerLine(int, int, int, int): created line with pointer" << endl;
}
PointerLine::PointerLine(const PointerLine& other) : start(other.start) {
    end = new Point(*other.end);
    cout << "PointerLine copy constructor: deep copied line with pointer" << endl;
}
PointerLine::~PointerLine() {
    delete end;
    cout << "~PointerLine(): destroyed line with pointer" << endl;
}
void PointerLine::move(int dx, int dy) {
    start.move(dx, dy);
    end->move(dx, dy);
    cout << "PointerLine moved" << endl;
}
void PointerLine::print() const {
    cout << "PointerLine points:" << endl;
    start.print();
    end->print();
}
