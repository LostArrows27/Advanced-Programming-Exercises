#include<iostream>
#include<vector>

using namespace std;

bool checking(int a, int b, int n, int m){
    if(a<0 || b<0 || a>= n || b >= m) return 0;
    else return 1;
}

int counting(const vector<vector<char>> v, char a, const int i, const int j, const int n, const int m){
    int count = 0;
    for(int o = i - 1; o <= i + 1; o++){
        for(int p = j - 1; p <= j + 1; p++){
            if(checking(o,p,n,m) == 1){
                    if(v[o][p] == '*'){
                        count ++;
                    }
            }
        }
    }
    return count;
}

int main(){
	int n, m;
	cin >> n >> m;
	vector<vector<char>> v;
	v.resize(n);
	for(int i = 0; i < n; i++){
        v[i].resize(m);
        for(auto &j:v[i]) cin >> j;
	}
	for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(v[i][j] == '*'){
                cout << "*";
            }else{
                int count1 = counting(v, v[i][j], i, j, n, m);
                cout << count1;
            }
            cout << " ";
        }
        cout << endl;
	}
}
