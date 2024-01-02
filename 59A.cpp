#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    int cnt1 = 0, cnt2 = 0;
    for(char x:s){
        if(x >= 'a' && x <= 'z'){
            cnt1++;
        }
        else cnt2++;
    }
    if(cnt1 >= cnt2){
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        cout << s;
    }
    else {
        transform(s.begin(),s.end(),s.begin(), ::toupper);
        cout << s;
    }

}
