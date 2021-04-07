#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int number(int x, int num) {
	return (int)(x / pow(10, num)) % 10;
}

void print(vector<vector<int>> m) {
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < m[i].size(); j++)
			cout << m[i][j] << ' ';
	}
	cout << endl;
}

int main() {
	vector<int> a;
	int b;

	while (cin >> b)
		a.push_back(b);

	vector<vector<int>> m(2);

	for (size_t i = 0; i < a.size(); i++)
	{
		if (number(a[i], 0) == 0)
			m[0].push_back(a[i]);
		else
			m[1].push_back(a[i]);
	}
	print(m);
	int k = 0;
	while (!m[1].empty())
	{
		bool c = false;
		k++;
		vector<vector<int>> b(2);
		for (size_t i = 0; i < 2; i++)
		{
			for (size_t j = 0; j < m[i].size(); j++)
			{
				if (number(m[i][j], k) == 0)
					b[0].push_back(m[i][j]);
				else
					b[1].push_back(m[i][j]);
				if (m[i][j] >= pow(10, k))
					c = true;
			}
		}
		m = b;
		if (!c)
			continue;
		print(m);
	}

	return 0;
}