#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[3];
    for(int i = 0; i < 3; i++){
        cin >> a[i];
    }
    char b[3];
    for(int i = 0; i < 3; i++){
        cin >> b[i];
    }
    for(int i = 0; i < 3; i++){
        cout << &a[i] << " ";
    }
    cout << endl;
    //0x61fe04 0x61fe08 0x61fe0c
    for(int i = 0; i < 3; i++){
        cout << (void*)&b[i] << " ";
    }
    //0x61fe01 0x61fe02 0x61fe03
}
