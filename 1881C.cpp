#include<bits/stdc++.h>
#define pb push_back
 
using namespace std;
 
//95 26 29  //1
 
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b,a%b);
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<string> a(n);
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        int res = 0;
        vector<char> s;
        for(int i = 0 ; i < n/2 ; i++){
            for(int j = 0 ; j < n/2 ; j++){
                s.clear();
                s.pb(a[i][j]);
                s.pb(a[j][n-i-1]);
                s.pb(a[n-j-1][i]);
                s.pb(a[n-i-1][n-j-1]);
 
                sort(s.begin(),s.end());
 
                for(auto c:s){
                    res += s.back()-c;
                }
            }
        }
        cout << res << endl;
    }
 
    return 0;
}
