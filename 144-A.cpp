#include<bits/stdc++.h>
using namespace std;


int main(){
	int n; cin >> n;
	int a[101];
	int minimum = INT_MAX, maximum = INT_MIN;
	int minIndex = 0, maxIndex = 0;
	for(int i = 0 ; i < n ; i++) {
		cin >> a[i];
		if(a[i] > maximum) {
			maximum = a[i];
			maxIndex = i;
		}
		if(a[i] <= minimum){
			minimum = a[i];
			minIndex = i;
		}
	}
	int movesMax = maxIndex;
	int movesMin = n-1-minIndex;
	int res = movesMax + movesMin;
	if(minIndex < maxIndex) res--;
	
	cout << res;
}
