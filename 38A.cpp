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

    int n; cin >> n;
    int c[n];
    for(int i = 1 ; i <= n-1 ; i++) cin >> c[i];
    int a,b; cin >> a >> b;

    int res = 0;
    for(int i = a ; i < b ; i++){
        res += c[i];
    }
    cout << res;
}
