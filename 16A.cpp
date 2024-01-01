#include <iostream>
#include <string>
#include <cmath>
#include<vector>
#include <bits/stdc++.h>

using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n,m; cin >> n >> m;
    char a[100][100];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }
    bool ok = true;
    for(int i = n-1 ; i >= 0 ; i--){
        for(int j = m-1 ; j > 0 ; j--){
            if(a[i][j] != a[i][j-1] || a[i][j] == a[i-1][j] ){
                ok = false;
                break;
            }
        }
    }
    if(ok)cout << "YES";
    else cout << "NO";
}
