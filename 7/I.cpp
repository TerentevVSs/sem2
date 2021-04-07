#include <iostream>
#include <algorithm>
int main() {
	int N=10000;

	
	int bi = 0;
	int ci = 0;

	int* b = new int[N];
	for (int i = 0; i < N; i++)
	{
		b[i] = 0;
	}

	int* c = new int[N];
	for (int i = 0; i < N; i++)
	{
		c[i] = 0;
	}
	int x;
	while (std::cin >> x)
	{
		if (x % 2 == 0)
		{
			b[bi] = x;
			bi++;
		}
		else
		{
			c[ci] = x;
			ci++;
		}
	}

	std::sort(b, b + bi);
	std::sort(c, c + ci);
	for (int i = 0; i < bi; i++)
	{
		std::cout << b[i] << " ";
	}
	for (int i = 0; i < ci; i++)
	{
		std::cout << c[i] << " ";
	}
	return 0;
}