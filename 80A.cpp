#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool check(int x){
    for(int i = 2 ; i <= sqrt(x) ; i++){
        if(x % i == 0) return false;
    }
    return x > 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,m; cin >> n >> m;
    bool ok = true;
    for(int i = n+1 ; i < m ; i++){
        if(check(i)){
            ok = false;
            break;
        }
    }
    if(ok && check(n) && check(m)){
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}
