#include<bits/stdc++.h>

using namespace std;

int Leap[] = {31,29,31,30,31,30,31,31,30,31,30,31};
int Leapf[] = {31,28,31,30,31,30,31,31,30,31,30,31};

int tf(const char& c){
	int k = c - '0';
	return k;
}

void checking(int date, int month, int year, int n){
	int dateN = 0;
	int monthN = 0;
	int yearN = 0;
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
	if(monthN < 10 && dateN < 10){
		cout << "0" << dateN << "-0" << monthN << "-" << yearN << endl;
	}else if(monthN < 10){
		cout << dateN << "-0" << monthN << "-" << yearN << endl;
	}else if(dateN < 10){
		cout << "0" << dateN << "-" << monthN << "-" << yearN << endl;
	}else{
		cout << dateN << "-" << monthN << "-" << yearN << endl;
	}
}

int main (){
	string a;
	cin >> a;
	vector <int> v;
	int date = tf(a[0]) * 10 + tf(a[1]);
	int month = tf(a[3]) * 10 + tf(a[4]);
	int year = tf(a[6]) * 1000 + tf(a[7]) * 100 + tf(a[8] ) * 10 + tf(a[9]);
	int n;
	do{
		cin >> n;
		if(n != 0) v.push_back(n);
	}while(n!= 0);
	for(int i = 0; i < v.size(); i++){
		checking(date, month, year, v[i]);
	}		
}
