#include<bits/stdc++.h>

using namespace std;

int count(int s[3][3], int a, int b, int c, int d){
    int vien = abs(15-a-b-s[0][1]) + abs(15-b-c-s[1][2]) + abs(15-c-d-s[2][1]) + abs(15-d-a-s[1][0]);
    int canh = abs(s[0][0]-a) + abs(s[0][2]-b) + abs(s[2][2]-c) + abs(s[2][0]-d);
    return vien + canh;
}

int main(){
    int s[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> s[i][j];
        }
    }
    vector<int> form;
    form.resize(8);
    // so 5 se o chinh giua
    // suy ra tong cua 2 so cheo, ngang va doc di qua so 5 se luon = 10
    // cac so 1 3 7 9 phai tao thanh hinh thoi theo thu tu 1 3 9 7
    // cac so 2 4 6 8 phai o goc theo thu tu 2 4 8 6
    // Ex:
    // * 8 3 4
    // * 1 5 9
    // * 6 7 2
    if(s[1][1] != 5){
        for(int &i:form) i = abs(5-s[1][1]);
        s[1][1] = 5;
    }
    form[0] += count(s,2,4,8,6);
    form[1] += count(s,6,2,4,8);
    form[2] += count(s,8,6,2,4);
    form[3] += count(s,4,8,6,2);
    form[4] += count(s,8,4,2,6);
    form[5] += count(s,6,8,4,2);
    form[6] += count(s,2,6,8,4);
    form[7] += count(s,4,2,6,8);
    sort(form.begin(), form.end());
    //take the smallest case
    cout << form[0];
}
