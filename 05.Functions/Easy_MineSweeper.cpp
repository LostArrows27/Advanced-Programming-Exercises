#include<bits/stdc++.h>

using namespace std;

bool event(vector<vector<char>> v, int x, int y){
    if(v[x][y] == 'B') return 0;
    else return 1;
}

bool checking(int a, int b, int n, int m){
    if(a<0 || b<0 || a>= n || b >= m) return 0;
    else return 1;
}

char counting(const vector<vector<char>> v, char a, const int i, const int j, const int n, const int m){
    int count = 0;
    for(int o = i - 1; o <= i + 1; o++){
        for(int p = j - 1; p <= j + 1; p++){
            if(checking(o,p,n,m) == 1){
                    if(v[o][p] == 'B'){
                        count ++;
                    }
            }
        }
    }
    return count+48;
}

int main()
{
    int n, m, k;
    cout << "Nhap vao so hang cua ban do min: ";
    cin >> n;
    cout << "Nhap vao so cot cua ban do min: ";
    cin >> m;
    cout << "Ban muon choi voi bao nhieu qua bom: ";
    cin >> k;
    for(int i = 0; i < 70; i++) cout << endl;
    vector<vector<char>> board;
    vector<vector<char>> temp;
    // tao 1 map khong chua bom de hien thi
    board.resize(n);
    temp.resize(n);
    for(int i = 0; i < n; i++){
        board[i].resize(m);
        temp[i].resize(m);
        for(char &j:board[i]) j = '*';
        for(char &j:temp[i]) j = '*';
    }
    srand(time(0));
    for(int i = 0; i < k; i++){
        int Rand = rand() % (n*m);
        int y = Rand%m;
        int x = (Rand-y)/m;
        board[x][y] = 'B';
    }
    //sinh ngay nhien bom
    /*for(int i = 0; i < n; i++){
        for(auto j:board[i]) cout << j << "  ";
        cout << endl << endl;
    }*/
    //kiem tra ban do min
    int x, y;
    int time = 0;
    do{

        cout << "Ban do min (updated): " << endl;
        for(int i = 0; i < n; i++){
        for(auto j:temp[i]) cout << j << "  ";
        cout << endl << endl;
        }
        cout << "Nhap toa do x (Tu 1 den " << m << "): ";
        cin >> x;
        cout << "Nhap toa do y (Tu 1 den " << n << "): ";
        cin >> y;
        if(board[x-1][y-1] != 'B') temp[x-1][y-1] = counting(board, board[x-1][y-1], x-1, y-1, n, m);
        if(board[x-1][y-1] != 'B') time++;
        for(int i = 0; i < 70; i++) cout << endl;
    }while(event(board, x-1, y-1) && time < n*m-k);
    if(event(board, x-1, y-1) == 0) cout << "YOU'RE DEAD! :( GOOD LUCK NEXT TIME !";
    else cout << "CONGRATULATIONS, YOU HAVE FOUND ALL THE BOMBS!^^";
}
