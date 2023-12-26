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
        int n,k; cin >> n >> k;
        string s;
        cin >> s;
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
        	if(s[i] == 'B'){
        		cnt++;
        		i += k-1;
        	}
        }
        cout << cnt << endl;
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