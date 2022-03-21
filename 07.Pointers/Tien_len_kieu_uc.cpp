#include<bits/stdc++.h>

using namespace std;

const string num[13] = {"2","3","4","5","6","7","8","9","10", "J","Q","K","A"};
const int chat[4] = {262,261,260,259}; // bich -> nhep -> do -> co
int boBai[52];
vector <int> boBaibandau;
int boBaiNguoiChoitemp[4][13];
int haibich;
bool choitiep[4] = {1,1,1,1};
int ROUND = 1;


string inQuanBai(int khoa);

bool uuTienHon(int khoa1, int khoa2);

void traoBai(int *boBai);

void chiaBai(int *boBai, int **boBainguoiChuoi);

void inBoBaiNguoiChoi(int *boBaiNguoiChoi);

int aiCo2Bich (int **boBaiNguoiChoi, int& haibich);

int chonBai (int *boBaiNguoiChoi);

void choiBai(int *boBaiNguoiChoi, int quanBaiVuaChoi);

void loaiNguoiChoi(int player_number);

//int nguoiChoiTiepTheo(int )

bool chuaAiHetBai (int** boBaiNguoiChoi);

//----------------------------------------

int main()
{
    cout << "Game: Go Ahead AUS style." << endl;
    cout << "------------------------" << endl;
    cout << "Number of players: 4" << endl;
    cout << "------------------------" << endl;
    cout << "Let's me suffle the dex !" << endl << endl;
    for(int i = 0; i < 52; i++) boBaibandau.push_back(i);
    traoBai(boBai);
    // convert 2D array to pointer
    int *temp[4];
    for(int i = 0; i < 4; i++) temp[i] = boBaiNguoiChoitemp[i];
    int ** boBaiNguoiChoi = temp;
    chiaBai(boBai, boBaiNguoiChoi);
    for(int i = 0; i <= 3; i++){
        cout << "Player " << i + 1 << "'s card is: ";
        inBoBaiNguoiChoi(boBaiNguoiChoi[i]);
        cout << endl;
    }
    // Round 1 se chay tam rieng, tu cac round sau se dua vao vong moi
    cout << "------------------------" << endl;
    cout << "ROUND " << ROUND << endl;
    int firstperson = aiCo2Bich(boBaiNguoiChoi, haibich);
    cout << "Player to play first is: Player " << firstperson + 1 << endl;
    choiBai(boBaiNguoiChoi[firstperson], haibich);
    for(int i = 0; i < 4; i++){
        int play = chonBai(boBaiNguoiChoi[i]);
        if(i != firstperson ){
            cout << "Player " << i + 1 << " turn" << endl;

        }
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
    // B3: Done, size vector ban dau = 0
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

int aiCo2Bich (int **boBaiNguoiChoi, int& haibich)
{
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 13; j++){
            if(boBaiNguoiChoi[i][j] == 0){
                haibich = boBaiNguoiChoi[i][j];
                return i;
            }
            // i+1 la nguoi choi thu i+1
        }
    }
}

int chonBai(int *boBaiNguoiChoi)
{
    srand(time(0));
    int temp1;
    do{
        temp1 = rand()%13;
    }while(boBaiNguoiChoi[temp1] < 0);
    return boBaiNguoiChoi[temp1];
    // doi voi nh quan bai da chon, danh dau = -1 nen khong co chuyen tron trung phan tu cu hay vuot xa kich thuoc mang
}

void choiBai(int *boBaiNguoiChoi, int quanBaiVuaChoi)
{
    cout << "Player summon the card: " << inQuanBai(quanBaiVuaChoi) << endl;
    for(int i = 0; i < 13; i++){
        if(quanBaiVuaChoi == boBaiNguoiChoi[i]) boBaiNguoiChoi[i] = -1;
    }
}

void loaiNguoiChoi(int player_number)
{
    choitiep[player_number] = false;
    cout << "Player out !!";
}

//int nguoiChoiTiepTheo(int*, int, int)

bool chuaAiHetBai(int **boBaiNguoiChoi)
{
    bool temp = false;
    for(int i = 0; i < 13; i++){
        if(boBaiNguoiChoi[i] >= 0) temp = true;
    }
    return temp;
    // true: nguoi choi chua het bai
    // false: nguoi choi het bai
}



