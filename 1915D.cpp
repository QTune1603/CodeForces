#include <iostream>
#include <map>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        string result;
        map<char, int> vowelMap;
        vowelMap['a'] = 1;
        vowelMap['e'] = 1;
        vowelMap['i'] = 1;
        vowelMap['o'] = 1;
        vowelMap['u'] = 1;
 
        for (int i = 0; i < n; ++i) {
            char currentChar = s[i];
 
            if (vowelMap[currentChar]) {
                result.push_back(currentChar);
                int j = i + 1;
                if (j < n - 1) {
                    if (!vowelMap[s[j]] && !vowelMap[s[j + 1]]) {
                        result.push_back(s[j]);
                        result.push_back('.');
                        i = j;
                    } else {
                        result.push_back('.');
                    }
                }
            } else {
                result.push_back(currentChar);
            }
        }
 
        cout << result << endl;
    }
 
    return 0;
}