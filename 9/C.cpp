#include <iostream>

int main()
{
	int b;
	std::cin>>b;
	if (b!=0)
		main();
	std::cout<<b<<" ";
	return 0;
}
