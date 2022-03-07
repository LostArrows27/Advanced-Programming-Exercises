#include<iostream>

using namespace std;

int main(){
	int n;
	cout << "Tong so mon hoc can tinh DTB: ";
	cin >> n;
	int avg = 0;
	int avghs = 0;
	for(int i = 0; i < n; i++){
		int mon;
		int heso;
		cout << "Diem mon hoc " << i+1 << ": ";
		cin >> mon;
		cout << "He so mon hoc " << i+1 << ": ";
		cin >> heso;
		avg += mon * heso;
		avghs += heso;
	}
	cout << "So mon hoc: " << n << endl;
	cout << "Tong so he so:" << avghs << endl;
	cout << "Diem trung binh cua " << n << " mon hoc:" << avg/avghs;
}
