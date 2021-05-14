#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

struct person {
    std::string name;
    std::string number;
    long int money;
};

bool change(person a, person b) {
    if (a.money != b.money) return a.money > b.money;
    else {
        if (a.name != b.name) return a.name < b.name;
        else return a.number < b.number;
    }
}

int main() {
    int n, i;
    std::cin >> n;
    std::vector<person> data(n);
    for (i = 0; i < n; ++i)
        std::cin >> data[i].name >> data[i].number >> data[i].money;
    sort(data.begin(), data.end(), change);
    for (i = std::min(n, 100)-1; i >= 0; --i)
        if (data[i].money < 0)
        {
            std::cout << data[i].name << " " << data[i].number << " " << data[i].money << std::endl;
        }
    return 0;
}
