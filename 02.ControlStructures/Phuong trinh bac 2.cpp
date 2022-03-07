#include<iostream>
#include<math.h>

using namespace std;

int main (){
	double a, b, c;
	cin >> a >> b >> c;
	double delta = b*b - 4*a*c;
	if (a == 0) {
		if (b == 0 && c == 0){
			cout << "phuong trinh co vo so nghiem";
	     }else if ( b == 0 && c != 0){
	     	      cout << "phuong trinh vo nghiem";
	     }else {
	     	      cout << "phuong trinh co 1 nghiem " << endl << c*-1/b;
	     }
	}else {
		if (delta < 0 ){
			cout << "phuong trinh vo nghiem";
		}else if (delta == 0) {
			cout << "phuong trinh co 1 nghiem" << endl ;
			double n1 = (b*-1)/(2*a);
			printf("%0.5lf",n1);
		}else {
			double no1 = (b*-1 - sqrt(delta))/2/a;
			double no2 = (b*-1 + sqrt(delta))/2/a;
			cout << "phuong trinh co 2 nghiem " << endl ;
			printf("%0.5f",no1);
			cout << " ";
			printf("%0.5f",no2);
		}
	}
	return 0;
}
