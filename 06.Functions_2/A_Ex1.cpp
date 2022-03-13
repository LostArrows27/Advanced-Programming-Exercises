#include<iostream>

using namespace std;

void checking(int a[]){
    cout << "sizeof(a) = " << sizeof(a) << endl;
    cout << "sizeof(a[0])  = " << sizeof(a[0]) << endl;
    for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++){
        cout << &a[i] << endl;
    }
}

int main(){
    int a[] = {1,2,3,4,5,6};
    cout << "sizeof(a) = " << sizeof(a) << endl;
    cout << "sizeof(a[0])  = " << sizeof(a[0]) << endl;
    for(int i = 0; i < 6; i++) cout << &a[i] << endl;
    cout << endl;
    checking(a);

}
