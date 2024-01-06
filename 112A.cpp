#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

// 4744000695826
// yes


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    transform(s1.begin(),s1.end(),s1.begin(), ::toupper);
    transform(s2.begin(),s2.end(),s2.begin(), ::toupper);
    cout << s1.compare(s2);
}
