#include <bits/stdc++.h>
using namespace std;
 
int findUniqueValue(int a, int b, int c) {
    // XOR of three values where two are equal cancels out the common bits, leaving the unique value
    return a ^ b ^ c;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        int a,b,c; 
        cin >> a >> b >> c;
        cout << findUniqueValue(a, b, c) << endl;
    }