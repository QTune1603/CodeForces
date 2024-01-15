#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

//95 26 29  //1

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b,a%b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int a,b,n; cin >> a >> b >> n;
    int ok = 0;;
    while(n > 0){
        n -= gcd(a,n);
        if(n < gcd(a,n)){
            ok = 0;
            break;
        }
        n -= gcd(b,n);
        if(n < gcd(b,n)){
            ok = 1;
            break;
        }
    }
    cout << ok;
    return 0;
}
