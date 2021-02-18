#include <iostream>

int main()
{
    int n;
    int m;
    int k;
    std::cin >> n;
    std::cin >> m;
    std::cin >> k;
	int **a = new int* [n+2];
	for (int i=0; i<n+2; i++)
	{
		a[i] = new int[m+2];
	}
	for (int i=0; i<n+2; i++)
	{
		for (int j=0; j<m+2; j++)
		{
			a[i][j]=0;
		}
	}
	int x;
	int y;
	
    for (int i=0; i<k; i++)
    {
		std::cin >> x;
		std::cin >> y;
		a[x][y]=-1;
		if (a[x+1][y]!=-1)
			a[x+1][y]++;
		if (a[x-1][y]!=-1)
			a[x-1][y]++;
		if (a[x][y+1]!=-1)
			a[x][y+1]++;
		if (a[x][y-1]!=-1)
			a[x][y-1]++;
		if (a[x+1][y+1]!=-1)
			a[x+1][y+1]++;
		if (a[x+1][y-1]!=-1)
			a[x+1][y-1]++;
		if (a[x-1][y+1]!=-1)
			a[x-1][y+1]++;
		if (a[x-1][y-1]!=-1)
			a[x-1][y-1]++;
	}
	
	for (int i=1; i<(n+1); i++)
	{
		for (int j=1; j<(m+1); j++)
		{
			if (j==m)
				std::cout << a[i][j];
			else
				std::cout << a[i][j] << " ";
		}
		std::cout << std::endl;
	}
	for (int i=0; i<n+2; i++)
	{
		delete [] a[i];
	}
	delete [] a;
    return 0;
}

