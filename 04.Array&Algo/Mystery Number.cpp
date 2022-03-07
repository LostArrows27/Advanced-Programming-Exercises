#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    a.resize(n);
    b.resize(n+1);
    for(int &i:a) cin >> i;
    for(int &i:b) cin >> i;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int pos = -1;
    for(int i = 0; i < n; i++){
        if(b[i] != a[i]){
            pos = i;
            break;
        }
    }
    if(pos == -1) cout << b[n];
    else cout << b[pos];
}
