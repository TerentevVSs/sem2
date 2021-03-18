#include <iostream>

int main()
{
	int N;
	std::cin>>N;
	int* mass=new int[N];
	for (int i; i<N; i++)
	{
		std::cin>>mass[i];
	}
	int i=N-1;
	while (i>-1)
	{
	std::cout<<mass[i]<<" ";
	i--;
	}
	return 0;
}

