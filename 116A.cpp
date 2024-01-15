#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    int res = 0, sum = 0;
    while(n--){
        int a,b; cin >> a >> b;
        sum -= a; sum += b;
        res = max(res,sum);
    }
    cout << res;

    return 0;
}
