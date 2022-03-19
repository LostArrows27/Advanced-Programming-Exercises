#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr;
    int n;
    cin >> n;
    arr.resize(n);
    for(int &i:arr) cin >> i;
    sort(arr.begin(), arr.end());
    vector<int> count1;
    vector<int> id;
    int i;
    for(i = 0; i < arr.size();){
        int j = i + 1;
        int temp = 1;
        while(j < arr.size() && arr[j] == arr[i]){
            temp++;
            j++;
        }
        count1.push_back(temp);
        id.push_back(arr[i]);
        i += temp;
    }
    for(int k = count1.size() - 1; k > 0; k--){
        bool swapped = true;
        for(int j = 1; j < k; j++){
            if(count1[j] > count1[j-1]){
                swap(id[j], id[j-1]);
                swap(count1[j], count1[j-1]);
                swapped = false;
            }
        }
        if(swapped) break;
    }
    /*for(int i:count1) cout << i << " ";
    cout << endl;
    for(int i:id) cout << i << " ";*/
    cout << id[0];
}
