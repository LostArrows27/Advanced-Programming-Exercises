#include<bits/stdc++.h>

using namespace std;

struct String{
    int n;
    char* word;
    String capphat(char temp[]){
        n = sizeof(temp);
        word = new char[n];
        for(int i = 0; i < n; i++) word[i] = temp[i];
    }
    void append(const char* temp)
    {
        int temp1 = n;
        string c = word;
        c += temp;
        word = new char[c.length()];
        for(int i = 0; i < c.length(); i++) word[i] = c[i];
    }
    void printf()
    {
        cout << word << endl;
    }
};

int main()
{
    String temp;
    temp.capphat("abcddd");
    temp.append(" sdsds");
    temp.printf();
}
