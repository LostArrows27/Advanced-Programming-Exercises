#include<iostream>

using namespace std;

bool majority(bool a, bool b, bool c){
    int check = 0;
    bool temp = 0;
    (a == 1) ? (check ++) : (check += 0);
    (b == 1) ? (check ++) : (check += 0);
    (c == 1) ? (check ++) : (check += 0);
    (check >= 2) ? (temp = 1) : (temp = 0);
}

int main(){
    bool a, b, c;
    cin >> a >> b >> c;
    cout << majority(a, b, c);
}
