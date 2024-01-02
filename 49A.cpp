#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s; getline(cin,s);
    string res = "";
    for(int i = s.length() - 1 ; i >= 0 ; i--){
        if(s[i] == ' ' || s[i] == '?'){
            continue;
        }
        else {
            res = s[i];
            break;
        }
    }
    transform(res.begin() , res.end(), res.begin(), ::tolower);
    if(!(res.find('a') == string::npos && res.find('e') == string::npos && res.find('i') == string::npos && res.find('o') == string::npos && res.find('u') == string::npos && res.find('y') == string::npos)){
        cout << "YES";
    }
    else cout << "NO";
}
