#include <iostream>

void f()
{
	int b;
	while(std::cin)
	{
		std::cin>>b;
		if (b!=0)
			f();
		
	}
	std::cout<<b<<" ";
}
int main()
{
	f();
	return 0;
}
