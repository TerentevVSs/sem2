#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long calc(string b) {
    vector<vector<long long>> a(b.size(), vector<long long>(4, 0));
    const string uddu = "uddu";
    a[0][0] = b[0] == uddu[0];
    for (int i = 1; i < b.size(); i++) {
        a[i][0] = a[i - 1][0] + int(b[i] == "uddu"[0]);
    }
    for (int j = 1; j < 4; j++) {
        for (int i = j; i < b.size(); i++) {
            a[i][j] = a[i - 1][j] + (b[i] == "uddu"[j] ? a[i - 1][j - 1] : 0);
        }
    }
    return a.back().back();
}

int main() {
    string s;
    cin >> s;
    cout << calc(s);
}
