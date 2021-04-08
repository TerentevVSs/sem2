#include <iostream>
#include <vector>
#include <string>
int main()
{
	std::string st;
	int* a = new int(256);
	for(int i=0; i<256; i++)
	{
		a[i]=0;
	}
	float len=0;
	while(std::cin)
	{
		std::getline(std::cin, st);
		len+=st.size();
		for (int i=0; i<int(st.size()); i++)
		{
			int b = int(st[i]);
			a[b]++;
		}
	}
	std::cout<<std::endl;
	for(int i=0; i<256; i++)
	{
		if (a[i]!=0)
		{
			std::cout<<"'"<<char(i)<<"'"<<" "<<a[i]/len<<std::endl;
		}
		a[i]=a[i]/len;
	}
	int n=256;
	for(int i=0; i<n; i++)
		for(int j=0; j<n-1; j++)
		{
			if (a[j]<a[j-1])
			{
				int c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
			}
		}
	std::cout<<std::endl;
	for(int i=0; i<256; i++)
	{
		std::cout<<"'"<<"'"<<" "<<a[i]<<std::endl;
	}
	//delete[] a;
	return 0;
}
