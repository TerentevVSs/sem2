#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

struct person {
    string name;
    string number;
    long int money;
};

bool change (person a, person b) {
    if (a.money != b.money) return a.money > b.money;
    else {
        if (a.name != b.name) return a.name < b.name;
        else return a.number < b.number;
    }
}

int main () {
    int n, i;
    std::cin >> n;
    vector<person> data(n);
    for (i = 0; i < n; ++i)
        std::cin >> data[i].name >> data[i].number >> data[i].money;
    sort(data.begin(), data.end(), change);
    for (i = 0; i < min(n, 10); ++i)
        cout << data[i].name << " " << data[i].number << " " << data[i].money << std::endl;
    return 0;
}
