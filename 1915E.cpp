#include <iostream>
#include <vector>
#include <unordered_map>
#define ll long long
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        ll size;
        cin >> size;
 
        vector<ll> array(size + 1);
 
        for (ll i = 1; i <= size; i++) {
            cin >> array[i];
        }
 
        unordered_map<ll, ll> differences;
        ll sumOdd = 0, sumEven = 0;
        string result = "NO";
 
        for (ll i = 1; i <= size; i++) {
            if (i % 2 != 0) {
                sumOdd += array[i];
            } else {
                sumEven += array[i];
            }
 
            ll currentDifference = sumOdd - sumEven;
 
            if (currentDifference == 0 || differences.find(currentDifference) != differences.end()) {
                result = "YES";
                break;
            }
 
            differences[currentDifference] = i;
        }
 
        cout << result << endl;
    }
 
    return 0;
}