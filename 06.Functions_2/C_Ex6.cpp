#include<iostream>
#include<string>

using namespace std;

void permutation(string a, int i, int n)
{
    if(i == n-1)
    {
        cout << a << endl;
        return;
    }
    for(int j = i; j < n; j++)
    {
        swap(a[i], a[j]);
        permutation(a, i+1, n);
        swap(a[i], a[j]);
    }
}

int main()
{
    int n;
    cin >> n;
    string a;
    for(char c = '1'; c <= '0'+n; c++) a+= c;
    permutation(a, 0 , n);
}
