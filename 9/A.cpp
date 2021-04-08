#include <iostream>
#include <vector>
#include <string>
int main()
{
	std::vector<char> a;
	std::string b;
	int w=1;
	while(std::cin>>b)
	{
		for (int i=0; i<int(b.size()); i++)
		{
			char c1=b[i];
			if (c1=='(' or c1=='[' or c1=='{' or c1=='<')
				a.push_back(b[i]);
			if (a.empty())
				w=0;
			char c2=a.back();
			if (c1==')' or c1==']' or c1=='}' or c1=='>')
			{
				if (c1==')' and c2=='(')
				{
					a.pop_back();
				}
				if (c1==']' and c2=='[')
				{
					a.pop_back();
				}
				if (c1=='}' and c2=='{')
				{
					a.pop_back();
				}
				if (c1=='>' and c2=='<')
				{
					a.pop_back();
				}
			}
		}
	}
	if (not a.empty())
		w=1;
	std::cout<<w;
	return 0;
}
