#include <ostream>
#include <bits/stdc++.h>

int main() {

    int n;
    std::cin >> n;

    vector<pair<int, int>> a(n);
    set<pair<int, int>> k;

    for (auto &d : a)
        std::cin >> d.first >> d.second;

    for (auto d: a)
        k.insert(d);

    for (int i = 0; i + 1 < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            pair<int, int> data;
            data.first = a[i].first + a[j].first;
            data.second = a[i].second + a[j].second;
            if (k.count(ans))
            {
                std::cout << "YES";
                return 0;

            }
        }
    }
    std::cout << "NO";
}