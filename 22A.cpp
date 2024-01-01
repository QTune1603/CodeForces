#include <iostream>
#include <string>
#include <cmath>
#include<vector>
#include <bits/stdc++.h>

using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    set<int> se;
    for(int i = 0 ; i < n ; i++) {
        int x; cin >> x;
        se.insert(x);
    }
    if(se.size() == 1) cout << "NO";
    else {
        int res1 = 1e2, res2 = 1e2;
        for(int x:se){
            if(x < res1){
                res2 = res1;
                res1 = x;
            }
            else if(x < res2){
                res2 = x;
            }
        }
        cout << res2;
    }
}
