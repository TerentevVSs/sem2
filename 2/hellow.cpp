/*
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
*/
#include <iostream>

long long fact1(long long n)
{
    long long s = 1;
    for (int i=1; i<=n; i++)
    {
        s*=i;
    }

    return s;
}

long long fact2(long long n)
{	
	long long s;
	if (n!=1)
	return (n * fact2(n-1));
	
	else
		return 1;
	return s;
}

long long fib1(long long n)
{
	long long a=1;
	long long b=1;
	long long c;
	for(int i=3;i<=n;i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}

int fib2(long long n)
{
	if (n<3)
		return 1;
	else
	{
		long long a;
		long long b;
		long long c;
		a = fib2(n-1);
		b = fib2(n-2);
		c = a + b;
		return c;
	}
}
int fibs[100000] = {0};
int fib3(int n)
{
	if (n<=1)
		return n;
	if (fibs[n]==0)
		fibs[n] = fib3(n-1) + fib3(n-2);
	return fibs[n];
}
int main()
{
    long long s = fact1(5);
    std::cout << s << std:: endl;
    s = fact2(5);
    std::cout << s << std:: endl;
    s = fib1(5);
    std::cout << s << std:: endl;
    s = fib2(5);
    std::cout << s << std:: endl;
    s = fib3(10);
    std::cout << s << std:: endl;
    int a;
    std::cin >> a;
    return 0;
}
