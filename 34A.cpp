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
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    int idx1 = 1e2 , idx2 = 1e2, res = 1e6;
    int ans = abs(a[n-1] - a[0]);
    for(int i = 0 ; i < n-1 ; i++){
        if(abs(a[i] - a[i+1]) < res){
            res = abs(a[i] - a[i+1]);
            idx1 = i+1;
            idx2 = i+2;
        }
        else if(res > ans){
            idx1 = n;
            idx2 = 1;
        }
    }
    cout << idx1 << " " << idx2;
}
