#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI acos(-1)
#define pb push_back
#define sz(a) int((a).size())
#define fi first
#define se second
#define maximum INT_MAX
 
const int mod = (int) 1e9+7;
 
void solve(){
    int t; cin >> t;
    while (t--) {
        ll n,x; cin >> n >> x;
        vector<ll> a(n);
        for(ll i = 0 ; i < n ; i++) {
        	cin >> a[i];
        }
        ll l = 1 , r = maximum;
      	ll ans = maximum;
      	while(l <= r){
      		ll mid = (r-l)/2 + l;
      		ll res = 0;
      		for(ll &i:a){
      			if(mid > i){
      				res += (mid-i);
      			}
      		}
      		if(res <= x){
      			ans = mid;
      			l = mid+1;
      		}
      		else {
      			r = mid-1;
      		}
      	}
      	cout << ans << endl;
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