#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a;
    a.resize(n);
    for(int &i:a) cin >> i;
    sort(a.begin(), a.end());
    int key;
    cin >> key;
    int lo = 0;
    int hi = n-1;
    int pos = 0;
    while(lo < hi){
        int mid = lo + (hi-lo)/2;
        if(a[mid] > key) hi = mid-1;
        else if(a[mid] < key) lo = mid+1;
        else{
            pos = mid + 1;
            break;
        }
    }
    if(pos != 0) cout << pos;
    else cout << "Not found!";
}
