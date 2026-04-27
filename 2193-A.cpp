#include<bits/stdc++.h>
using namespace std;


int main(){
	int t; cin >> t;
	while(t--){
		int n,s,x; cin >> n >> s >> x;
		int a[105];
		int sum = 0;
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
			sum += a[i];	
		} 
		if(s-sum >= 0 && ( s-sum) % x == 0){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
}
