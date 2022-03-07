#include<iostream>
#include<string>

using namespace std;

int main(){
	int n;
	string a[] = {"khong","mot","hai","ba","bon","nam","sau","bay","tam","chin"};
	do{
		cout << "Nhap vao mot so trong khoang 0..9: ";
		cin >> n;
		cout << "Vua nhap chu so " << a[n] << endl;
	}while(n<10);
}
