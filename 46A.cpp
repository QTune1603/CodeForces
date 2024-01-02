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

    unsigned int n; cin >> n;
    int res = 2, k = 2;
    for(int i = 0 ; i < n-1 ; ){
        while(res <= n){
            cout << res << " ";
            res += k;
            k++;
            i++;
        }
        res = res - n;
    }
}

