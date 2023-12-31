#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    unsigned long long w; cin >> w;
    if(w % 2 != 0){
        cout << "NO";
        return;
    }
    int cnt = 0;
    for(int i = 2; i <= w ; i+=2){
        for(int j = w ; j >= 2 ; j-=2){
            if(i + j == w){
                cnt = 1;
                break;
            }
        }
    }
    if(cnt == 1) {
        cout << "YES";
    }
}
