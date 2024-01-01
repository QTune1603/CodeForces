#include <iostream>
#include <string>
#include <cmath>
#include<vector>
#include <bits/stdc++.h>
#define ll long long

using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string a,b; cin >> a >> b;
    reverse(b.begin(), b.end());
    bool ok = true;
    for(int i = 0 ; i < a.length() ; i++){
        if(a[i] != b[i]){
            ok = false;
            break;
        }
    }
    if(ok) cout << "YES";
    else cout << "NO";
}
