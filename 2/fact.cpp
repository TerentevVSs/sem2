#include <iostream>

long long fact1(long long n)
{
	long long s = 1;
	for (int i = 1; i <= n; i++)
	{
		s *= i;
	}

	return s;
}

long long fact2(long long n)
{
	long long s;
	if (n != 1)
		return (n * fact2(n - 1));

	else
		return 1;
	return s;
}

int main()
{
	long long s;
	s = fact1(5);
	std::cout << s << std::endl;
	s = fact2(5);
	std::cout << s << std::endl;
	int a;
	std::cin >> a;
	return 0;
}
