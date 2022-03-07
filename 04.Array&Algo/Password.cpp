#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> v;
    v.resize(n);
    for(string &i:v) cin >> i;
    for(int i = 0; i < n -1; i++){
        reverse(v[i].begin(), v[i].end());
        for(int j = i+1; j < n; j++){
            if(v[i] == v[j]){
                cout << v[i].length() << " " <<v[i][(v[i].length()-1)/2];
            }
        }
    }
}
