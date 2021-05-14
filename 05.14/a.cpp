#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        ll f, k;
        cin >> f >> k;
        arr[i] = 100000000 * f + k;
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        int a = i + 1;
        int b = i + 2;
        while (a < n && b < n)
        {
            if (arr[i] + arr[a] == arr[b])
            {
                cout << "YES";
                return 0;
            }
            if (arr[i] + arr[a] < arr[b] && a < b - 1)
            {
                a++;
            }
            else
            {
                b++;
            }
        }
    }

    cout << "NO";
    return 0;
}
