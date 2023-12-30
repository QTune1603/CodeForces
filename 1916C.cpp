#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long sum = 0;
        long long le = 0, chan = 0;
        long long k ;
        for (long long i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
            if(a[i] % 2 != 0){
                chan++;
            }
            else le++;
            k = chan/3;
            if(le == 0 && chan == 1) k = 0;
            else if(chan % 3 == 1) {
                k = (chan+2)/3 ;
            }
            cout << sum - k << " ";
        }
        cout << endl;
 
    }
 
    return 0;
}