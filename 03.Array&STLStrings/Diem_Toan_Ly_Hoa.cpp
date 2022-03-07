#include<bits/stdc++.h>

using namespace std;

struct Student{
    string name;
    double toan;
    double ly;
    double hoa;
    void display(){
        cout << setw(21) << left << name << setw(6) << left << toan << setw(6) << left << ly << setw(6) << left << hoa;
    }
    void displayTB(){
        cout << setw(21) << left << name << setw(6) << left << (toan+ly+hoa)/3 << setw(6) << left << toan << setw(6) << left << ly << setw(6) << left << hoa;
    }
};

int main (){
    int n;
    cout << "Nhap vao so luong sinh vien : ";
    cin >> n;
    vector<Student> pts;
    pts.resize(n);
    vector<double> maxtoan;
    vector<double> maxly;
    vector<double> maxhoa;
    vector<double> maxtb;
    for(int i = 0; i < n; i++){
        cout << "Nhap vao ten sinh vien thu " << i+1 << " : ";
        cin >> ws;
        getline(cin , pts[i].name);
        cout << "Nhap vao diem Toan sinh vien " << pts[i].name << " : ";
        cin >> pts[i].toan;
        maxtoan.push_back(pts[i].toan);
        cout << "Nhap vao diem Ly sinh vien " << pts[i].name << " : ";
        cin >> pts[i].ly;
        maxly.push_back(pts[i].ly);
        cout << "Nhap vao diem Hoa sinh vien " << pts[i].name << " : ";
        cin >> pts[i].hoa;
        maxhoa.push_back(pts[i].hoa);
        cout << endl;
        maxtb.push_back((pts[i].toan+pts[i].hoa+pts[i].ly)/3);
    }
    sort(maxtoan.begin(), maxtoan.end());
    sort(maxly.begin(), maxly.end());
    sort(maxhoa.begin(), maxhoa.end());
    sort(maxtb.begin(), maxtb.end());
    cout << "Thu tu sinh vien sap xep theo diem Toan: " << endl;
    cout << setw(21) << left << "Ho va ten sinh vien" << setw(6) << left << "Toan" << setw(6) << left << "Ly" << setw(6) << left << "Hoa" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(maxtoan[i] == pts[j].toan){
                pts[j].display();
                cout << endl;
            }
        }
    }
    cout << endl;
    cout << "Thu tu sinh vien sap xep theo diem Ly: " << endl;
    cout << setw(21) << left << "Ho va ten sinh vien" << setw(6) << left << "Toan" << setw(6) << left << "Ly" << setw(6) << left << "Hoa" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(maxly[i] == pts[j].ly){
                pts[j].display();
                cout << endl;
            }
        }
    }
    cout << endl;
    cout << "Thu tu sinh vien sap xep theo diem Hoa: " << endl;
    cout << setw(21) << left << "Ho va ten sinh vien" << setw(6) << left << "Toan" << setw(6) << left << "Ly" << setw(6) << left << "Hoa" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(maxhoa[i] == pts[j].hoa){
                pts[j].display();
                cout << endl;
            }
        }
    }
    cout << endl;
    cout << "Thu tu sinh vien sap xep theo diem Trung binh: " << endl;
    cout << setw(21) << left << "Ho va ten sinh vien" << setw(6) << left << "TB" << setw(6) << left << "Toan" << setw(6) << left << "Ly" << setw(6) << left << "Hoa" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(maxtb[i] == (pts[j].toan+pts[j].hoa+pts[j].ly)/3){
                pts[j].displayTB();
                cout << endl;
            }
        }
    }
}
