#include <iostream>

int main()
{
    int n;
    std::cin >> n;
	int *a = new int[n];
	float s=0;
    for (int i=0; i<n; i++)
    {
		std::cin >> a[i];
		s+=a[i];
		
	}
    s=s/n;
    int k=0;
    for (int i=0; i<n; i++)
    {
		if (a[i]>s)
		{
			k+=a[i];
		}
	}
	std::cout<<k;
	delete[] a;
    return 0;
}

