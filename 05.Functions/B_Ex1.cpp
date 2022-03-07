#include<bits/stdc++.h>

using namespace std;

bool majority(bool a, bool b, bool c){
    int check = 0;
    while(a){
        check ++;
        break;
    }
    while(b){
        check ++;
        break;
    }
    while(c){
        check ++;
        break;
    }
    while(check >= 2){
        return true;
        break;
    }
    while(check < 2){
        return false;
        break;
    }
}

int main(){
    bool a, b, c;
    cin >> a >> b >> c;
    cout << majority(a, b, c);
}
