#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b,a%b);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    char a[9];
    for(int i = 0 ; i < 9 ; i++){
        cin >> a[i];
    }
    int l = 0, r = 8;
    bool ok = true;
    while(l <= r){
        if(a[l] != a[r]){
            ok = false;
            break;
        }
        l++; r--;
    }
    if(ok){
        cout <<"YES" << endl;
    }
    else cout << "NO" << endl;
}
