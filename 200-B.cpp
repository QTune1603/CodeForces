#include<bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    vector<int> a(n);
    int sum = 0;
    for(int i = 0 ; i < n ; i++) {
    	cin >> a[i];
    	sum += a[i];
	}
	double res = (double)sum / n;
	cout << fixed << setprecision(12) << res;
}
