#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
long long gcd(long long a, long long b){
    if(b == 0) return a;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 
    int t; cin >> t;
    while(t--){
        long long a,b; cin >> a >> b;
        if(lcm(a,b) == b){
            cout << lcm(a,b)*(b/a) << endl;
        }
        else cout << lcm(a,b) << endl;
    }
 
}