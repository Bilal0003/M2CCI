#include <iostream>
#include <math.h>

using namespace std;

class Point
{
protected:
    int x;
    int y;

public:
    Point();
    Point(int, int);
    friend float Distance(Point, Point);
    friend std::ostream &operator<<(std::ostream &, const Point &);
    friend Point operator+(Point &, Point &);
    friend Point operator/(Point , float);
};

Point::Point()
{
    x = 0;
    y = 1;
}

Point::Point(int a, int b)
{
    x = a;
    y = b;
}

float Distance(Point a, Point b) { return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y)); }

std::ostream &operator<<(std::ostream &f, const Point &a)
{
    f << '(' << a.x << ',' << a.y << ')' << std::endl;
    return f;
}

Point operator+(Point &a, Point &b)
{
    return Point(a.x + b.x, a.y + b.y);
}

Point operator/(Point a, float b)
{
    return Point(a.x / b, a.y / b);
}

class Cercle
{
protected:
    Point c;
    int r;

public:
    Cercle();
};

Cercle::Cercle(){Point c; r =0;}

int main()
{
    Point a(1, 1);
    Point b(3, 5);
    Point c = a / 2;
    cout << b/2;
    return 0;
}