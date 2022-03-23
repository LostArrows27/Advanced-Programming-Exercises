#include<iostream>

using namespace std;

int getlength(char a[]){
    int length = 0;
    char *temp = a;
    while(*temp != '\0'){
        temp++;
        length++;
    }
    return length;
}

void reverses(char a[])
{
    int temp = getlength(a);
    int limit = temp/2-1;
    for(int i = 0; i <= limit; i++){
        char temp1 = a[i];
        a[i] = a[temp-i-1];
        a[temp-i-1] = temp1;
    }
}

void pad_right(char a[], int n)
{
    int length = getlength(a);
    if(length < n){
        for(int i = length; i < n; i++) a[i] = ' ';
    }
}

void pad_left(char a[], int n)
{
    int length = getlength(a);
    if(length < n){
        for(int i = n-1 ; i >= n-length ; i--) a[i] = a[i-(n-length)];
        for(int i = 0; i <= n-length-1; i++) a[i] = ' ';
    }
}

void truncate(char a[], int n)
{
    int length = getlength(a);
    if(length > n) a[n-1] = '\0';
}

bool is_palindrome(char a[])
{
    bool check = true;
    int length = getlength(a);
    for(int i = 0; i <= length/2-1; i++){
        if(a[i] != a[length-1-i]){
            check = false;
            break;
        }
    }
    return check;
}

void trim_left(char a[])
{
    if(a[0] == ' '){
        int i = 0;
        int space = 0;
        int length = getlength(a);
        while(a[i] == ' '){
            space ++;
            i ++;
        }
        for(int i = 0; i < length-space; i++){
            a[i] = a[i+space];
        }
        a[length-space] = '\0';
    }
}

void trim_right(char a[])
{
    int length = getlength(a);
    if(a[length - 1] == ' '){
        int i = length-1;
        while(a[i] == ' '){
            i--;
        }
        a[i+1] = '\0';
    }
}

int main(){
    char a[] = "Nguyen Thanh Dung     ";
    //reverses(a);
    ///pad_right(a, 30);
    //cout << a << " " << "check point";
    //pad_left(a,20);
    //truncate(a, 10);
    //cout << is_palindrome(a);
    //trim_left(a);
    //trim_right(a);
    //cout << a << "|check point";


}
