#include<iostream>

using namespace std;

int main()
{
    int a[5] = {1,2,3,4,5};
    for(int &i:a) i = 2;
    for(int i:a) cout << i << " ";
}
