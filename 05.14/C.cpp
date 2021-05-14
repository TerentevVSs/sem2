#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

struct My_Struct {
    string name;
    string phone;
    long int money;
};

bool comparator (My_Struct a, My_Struct b) {
    if (a.money != b.money){
        return a.money < b.money;
    }
    else {
        if (a.name != b.name){
            return a.name < b.name;
        }
        else{
            return a.phone < b.phone;
        }
    }
}

int main () {
    int N;
    cin >> N;
    vector<My_Struct> data(N);
    for (int i = 0; i < N; i++){
        cin >> data[i].name;
        cin >> data[i].phone;
        cin >> data[i].money;
    }

    sort(data.begin(), data.end(), comparator);

    bool un_found = true;
    int num = 0;
    while(un_found&&(num<N)){
        if(data[num].money>0){
            un_found = false;
        }
        else{
            num++;
        }
    }

    for (int i = 0; i < min(num, 10); i++){
        cout << data[i].name << " ";
        cout << data[i].phone << " ";
        cout << data[i].money << endl;
    }
return 0;}

