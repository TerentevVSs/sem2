#include <iostream>

int main()
{
	int n;
	std::cin>>n;
	int* a=new int[n];
	for (int i=0; i<n; i++)
	{
		std::cin>>a[i];
	}
	int* b=new int[n];
	for (int i=0; i<n; i++)
	{
		b[i]=i;
	}
	for (int i=0; i<n-1; i++)
	{
		for (int j=0; j<n-1; j++)
		{
			if (a[j]>a[j+1])
			{
				int s=a[j];
				a[j]=a[j+1];
				a[j+1]=s;
				
				s=b[j];
				b[j]=b[j+1];
				b[j+1]=b[j];
			}
		}
	}
	for (int i=0; i<n; i++)
	{
		std::cout<<a[i]<<" ";
	}
	float s=a[1]-a[0];
	int t1=0;
	int t2=1;
	for (int i=0; i<n-1; i++)
	{
		int s1=a[i];
		int s2=a[i+1];
		if (s2-s1<s)
		{
			s=s2-s1;
			t1=i;
			t2=i+1;
		}
	}
	std::cout<<std::endl<<b[t1]+1<<"  "<<b[t2]+1;
	delete []a;
	delete []b;
	return 0;
}
