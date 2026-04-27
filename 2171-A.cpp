#include<bits/stdc++.h>
using namespace std;


int main(){
	int t; cin >> t;
	while(t--){
		int n ; cin >> n;
		int cnt = 0;
		if(n % 2 != 0){
			cout << 0 << endl;
		}
		else{
			int last = n/2;
			if(last % 2 == 0){
				int res = last / 2 + 1;
				cout << res << endl;
			}
			else {
				int res = (last - 1)/2 + 1;
				cout << res << endl;
			}
		}
	}
}
