#include<iostream>
#include<cstring>
#include<string>

using namespace std;

char* concat(const char* a, const char* b)
{
    string a_temp = a;
    string b_temp = b;
    char* temp = new char[a_temp.length() + b_temp.length()];
    strcpy(temp, a);
    strcat(temp, b);
    return temp;
}

int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    cout << concat(a.c_str(), b.c_str());
}
