#include<iostream>

using namespace std;

int main()
{
    int c = 0, d = 1;
    int* p1 = &c;
    int* p2 = &d;
    int* p3;
    cout << "&c = " << &c << ",&d =  " << &d <<endl;
    p3 = &d;
    cout << "*p3 = " << *p3 << ", p3 = " << p3 << endl;
    p3 = p1;
    cout << "*p3 = " << *p3 << ", p3 = " << p3 << endl;
    *p1 = *p2;
    cout << "*p1 = " << *p1 << ", p1 = " << p1 << endl;

}
