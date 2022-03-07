#include<iostream>

using namespace std;

int Leap[] = {31,29,31,30,31,30,31,31,30,31,30,31};
int Leapf[] = {31,28,31,30,31,30,31,31,30,31,30,31};

int main(){
	int date, month, year;
	int dateN = 0;
	int monthN = 0;
	int yearN = 0;
	cin >> date >> month >> year;
	int n;
	cin >> n;
	int days = 365*(year-1) + ((year-1) - (year-1)%4)/4 + date + n ;
	if(year % 4 == 0){
		for(int i = 0; i < month - 1; i++){
			days += Leap[i];
		}
	}else{
		for(int i = 0; i < month - 1; i++){
			days += Leapf[i];
		}
	}
	yearN += 4*int(days/(365*4+1)) ;
	int left = days%(365*4+1);
	int dayleft = left%365;
	yearN += int(left/365) + 1;
	if(yearN % 4 == 0){
		int i = 0;
		while(dayleft > 0){
			dayleft -= Leap[i];
			i++; 
		}
		dayleft += Leap[i-1];
		if(dayleft == 0){
			monthN = i-1;
			dateN = Leap[i-1];
		}else{
			monthN = i;
			dateN = dayleft;
		}
	}else{
		int i = 0;
		while(dayleft > 0){
			dayleft -= Leapf[i];
			i++; 
		}
		dayleft += Leapf[i-1];
		if(dayleft == 0){
			monthN = i-1;
			dateN = Leapf[i-1];
		}else{
			monthN = i;
			dateN = dayleft;
		}
	}
}
