#include<bits/stdc++.h>

using namespace std;

void roll_a_dice(int &a);

void updateScore(int &score1, int &score2, const int dice1, const int dice2);

void result1(const int &score1, const int &score2, const int dice1, const int dice2);

void result2(const int &score1, const int &score2, const int dice1, const int dice2);

int main()
{
    srand(time(0));
    int score1 = 0, score2 = 0;
    int dice1, dice2;
    while(score1 < 100 && score2 < 100){
            if(score1 <= score2){
                roll_a_dice(dice1); roll_a_dice(dice2);
                updateScore(score1, score2, dice1, dice2);
                result1(score1, score2, dice1, dice2);
            }else{
                roll_a_dice(dice2); roll_a_dice(dice1);
                updateScore(score1, score2, dice1, dice2);
                result2(score1, score2, dice1, dice2);
            }
    }
}

void roll_a_dice(int &a)
{
    a = 1 + rand()%6;
}

void updateScore(int &score1, int &score2, const int dice1, const int dice2)
{
    score1 += dice1; score2 += dice2;
}

void result1(const int &score1, const int &score2, const int dice1, const int dice2)
{
    cout << "xuc xac nguoi choi 1: " << dice1 << "    Tong nguoi 1: " << score1 << endl;
    cout << "xuc xac nguoi choi 2: " << dice2 << "    Tong nguoi 2: " << score2 << endl;
}

void result2(const int &score1, const int &score2, const int dice1, const int dice2)
{
    cout << "xuc xac nguoi choi 2: " << dice2 << "    Tong nguoi 2: " << score2 << endl;
    cout << "xuc xac nguoi choi 1: " << dice1 << "    Tong nguoi 1: " << score1 << endl;
}
