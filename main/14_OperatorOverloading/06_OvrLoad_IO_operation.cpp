#include <iostream>
#include <stdint.h>
using namespace std;

class Point
{
    double x;
    double y;
    double z;
public:
    Point(double xx, double yy, double zz);
    ~Point();
    /* Friend Function */
    friend ostream& operator<<(ostream& out, const Point &pointclass);
};

Point::Point(double xx=2, double yy=3, double zz=4)
      :x{xx},y{yy},z{zz}
{
    cout<<"Constructor called"<<endl;
}

Point::~Point(void)
{
    cout<<"Destructor called"<<endl;
}

/* Friend Function, can access private members directly */
ostream& operator<<(ostream& out, const Point &pointclass)
{
    out<<"Point"<<pointclass.x<<" "<<pointclass.y<<" "<<pointclass.z<<endl;
    return out;
}

int main(void)
{
    Point pointer;
    cout<<pointer<<"Over"<<endl;
    return 0;
}