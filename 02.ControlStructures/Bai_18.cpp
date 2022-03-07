#include<iostream>

using namespace std;

int main(){
	int n;
	int pos = 1;
	int avg = 0;
	do{
		cout << "Diem mon hoc " << pos << ": ";
		cin >> n;
		cout << endl;
		if(n>10){
			do{
				cout << "Nhap lai diem mon hoc " << pos << " (trong khoang tu 0..10) : ";
				cin >> n;
				cout << endl;
			}while(n > 10);
			if(n < 0){
				break;
			}else {
				pos ++;
				avg += n;
			}
		}else if(n >= 0 && n <= 10){
			pos ++;
			avg += n;
			
		}else {
			break;
		}
	}while(n >= 0);
	cout << "So mon hoc: " << pos - 1<< endl;
	cout << "Diem trung binh cua " << pos << " mon hoc: " << double(avg/(pos-1));
}
