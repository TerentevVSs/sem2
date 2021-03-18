#include <iostream>

int main()
{
	int N;
	std::cin>>N;
	int* mass1=new int[N];
	int* mass2=new int[N];
	for (int i; i<N; i++)
	{
		std::cin>>mass1[i];
	}
	mass2[0]=(mass1[0]+mass1[1]+mass1[N-1])/3;
	mass2[N-1]=(mass1[0]+mass1[N-2]+mass1[N-1])/3;
	int i=1;
	while (i<N-1)
	{
	mass2[i]=(mass1[i-1]+mass1[i]+mass1[i+1])/3;
	i++;
	}
	i=0;
	while(i<N)
	{
		std::cout<<mass2[i]<<" ";
		i++;
	}
	delete[] mass1;
	return 0;
}
