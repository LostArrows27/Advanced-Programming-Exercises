#include<iostream>
#include<string>

using namespace std;

string spelling(int a, int b, int c){
    string a1[] = {"","one ","two ","three ","four ","five ","six ","seven ","eight ","nine "};
    string a2[] = {"ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen "};
    string a3[] = {"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    string part;
    for(int i = 0; i <= 9; i++){
        if(a == i && a != 0){
            part += a1[i] + "hundred ";
            break;
        }
    }
    if(b == 1){
        for(int i = 0; i <= 9; i++){
            if(c == i){
                part += a2[i];
            }
        }
    }else {
        for(int i = 0; i <= 9; i++){
            if(b == i){
                part += a3[i];
                for(int j = 0; j <= 9; j++){
                    if(c != 0 && c == j && b != 0){
                        part += "-" + a1[j]; 
                    }
                    if(c != 0 && c == j && b == 0){
                        part += a1[j];
                    }
                }
            }
        }
    }
    return part;
}
int main(){
    int n;
    cin >> n;
    string read;
    if(n < 0){
        n = n*-1;
        read += "negative ";
    }
    int m[9];
    for(int i = 0; i < 9; i++){
        m[i] = 0;
    }
    int pos = 0;
    while(n > 0){
        int du = n % 10;
        m[pos] = du;
        pos += 1;
        n = (n-du)/10;
    }
    if(pos >= 7){
        if(spelling(m[5], m[4], m[3]) == ""){
            read += spelling(m[8], m[7], m[6]) + "million " + spelling(m[2], m[1], m[0]);
        }else {
            read += spelling(m[8], m[7], m[6]) + "million " + spelling(m[5], m[4], m[3]) + "thousand " + spelling(m[2], m[1], m[0]);
        }
    }else if(pos >= 4){
        read += spelling(m[5], m[4], m[3]) + "thousand " + spelling(m[2], m[1], m[0]);
    }else {
        read += spelling(m[2], m[1], m[0]);
    }
    cout << read;
    return 0;
}