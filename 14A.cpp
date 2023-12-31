#include <iostream>
#include <string>
#include <cmath>
#include<vector>
#include <bits/stdc++.h>

using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<vector<char>> a(n, vector<char>(m, '0'));
    int startRow = n, endRow = 0, startCol = m, endCol = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char temp;
            cin >> temp;
            a[i][j] = temp;

            if (temp == '*') {
                startRow = min(startRow, i);
                endRow = max(endRow, i);
                startCol = min(startCol, j);
                endCol = max(endCol, j);
            }
        }
    }

    for (int i = startRow; i <= endRow; ++i) {
        for (int j = startCol; j <= endCol; ++j) {
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}
