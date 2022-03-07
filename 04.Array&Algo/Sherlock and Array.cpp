#include<bits/stdc++.h>

using namespace std;

int sum(vector<int> a, int i, int j){
    int sum1 = 0;
    for(int p = i; p <= j; p++) sum1 += a[p];
    return sum1;
}
void checking(vector<int> a, int n){
    int total = sum(a, 0, n-1);
    int sumleft = 0;
    int sumright = 0;
    if(n == 1) cout << "YES";
    else{
        bool check = 0;
        for(int i = 0; i < n; i++){
            if(i == 0){
                if(sumleft*2 == total-a[0]){
                    check = 1;
                    break;
                }
            }else if(i == n-1){
                if(sumleft*2 == total-a[n-1]){
                    check = 1;
                    break;
                }
            }else{
                if(2*sum(a, 0, i-1) == total-a[i]){
                    check = 1;
                    break;
                }
            }
        }
        if(check) cout << "YES";
        else cout << "NO";
    }
}

int main()
{
    int test;
    cin >> test;
    vector<vector<int>> v;
    v.resize(test);
    for(int i = 0; i < test; i++){
        int n;
        cin >> n;
        v[i].resize(n);
        for(int &i:v[i]) cin >> i;
        checking(v[i], n);
        cout << endl;
    }
}
