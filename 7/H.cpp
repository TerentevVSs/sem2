#include <iostream>
#include <vector>



int main() {
	int N;
	std::cin >> N;

	std::vector<int> a;
	for (int i = 0; i < N; i++)
	{
		a.push_back(NULL);
		std::cin >> a[i];
	}

	int s = N + 1;
	for (int i = 0; i < N - 1; i++)
	{
		if (a[i] > 0)
		{
			continue;
		}
		int d = 0;
		if (a[i] > 0)
		{
			continue;
		}
		int dist = N + 1;;
		for (int j = i + 1; j < N; j++)
		{
			d++;
			if (-a[j] == a[i])
			{
				dist = d;
				break;
			}
			if (a[j] < 0)
			{
				continue;
			}
		}
		if (dist < s)
		{
			s = d;
		}
	}
	if (s == N + 1)
	{
		std::cout << 0;
	}
	else
	{
		std::cout << s;
	}
	return 0;
}