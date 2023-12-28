#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
 
bool isPerfectSquare(long long n) {
    long long x = sqrt(n);
    if(x * x == n) return true;
    return false; 
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        vector<long long> counts(n);
        for (int i = 0; i < n; ++i) {
            cin >> counts[i];
        }
        long long total = 0;
        for (int i = 0; i < n; ++i) {
            total += counts[i];
        }
        if (isPerfectSquare(total)) {
                cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
 
    return 0;
}