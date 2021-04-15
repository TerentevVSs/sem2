#include <iostream>

int main()
{
	int s=1;
	int n;
	std::cin>>n;
	for (int i=1; i<(n+1); i++)
	{
		s*=i;
	}
	std::cout<<s;
	return 0;
}
