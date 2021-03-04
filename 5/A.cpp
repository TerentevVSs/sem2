#include <iostream>
#include <stack>
#include <cmath>
int main()
{
	std::stack <int> s;
	int a;
	std::cin>>a;
	while (a!=0)
	{
		
		if (a>0)
			{
				s.push(a);
			}
		else
		{
			if (s.size()!=0)
			{
				int b=s.top();
				if (std::abs(a) < std::abs(b))
					{
						int c=a+b;
						s.pop();
						s.push(c);
					}
				else
				{
					s.pop();
				}
			}
		}
		std::cin>>a;
	}
	
	if (s.empty())
	{
		std::cout<<0<<" "<<-1;
	}
	else
	{
		int max=s.top();
		int len=s.size();
		std::cout<<len<<" "<<max;
	}
	return 0;
}
