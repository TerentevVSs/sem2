#include <iostream>

int main()
{
	int N;
	std::cin>>N;
	int m;
	std::cin>>m;
	while(m>N)
	{
		m=m-N;
	}
	int* mass=new int[m];
	for (int i; i<m; i++)
	{
		std::cin>>mass[i];
	}
	int a;
	int i=m;
	while (i<N)
	{
	std::cin>>a;
	std::cout<<a<<" ";
	i++;
	}
	i=0;
	while (i<m)
	{
		std::cout<<mass[i]<<" ";
		i++;
	}
	//std::cout<<mass[0];
	return 0;
}
