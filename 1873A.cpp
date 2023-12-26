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
        string cards;
        cin >> cards;
        if ((cards[0] == 'a' && cards[1] == 'b') || (cards[0] == 'b' && cards[1] == 'a')|| (cards[0] == 'a' && cards[2] == 'b') || cards[1] == 'b') {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
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