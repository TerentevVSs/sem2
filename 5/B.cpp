#include <iostream>
#include <stack>
#include <string>
int main()
{
	std::stack <int> s;
	std::string st;
	while (std::cin >> st)
	{
		if (st=="*")
		{
			int b = s.top();
			s.pop();
			int a = s.top();
			s.pop();
			int c=a*b;
			s.push(c);
		}
		else if (st=="/")
		{
			int b = s.top();
			s.pop();
			int a = s.top();
			s.pop();
			int c=a/b;
			s.push(c);
		}
		else if (st=="+")
		{
			int b = s.top();
			s.pop();
			int a = s.top();
			s.pop();
			int c=a+b;
			s.push(c);
		}
		else if (st=="-")
		{
			int b = s.top();
			s.pop();
			int a = s.top();
			s.pop();
			int c=a-b;
			s.push(c);
		}
		else
		{
			int b = std::stoi(st);
			s.push(b);
		}
	}
	std::cout<<s.top();
	return 0;
}
