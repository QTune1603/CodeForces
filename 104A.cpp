#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

// hearts, diamonds, clubs and spades : co , ro ,tep , bich
// co 1 con Q bich = 10 diem

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int a = n-10;

    if(n <= 10 ){
        cout << "0";
        return 0;
    }

    if(a == 1){
        cout << "4";
    }
    if(a >= 2 && a <= 9){
        cout << "4";
    }
    if(a == 10){
        cout << "15";
    }
    if(a > 10){
        if(n == 21){
            cout << "4";
        }
        else {
            cout << "0";
        }
    }
}
