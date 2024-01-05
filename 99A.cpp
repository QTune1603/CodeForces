#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

// 46 7262
// 35

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    string res1,res2,res3,res4;
    //res1 : ki tu check 9
    //res2 : chuoi truoc dau cham
    //res3 : chuoi sau dau cham
    //res4 : ki tu sau dau cham de tru di 5
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == '.'){
            res1 = s[i-1];
            res2 = s.substr(0,i);
            res3 = s.substr(i+1);
            res4 = s[i+1];
        }
    }
    int a = stoi(res4) - 5;
    string ans1;
    if(res2.length() == 1){
        ans1 = res2;
    }
    else ans1 = res2.substr(res2.length()-2);
    int b = stoi(ans1); // ki tu cuoi cung cua res2
    if(res1 != "9"){
        if(a >= 0){
            if(res2.length() == 1){
                cout << b+1;
            }
            else cout << res2.substr(0,res2.length()-2) << b+1;
        }
        else {
            cout << res2;
        }
    }
    else {
        cout << "GOTO Vasilisa.";
    }
}
