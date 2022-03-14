#include<bits/stdc++.h>

using namespace std;

int counteven(int* &a, int n);

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << counteven(a, n);
}

int counteven(int* &a, int n)
{
    int counts = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0) counts++;
    }
    return counts;
}


