#include <iostream>
int main()
{
	int N;
	std::cin >> N;
	float r;
	float h;
	float ro;
	float mass = 0;;
	int num = 0;
	for (int i = 0; i < N; ++i)
	{
		std::cin >> r >> h >> ro;
		int massi = r * r * h * ro;
		if (massi > mass)
		{
			num = i;
			mass = massi;
		}
	}
	std::cout << num;
	return 0;
}