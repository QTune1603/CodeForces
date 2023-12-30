#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string convert(int n) {
    string s = "";
    const string z = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while (n > 0) {
        if (n % 26 == 0) {
            n = n / 26 - 1;
            s += 'Z';
        } else {
            int k = n % 26;
            n = n / 26;
            s += z[k - 1];
        }
    }

    return string(s.rbegin(), s.rend());
}

int sconvert(const string& s) {
    const string z = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i = 0;

    for (char l : s) {
        int k = z.find(l) + 1;
        i = i * 26 + k;
    }

    return i;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        string s;
        cin >> s;
        int n = s.length();
        string ans = "";
        bool digits = false;

        if (s.find('R') != string::npos && s.find('C') != string::npos) {
            int m = s.find('R');
            int q = s.find('C');
            int k = m + 1;

            while (m < q) {
                digits = isdigit(s[m]);
                ++m;
            }
        }

        if (s.find('R') != string::npos && s.find('C') != string::npos && digits) {
            int rin = s.find('R');
            int cin = s.find('C');
            int row = stoi(s.substr(rin + 1, cin - rin - 1));
            int col = stoi(s.substr(cin + 1));
            ans = convert(col) + to_string(row);
        } else {
            string col = "";
            int j = 0;

            while (j < n && !isdigit(s[j])) {
                col += s[j];
                ++j;
            }

            int colNum = sconvert(col);
            int row = stoi(s.substr(j));
            ans = "R" + to_string(row) + "C" + to_string(colNum);
        }

        cout << ans << endl;
    }

    return 0;
}
