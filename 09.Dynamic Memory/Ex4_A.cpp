#include<iostream>

using namespace std;

int* temp;

int main()
{
    int a = 10;
    *temp = a;
    delete(temp);
    // chuong trinh khong chay va bao loi
    // "Process returned -1073741819 (0xC0000005)"
}
