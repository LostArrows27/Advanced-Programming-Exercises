#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    const char* c = a.c_str();
    const char* d = b.c_str();
    int count1 = 0;
    if(strlen(c) > strlen(d)) cout << "a is not in b";
    else{
        for(int i = 0; i <= strlen(d)-strlen(c); i++){
            string e = d;
            string temp = e.substr(i,strlen(c));
            const char* temp1 = temp.c_str();
            int k = strcmp(c,temp1);
            if(k == 0) count1 ++;
        }
        cout << "a is in b for: " << count1 << " time";
    }
}
