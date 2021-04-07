#include <iostream>

using namespace std;

double eps = 1e-6;
def f(double x) {
	return x + 0.1;
}
double find_root(double f(double), double a, double b, double tol = eps) {
	double mid = (b + a) / 2;
	if (f(mid) < tol and f(mid) > -tol)
	{
		return mid;
	}
	if (f(a) < 0)
	{
		if (f(mid) > 0)
		{
			return find_root(f, a, mid, tol);
		}
		if (f(mid) < 0)
		{
			return find_root(f, mid, b, tol);
		}
	}
	if (f(a) > 0)
	{
		if (f(mid) < 0)
		{
			return find_root(f, a, mid, tol);
		}
		if (f(mid) > 0)
		{
			return find_root(f, mid, b, tol);
		}
	}
}


int main() {
	double (*f1)(double) = f;
	float a, b, tol;
	std::cin >> a;
	std::cin >> b;
	std::cin >> tol;
	float x0;
	std::cin >> x0;
	std::cout << find_root(f1, a, b);
	return 0;
}