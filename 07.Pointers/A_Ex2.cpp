#include<iostream>

using namespace std;

void test(int a[])
{
    cout << "sizeof(a) is: " << sizeof(a);
}

int main()
{
    int a[5] = {1,2,3,4,5};
    cout << "sizeof(a) is: " << sizeof(a) << endl;
    test(a);
}
