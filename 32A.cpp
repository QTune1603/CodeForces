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

    ll n,d; cin >> n >> d;
    vector<ll> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            if(abs(a[i]-a[j]) <= d){
                cnt+=2;
            }
        }
    }
    cout << cnt;
}
