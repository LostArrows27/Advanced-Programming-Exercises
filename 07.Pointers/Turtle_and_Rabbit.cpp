#include<bits/stdc++.h>

using namespace std;

const int rua[10] = {3,3,3,3,3,1,1,1,-6,-6};
const int tho[10] = {0,0,9,9,-12,1,1,1,-2,-2};
const string rua_move[10] = {"Tien dai","Tien dai","Tien dai","Tien dai","Tien dai", "Tien ngan","Tien ngan","Tien ngan", "Truot", "Truot"};
const string tho_move[10] = {"Ngu","Ngu", "Tien dai","Tien dai", "Truot dai", "Tien ngan","Tien ngan","Tien ngan", "Truot ngan", "Truot ngan"};

void chay(int& rua_pos, int* rua_step, int& tho_pos, int* tho_step);

int main()
{
    srand(time(0));
    int rua_pos = 0, tho_pos = 0;
    int rua_step, tho_step;
    // neu pos < 0 thi o vach xuat phat
    while(rua_pos < 70 && tho_pos < 70){
        chay(rua_pos, &rua_step, tho_pos, &tho_step);
    }
}

void chay(int& rua_pos, int* rua_step, int& tho_pos, int* tho_step){
    // rua chay
    bool check = false;
    int temp1 = rand() % 10;
    *rua_step = rua[temp1];
    rua_pos += *rua_step;
    if(rua_pos < 0){
         rua_pos = 0;
         cout << "R pos: " << rua_pos << ", Movement: " << rua_move[temp1] << endl;
    }
    else if(rua_pos >= 70){
        cout << "R pos: " << rua_pos << ", Movement: " << rua_move[temp1] << endl;
        cout << "R is the winner";
        check = true;
    }
    else{
        cout << "R pos: " << rua_pos << ", Movement: " << rua_move[temp1] << endl;
    }
    // ---------------------------------------------------------------------------//
    // tho chay
    int temp2 = rand() % 10;
    *tho_step = tho[temp2];
    tho_pos += *tho_step;
    if(tho_pos < 0 && check == false){
         tho_pos = 0;
         cout << "T pos: " << tho_pos << ", Movement: " << tho_move[temp2] << endl;
    }
    else if(tho_pos >= 70 && check == false){
        cout << "T pos: " << tho_pos << ", Movement: " << tho_move[temp2] << endl;
        cout << "T is the winner";
    }
    else{
        if(check == false) cout << "T pos: " << tho_pos << ", Movement: " << tho_move[temp2] << endl;
    }
}

