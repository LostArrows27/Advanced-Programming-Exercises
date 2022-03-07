#include<bits/stdc++.h>

using namespace std;

const string upper[26][7] = {
{
"   ###   ",
"  ## ##  ",
" ##   ## ",
"##     ##",
"#########",
"##     ##",
"##     ##"
},
{
"######## ",
"##     ##",
"##     ##",
"######## ",
"##     ##",
"##     ##",
"######## "
},
{
" ###### ",
"##    ##",
"##      ",
"##      ",
"##      ",
"##    ##",
" ###### "
},
{
"######## ",
"##     ##",
"##     ##",
"##     ##",
"##     ##",
"##     ##",
"######## "
},
{
"########",
"##      ",
"##      ",
"######  ",
"##      ",
"##      ",
"########"
},
{
"########",
"##      ",
"##      ",
"######  ",
"##      ",
"##      ",
"##      "
},
{
" ######  ",
"##    ## ",
"##       ",
"##   ####",
"##    ## ",
"##    ## ",
" ######  "
},
{
"##     ##",
"##     ##",
"##     ##",
"#########",
"##     ##",
"##     ##",
"##     ##"
},
{
"####",
" ## ",
" ## ",
" ## ",
" ## ",
" ## ",
"####"
},
{
"      ##",
"      ##",
"      ##",
"      ##",
"##    ##",
"##    ##",
" ###### "
},
{
"##    ##",
"##   ## ",
"##  ##  ",
"#####   ",
"##  ##  ",
"##   ## ",
"##    ##"
},
{
"##      ",
"##      ",
"##      ",
"##      ",
"##      ",
"##      ",
"########"
},
{
"##     ##",
"###   ###",
"#### ####",
"## ### ##",
"##     ##",
"##     ##",
"##     ##"
},
{
"##    ##",
"###   ##",
"####  ##",
"## ## ##",
"##  ####",
"##   ###",
"##    ##"
},
{
" ####### ",
"##     ##",
"##     ##",
"##     ##",
"##     ##",
"##     ##",
" ####### "
},
{
"######## ",
"##     ##",
"##     ##",
"######## ",
"##       ",
"##       ",
"##       "
},
{
" ####### ",
"##     ##",
"##     ##",
"##     ##",
"##  ## ##",
"##    ## ",
" ##### ##"
},
{
"######## ",
"##     ##",
"##     ##",
"######## ",
"##   ##  ",
"##    ## ",
"##     ##"
},
{
" ###### ",
"##    ##",
"##      ",
" ###### ",
"      ##",
"##    ##",
" ###### "
},
{
"########",
"   ##   ",
"   ##   ",
"   ##   ",
"   ##   ",
"   ##   ",
"   ##   "
},
{
"##     ##",
"##     ##",
"##     ##",
"##     ##",
"##     ##",
"##     ##",
" ####### "
},
{
"##     ##",
"##     ##",
"##     ##",
"##     ##",
" ##   ## ",
"  ## ##  ",
"   ###   "
},
{
"##      ##",
"##  ##  ##",
"##  ##  ##",
"##  ##  ##",
"##  ##  ##",
"##  ##  ##",
" ###  ### "
},
{
"##     ##",
" ##   ## ",
"  ## ##  ",
"   ###   ",
"  ## ##  ",
" ##   ## ",
"##     ##"
},
{
"##    ##",
" ##  ## ",
"  ####  ",
"   ##   ",
"   ##   ",
"   ##   ",
"   ##   "
},
{
"########",
"     ## ",
"    ##  ",
"   ##   ",
"  ##    ",
" ##     ",
"########"
},
};

const char alphabet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

int main (){
    string a;
    getline(cin, a);
    vector<char> v;
    for(int i = 0; i < a.length(); i++){
        a[i] = toupper(a[i]);
        v.push_back(a[i]);
    }
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < a.length(); j++){
            if(v[j] == ' ') cout << "    ";
            else{
                for(int k = 0; k < 26; k++){
                    if(v[j] == alphabet[k]){
                        cout << upper[k][i] << " ";
                        break;
                    }

                }
            }
        }
        cout << endl;
    }

}








