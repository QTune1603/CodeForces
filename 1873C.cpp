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
        char s[11][11];
        for(int i = 1 ; i <= 10 ; i++){
        	for(int j = 1 ; j <= 10 ; j++){
        		cin >> s[i][j];
        	}
        }
        int sum = 0;
        for(int i = 1 ; i <= 10 ; i++){
        	for(int j = 1 ; j <= 10 ; j++){
        		if(s[i][j] == 'X'){
        			if(i <= 5){
        				if(j <= 5){
        					sum += min(i,j);
        				}
        				else {
        					sum += min(i,11-j);
        				}
        			}
        			else {
        				if(j <= 5){
        					sum += min(11-i,j);
        				}
        				else {
        					sum += min(11-i,11-j);
        				}
        			}
        		}
        	}
        }
        cout << sum << endl;
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