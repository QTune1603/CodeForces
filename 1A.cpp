#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    unsigned long long m,n,a;
    cin >> n >> m >> a;
    cout << (unsigned long long)(ceil((double)m/a) * ceil((double)n/a));

    return 0;
}
