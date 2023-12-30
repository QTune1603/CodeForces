#include <iostream>
#include <vector>
 
using namespace std;
using ll = long long;
 
ll calculateGCD(ll a, ll b) {
    return (b == 0) ? a : calculateGCD(b, a % b);
}
 
ll calculateLCM(ll a, ll b) {
    return (a / calculateGCD(a, b)) * b;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<int> numbers(n);
        ll product = 1;
 
        bool isOk = false;
 
        for (int i = 0; i < n; i++) {
            cin >> numbers[i];
            product *= numbers[i];
 
            if (2023 % product != 0) {
                isOk = true;
            }
        }
 
        if (isOk) {
            cout << "NO" << endl;
            continue;
        } 
        else {
            cout << "YES" << endl;
            cout << 2023 / product;
 
            for (int i = 0; i < k - 1; i++) {
                cout << " " << 1;
            }
 
            cout << endl;
        }
    }
 
    return 0;
}