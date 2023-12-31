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

    int a,b; cin >> a >> b;
    int x = max(a,b);
    int y = 6-x+1;
    int z = gcd(y,6);

    if(y == 0) {
        cout << "0/1";
    }
    if(x == 1){
        cout << "1/1";
    }
    else {
        cout << y/z << "/" << 6/z;
    }
}
