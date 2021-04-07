#include <iostream>
#include <iomanip>
#include <cmath>
void print(double x)
{
	int x1 = int(x) / 1000;
	int x2 = int(x) % 1000;
	int a = x2 / 100;
	int b = (x2 / 10) % 10;
	int c = x2 % 10;
	if (a + b + c == 0)
	{
		std::cout << x1 << ".0";
	}
	else if (b + c == 0)
	{
		std::cout << x1 << "." << a;
	}
	else if (c == 0)
	{
		std::cout << x1 << "." << a << b;
	}
	else
	{
		std::cout << x1 << "." << a << b << c;
	}
}


int main()
{
	double count = 0;
	double i;
	double xm = 0;
	double x2m = 0;
	std::cin >> i;
	while (i)
	{
		xm += i;
		x2m += i * i;
		count++;
		std::cin >> i;
	}
	double M = xm / count;
	double D = x2m / count - M * M;
	M = round(M * 1000);
	D = round(D * 1000);
	print(M);
	std::cout << " ";
	print(D);
	return 0;
}