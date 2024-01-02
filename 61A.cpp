#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string a,b;
    getline(cin,a); getline(cin,b);
    string res = "";
    for(int i = 0 ; i < a.length() ; i++){
        if(a[i] == '1' && b[i] =='0' || a[i] =='0' && b[i] == '1'){
            res.push_back('1');
        }
        else if(a[i] == '0' && b[i] == '0'){
            res.push_back('0');
        }
        else if(a[i] == '1' && b[i] == '1'){
            res += '0';
        }
    }
    cout << res;

}
