#include<bits/stdc++.h>

using namespace std;

bool checking(int a){
	vector<int> k;
	while(a > 0){
		k.push_back(a%10);
		a = (a-a%10)/10;
	}
	bool check = 1;
	for(int i = 0; i < k.size()/2; i++){
		if(k[i] != k[k.size()-1-i]) check = 0;
	}
	return check;
}

int main(){
	int test;
	cin >> test;
	int a, b;
	vector<int> v;
	for(int i = 0; i < test; i++){
		int count = 0;
		cin >> a >> b;
		for(int i = a; i <= b; i++){
			if(checking(i) == 1){
				count ++;
			}
		}
		v.push_back(count);
	}
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << endl;
	}
 
}
