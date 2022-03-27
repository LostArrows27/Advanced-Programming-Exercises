#include<bits/stdc++.h>

using namespace std;

struct Point{
    int a;
    int b;
    Point(){
        a = 0;
        b = 0;
    }
    Point(int _a, int _b)
    {
        a = _a;
        b = _b;
    }
    void print(){
        cout << "(" << a << ", " << b << ")" << endl;
    }

};

Point mid_point(Point c, Point d)
{
    Point tmid_point;
    tmid_point.a = (c.a + d.a)/2;
    tmid_point.b = (c.b + d.b)/2;
    return tmid_point;
}

int main() {
   Point temp(1, 2);
   temp.print();
   Point temp1(3, 4);
   Point mid1 = mid_point(temp, temp1);
   mid1.print();
   cout << &mid1.a << " " << &mid1.b;
}
