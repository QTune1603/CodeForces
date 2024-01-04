#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t ; cin >> t;
    cin.ignore();
    while(t-- > 0){
        string s;
        getline(cin,s);
        string res = s.substr(s.length()-1);
        int cnt = 0;
        for(int i = 0 ; i < s.length()-1 ; i++){
            cnt++;
        }
        if(cnt >= 10){
            cout << s[0] << cnt-1 << res;
        }
        else cout << s;
        cout << endl;
    }
}


