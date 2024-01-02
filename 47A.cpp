#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int sum = 0;
    bool ok = false;
    for(int i = 1 ; sum <= n ; i++){
        sum += i;
        if(sum == n){
            ok = true;
            break;
        }
    }
    if(ok) cout << "YES";
    else cout << "NO";

    return 0;
}
