#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

// 4744000695826
// yes

bool checkLucky(string s){
    int cnt = 0;
    for(char i:s){
        if(i == '4' || i == '7') {
            cnt++;
        }
    }
    if(cnt == 4 || cnt == 7) return true;
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    if(s.length() <= 1){
        cout << "NO";
        return 0;
    }
    if(checkLucky(s)){
        cout << "YES";
    }
    else cout << "NO";
}
