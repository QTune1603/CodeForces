#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// 46 7262
// 35

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,m; cin >> n >> m;
    int res = ((n+1)*n)/2;
    if(res == m){
        cout << "0";
    }
    else if(res < m){
        int ans = m - res;
        int cnt = 1;
        while(ans >= cnt){
            if(cnt == n){
                ans -= cnt;
                cnt = 1;
                continue;
            }
            ans -= cnt;
            cnt++;
        }
        cout << ans;
    }
    else {
        int sum = 0;
        for(int i = 1 ; i <= n ; i++){
            sum += i;
            if(sum > m){
                sum -= i;
                break;
            }
        }
        cout << m - sum;
    }
}
