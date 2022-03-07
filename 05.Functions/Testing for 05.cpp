#include<iostream>

using namespace std;

void f(int x, double y) {
   cout << "f(int, double)";
}

void f(double x, int y) {
   cout << "f(double, int)";
}


int main(){
    f(1,2.2);
    //f(int, double)
    f(2.2,1);
    //f(double ,int)
}
