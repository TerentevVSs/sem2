#include <iostream>
int main()
{
	int N;
	std::cin >> N;
	int* a = new int[N];
	for (int i = 0; i < N; ++i)
	{
		std::cin >> a[i];
	}

	int m;
	std::cin >> m;
	int* b = new int[m];
	for (int i = 0; i < m; ++i)
	{
		b[i]=0;
	}

	int ind = 0;
	for (int i = 0; i < N; ++i)
	{
		while (m != 0 or a[i] != 0)
		{
			if ((ind + 1) % (i + 2) == 0 and b[(ind+1)%m]==0)
			{
				a[i]--;
				m--;
				b[(ind+1)%m] = 1;
			}
			ind++;
		}
		if (m == 0 and a[N - 1] == 0)
		{
			std::cout << "YES 0";
		}
		else if (a[N-1]==0 and m!=0)
		{
			int sum = 0;
			for (int k = 0; k < m; ++k)
			{
				if (b[k] != 0)
					sum++;
			}
			std::cout << "NO" << sum;
		}
		else if (m == 0)
		{
			int sum = 0;
			for (int k = 0; k < N; ++k)
			{
				sum += a[k];
			}
			std::cout << "YES" << sum;
		}
	}
	return 0;
}