#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;

    string codeforces = "codeforces";
    bool found = false;

    for (int i = 0; i < codeforces.length(); ++i) {
        if (c == codeforces[i]) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}