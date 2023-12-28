#include <iostream>
#include <vector>
using namespace std;
 
char findMissingCharacter(const std::vector<std::string>& latinSquare) {
    for (char ch = 'A'; ch <= 'C'; ++ch) {
        for (int i = 0; i < 3; ++i) {
            int count = 0;
            for (int j = 0; j < 3; ++j) {
                if (latinSquare[i][j] == ch) {
                    ++count;
                }
            }
            if (count == 0) {
                return ch;
            }
        }
        for (int j = 0; j < 3; ++j) {
            int count = 0;
            for (int i = 0; i < 3; ++i) {
                if (latinSquare[i][j] == ch) {
                    ++count;
                }
            }
            if (count == 0) {
                return ch;
            }
        }
    }
    return '\0';
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        vector<string> latinSquare(3);
        for (int i = 0; i < 3; ++i) {
            cin >> latinSquare[i];
        }
 
        char missingCharacter = findMissingCharacter(latinSquare);
        cout << missingCharacter << endl;
    }
 
    return 0;
}