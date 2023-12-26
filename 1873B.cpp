#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI acos(-1)
#define pb push_back
#define sz(a) int((a).size())
#define fi first
#define se second
 
const int mod = (int) 1e9+7;
 
void solve(){
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        ll sum1 = 1, sum2 = 1;
        for(int i = 0 ; i < n ; i++){
        	cin >> a[i];
        }
        sort(a,a+n);
        a[0]++;
        for(int i = 0 ; i < n ; i++){
        	sum1 *= a[i];
        }
        a[0]--;
        a[n-1]++;
        for(int i = 0 ; i < n ; i++){
        	sum2 *= a[i];
        }
        a[n-1]--;
        cout << max(sum1,sum2) << endl;
        
    }
}	
 
int main(){
	ios_base::sync_with_stdio (false);
	cin.tie (NULL);
	cout.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif
 
	solve();
		
}