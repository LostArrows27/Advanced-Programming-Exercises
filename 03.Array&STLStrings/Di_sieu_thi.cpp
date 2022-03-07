#include<bits/stdc++.h>

using namespace std;

struct sanpham{
    string name;
    int gia;
    int number;
    void in(){
        cout << setw(13) << left << name << "|" << setw(8) << right << number << "|" << setw(8) << right << gia*number << "d";
    }
};

int main(){
    vector<int> giathanh1sp;
    vector<int> giathanh;
    vector<sanpham> a;
    int somathang;
    int total;
    int tien;
    cout << "So tien ban dang co la: ";
    cin >> tien;
    cout << "Di cho thoi ^_^" << endl;
    cout << "So mon do ban can mua: ";
    cin >> somathang;
    a.resize(somathang);
    cout << endl;
    for(int i = 0; i < somathang; i++){
        cout << "Nhap ten san pham thu " << i+1 << ": ";
        cin >> ws;
        getline(cin, a[i].name);
        cout << "Nhap gia tien / 1 san pham cua " << a[i].name << ": ";
        cin >> a[i].gia;
        cout << "Nhap so luong ban can mua: ";
        cin >> a[i].number;
        total += a[i].gia * a[i].number;
        cout << endl;
        giathanh1sp.push_back(a[i].gia);
        giathanh.push_back(a[i].gia * a[i].number);
    }
    cout << "Toi da tong hop hoa don truoc cho ban nhu sau ^^ : " << endl;
    cout << string(32,'_') << endl;
    cout << setw(13) << left << "Ten mat hang" << "|" <<  setw(8) << left << "So luong" << "|" << setw(9) << left << "Gia tien" << endl;
    cout << string(32,'_') << endl;
    for(int i = 0; i < somathang; i++){
        a[i].in();
        cout << endl;
        cout << string(32,'_') << endl;
    }
    cout << setw(13) << left << "Total " << "|" <<  setw(8) << left << "" << "|" << setw(8) << right << total << "d" << endl;
    cout << string(32,'_') << endl;
    cout << endl;
    if(tien >= total) cout << "P/s: Du tien roi nhaa, con " << tien - total << "d nho cam ve cho me nhe ^^";
    else{
        int phuong_an;
        cout << "Do khong du tien nen toi nghi ra o 2 phuong an ^^ : \n1. Mua theo gia/san pham re nhat - Nhap '1'\n2. Mua theo tong gia tri re nhat - Nhap '2'\n";
        cout << "Phuong an cua ban la: ";
        cin >> phuong_an;
        if(phuong_an == 2){
            for(int i = 0; i < somathang-1; i++){
               for(int j = i+1; j < somathang; j++){
                  if(a[i].number*a[i].gia >= a[j].number*a[j].gia){
                        string swap1;
                        swap1 = a[i].name;
                        a[i].name = a[j].name;
                        a[j].name = swap1;
                        int swap2;
                        swap2 = a[i].gia;
                        a[i].gia = a[j].gia;
                        a[j].gia = swap2;
                        int swap3;
                        swap3 = a[i].number;
                        a[i].number = a[j].number;
                        a[j].number = swap3;
                }
            }
          }
           int k = tien;
           int pos;
            for(int i = 0; i < somathang; i++){
                k -= a[i].gia * a[i].number;
                if(k< 0){
                    k += a[i].gia * a[i].number;
                    pos = i-1;
                    break;
                }
            }
            /*cout << "Pos " << pos+1 << endl;
            cout << "Con lai:" << k;*/
            /*cout << "int tien la: " << k << endl;
            for(int i = 0; i < somathang; i++){
                cout << a[i].gia << " ";
            }*/
            cout << "Toi da lam 1 hoa don moi phu hop voi vi tien cua ban nhu sau ^^ : " << endl;
            cout << string(32,'_') << endl;
            cout << setw(13) << left << "Ten mat hang" << "|" <<  setw(8) << left << "So luong" << "|" << setw(9) << left << "Gia tien" << endl;
            cout << string(32,'_') << endl;
            for(int i = 0; i <= pos; i++){
                a[i].in();
                cout << endl;
                cout << string(32,'_') << endl;
            }
            int total1 = tien - k;
            if(k > a[pos+1].gia){
                int temp = k/a[pos+1].gia;
                cout << setw(13) << left << a[pos+1].name << "|" << setw(8) << right << temp << "|" << setw(8) << right << a[pos+1].gia*temp << "d";
                cout << endl;
                cout << string(32,'_') << endl;
                total1 += a[pos+1].gia*temp;
            }
            cout << setw(13) << left << "Total " << "|" <<  setw(8) << left << "" << "|" << setw(8) << right << total1 << "d" << endl;
            cout << string(32,'_') << endl;
            cout << endl;
        }else{
            for(int i = 0; i < somathang-1; i++){
               for(int j = i+1; j < somathang; j++){
                  if(a[i].gia >= a[j].gia){
                        string swap1;
                        swap1 = a[i].name;
                        a[i].name = a[j].name;
                        a[j].name = swap1;
                        int swap2;
                        swap2 = a[i].gia;
                        a[i].gia = a[j].gia;
                        a[j].gia = swap2;
                        int swap3;
                        swap3 = a[i].number;
                        a[i].number = a[j].number;
                        a[j].number = swap3;
                }
            }
          }
           int k = tien;
           int pos;
            for(int i = 0; i < somathang; i++){
                k -= a[i].gia * a[i].number;
                if(k< 0){
                    k += a[i].gia * a[i].number;
                    pos = i-1;
                    break;
                }
            }
            cout << "Toi da lam 1 hoa don moi phu hop voi vi tien cua ban nhu sau ^^ : " << endl;
            cout << string(32,'_') << endl;
            cout << setw(13) << left << "Ten mat hang" << "|" <<  setw(8) << left << "So luong" << "|" << setw(9) << left << "Gia tien" << endl;
            cout << string(32,'_') << endl;
            for(int i = 0; i <= pos; i++){
                a[i].in();
                cout << endl;
                cout << string(32,'_') << endl;
            }
            int total1 = tien - k;
            if(k > a[pos+1].gia){
                int temp = k/a[pos+1].gia;
                cout << setw(13) << left << a[pos+1].name << "|" << setw(8) << right << temp << "|" << setw(8) << right << a[pos+1].gia*temp << "d";
                cout << endl;
                cout << string(32,'_') << endl;
                total1 += a[pos+1].gia*temp;
            }
            cout << setw(13) << left << "Total " << "|" <<  setw(8) << left << "" << "|" << setw(8) << right << total1 << "d" << endl;
            cout << string(32,'_') << endl;
            cout << endl;
        }
    }
}
