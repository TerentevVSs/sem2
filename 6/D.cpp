#include <iostream>
#include <algorithm>
int main()
{
	int N;
	std::cin>>N;
	int* mass=new int[N];
	for (int i; i<N; i++)
	{
		std::cin>>mass[i];
	}
	std::sort(mass, mass+N);
	for (int i; i<N; i++)
	{
		std::cout<<mass[i]<<" ";
	}
	delete[] mass;
	return 0;
}
