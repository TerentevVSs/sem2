#include <iostream>
#include <cmath>
int main()
{
	int n;
	std::cin>>n;
	float s=0;
	float a=0;
	for (int i=0; i<n; i++)
	{
		std::cin>>a;
		s+=a;
	}
	s=s/n;
	std::cout<<round(s*10000000000)/10000000000;
	return 0;
}
