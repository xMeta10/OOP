#ifndef POINT_H
#define POINT_H
class Point {
private:
    int x;
    int y;
public:
    Point();
    Point(int x, int y);
    Point(const Point& other);
    ~Point();
void setX(int value);
void setY(int value);
int getX() const;
int getY() const;
void move(int dx, int dy);
void print() const;
};
#endif
