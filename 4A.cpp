#include <iostream>
#include <string>
#include <cmath>
 
using namespace std;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 
    int w; cin >> w;
    if(w % 2 == 0 && w > 2){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}
