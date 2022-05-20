#include <bits/stdc++.h>

using namespace std;

int main()
{
    string t = "ABCDEF";
    string s = "AFBCDEF";
    const int m = s.length();
    const int n = t.length();
    vector<vector <int>> opt;
    opt.resize(m+1);
    for(auto &i : opt) i.resize(n+1);
    for(int i = m - 1; i >= 0; i--){
        for(int j = n-1; j >= 0; j--){
            if(s[i] == t[j]) opt[i][j] = opt[i+1][j+1] + 1;
            else opt[i][j] = max(opt[i+1][j], opt[i][j+1]);
        }
    }
    cout << opt[0][0];
}

