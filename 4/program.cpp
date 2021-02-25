#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
/*
Рандомная генерация
*/
int* random_array(int n)
{
	/*
	Рандомная генерация
	*/
	int *a = new int [n+1];
	for (int i=0; i<n; ++i)
	{
		a[i]=rand()%1000;
	}
	a[n]=-1;
	return a;
}

/*
Печатает массив
*/
void print_array(int* a)
{
	/*
	 *  Печатает массив
	*/
	for(; *a!=-1;++a)
		std::cout <<*a<<"  ";
	std::cout<<"\n------------------\n";
}

/*
Максимум 2 элементов
*/
int max(int x, int y)
{
	/*
	Максимум 2 элементов
	*/
	return (x>y) ? x : y;
}

/*
Максимальный элемент рекурсией
*/
int max_array(int* a, int n)
{	
	/*
	Максимальный элемент рекурсией
	*/
	if (n==1)
		return *a;
	return max(*a, max_array(a+1,n-1));
}

/*
Максимальный элемент циклом
*/
int max_array2(int* a, int n)
{
	/*
	Максимальный элемент циклом
	*/
	int s=*a;
	for (int i=0; i<n; ++i)
	{
		++a;
		if (*a>s)
		{
			s=*a;
		}
	}
	return s;
}

/*
Максимальный элемент до -1
*/
int max_array3(int* a)
{
	/*
	Максимальный элемент до -1
	*/
	int s=*a;
	while (*a+1)
	{
		++a;
		if (*a>s)
		{
			s=*a;
		}
	}
	return s;
}
int size_array(int* a)
{
	int* p;
	for (p=a;*p+1;++p);
	return p-a;
}
bool is_in_array(int*a, int n, int x)
{
	for (int* p=a; p!=a+n; ++p)
		{
			if(*p==x)
				return true;
		}
	return false;
}

bool is_in_array(int* l, int* r, int x)
{
	if (l>=r)
	return false;
	else
	int *m = l + (r-l)/2;
	if(m==x)
		return true;
	if(*m<x)
		return is_in_array(m+1,r,x)
	else
		return is_in_array(l, m, x)
	 
}

bool bin_search(int* a, int n, int x)
{
	int l=0;
	int r=n-1;
	while(l<=r)
	{
		int m = (r + l) / 2;
		if (a[m]==x)
			return true;
		if (a[m]<x)
			l=m+1;
		else
			r=m-1;
	}
	return false;
}



int main()
{
	int n=10;
	srand(time(NULL));
	int *v = random_array(n);
	print_array(v);
	int a = max_array3(v);
	int b = size_array(v);
	std::cout<<b<<std::endl;
	std::cout << a <<std::endl;
	
	std::sort(v, v+n);
	print_array(v);
	delete[] v;
	return 0;
}
