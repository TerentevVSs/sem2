#include <iostream>
int main()
{
	int N;
	int i = 0;
	int j = 0;
	int a;
	int b;
	int c;
	std::cin >> N;
	while (j < N)
	{
		std::cin >> a;
		if (a % 4 == 0 or a % 7 == 0 or a % 9 == 0)
		{
			b = 0;
			c = a / 1000;
			if (a % 4 == 0)
			{
				if (c == 4 or c == 5)
				{
					b = b;
				}
				else
				{
					b = 1;
				}
			}
			if (a % 7 == 0)
			{
				if (c == 7 or c == 1)
				{
					b = b;
				}
				else
				{
					b = 1;
				}
			}
			if (a % 9 == 0)
			{
				if (c == 9 or c == 8)
				{
					b = b;
				}
				else
				{
					b = 1;
				}
			}
			if (b > 0)
			{
				std::cout << a <<std::endl;
				i++;
			}
		}
		j++;
	}
	if (i == 0)
	{
		std::cout << 0;
	}
	return 0;
}