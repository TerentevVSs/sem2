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
	/*
	int x=int(n/2);
	int l=0;
	int r=n-1;
	
	 * qsort
	while(l<=r)
	{
		while(l<x)
		{
			if (a[l]>a[x])
			{
				int s=a[l];
				a[l]=a[r];
				a[r]=s;
			}
			l++;
		}
		while(r>x)
		{
			if (a[x]>a[r])
			{
				int s=a[l];
				a[l]=a[r];
				a[r]=s;
			}
			r--;
		}
	}
	*/
	
	
	
	for (int i=0; i<n-1; i++)
	{
		for (int j=0; j<n-1; j++)
		{
			if (a[j]>a[j+1])
			{
				int s=a[j];
				a[j]=a[j+1];
				a[j+1]=s;
			}
		}
	}
	
	std::cout<<a[int(n/2)];
	delete []a;
	return 0;
}
