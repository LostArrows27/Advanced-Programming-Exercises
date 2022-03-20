#include<bits/stdc++.h>

using namespace std;

const string num[13] = {"2","3","4","5","6","7","8","9","10", "J","Q","K","A"};
const int chat[4] = {262,261,260,259}; // chat tang dan
int boBai[52];
vector <int> boBaibandau;
int boBaiNguoiChoitemp[4][13];


string inQuanBai(int khoa);

bool uuTienHon(int khoa1, int khoa2);

void traoBai(int *boBai);

void chiaBai(int *boBai, int **boBainguoiChuoi);

void inBoBaiNguoiChoi(int *boBaiNguoiChoi);

//----------------------------------------

int main()
{
    for(int i = 0; i < 52; i++) boBaibandau.push_back(i);
    traoBai(boBai);
    // convert array to pointer
    int *temp[4];
    for(int i = 0; i < 4; i++) temp[i] = boBaiNguoiChoitemp[i];
    int ** boBaiNguoiChoi = temp;
    chiaBai(boBai, boBaiNguoiChoi);
    for(int i = 0; i <= 3; i++){
        cout << "Player " << i + 1 << "'s card is: ";
        inBoBaiNguoiChoi(boBaiNguoiChoi[i]);
        cout << endl;
    }
}

//----------------------------------------

string inQuanBai(int khoa)
{
    int temp1 = khoa/13;
    int temp2 = khoa % 13;
    return num[temp2] + char(chat[temp1]);

}

bool uuTienHon(int khoa1, int khoa2)
{
    int temp1 = khoa1/13, temp3 = khoa2/13;
    //temp1, temp2 la chat
    int temp2 = khoa1%13, temp4 = khoa2%13;
    //temp2, temp4 la number
    if(temp2 > temp4) return true;
    else if(temp2 < temp4) return false;
    else{
        if(temp1 > temp3) return true;
        else return false;
    }
}

void traoBai(int* boBai)
{
    srand(time(0));
    int i = 0;
    while(boBaibandau.size() > 0){
        int temp = rand() % boBaibandau.size();
        boBai[i] = boBaibandau[temp];
        i++;
        boBaibandau.erase(boBaibandau.begin()+temp);
    }
    // 2 mang vector, 1 mang vector 52 phan tu 0-51, 1 mang vector trao bai
    // B1: Lay random 1 phan tu cua mang 1 push_back vao mang 2 (Xoa phan tu do khoi mang 1)
    // B2: Lay random 1 phan tu mang 1 theo kich thuoc con lai cua no cho den khi con 1 phan tu
    // B3: Done
}

void chiaBai(int *boBai, int **boBaiNguoiChoi)
{
    int j = 0;
    for(int i = 0; i < 4; i++){
        for(int k = 0; k < 13; k++){
            boBaiNguoiChoi[i][k] = boBai[j];
            j++;
        }
    }
}

void inBoBaiNguoiChoi(int *boBaiNguoiChoi)
{
    for(int i = 0; i < 13; i++){
        cout << inQuanBai(boBaiNguoiChoi[i]) << " ";
    }
    cout << endl;
}


