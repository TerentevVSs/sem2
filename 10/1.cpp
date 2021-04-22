#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int* generate(int n) //  генерация массива
{
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		*(a + i) = rand() % 1000;
	}
	return a;
}

}
int* search(int* a, int size, int x) // поиск элемента в массиве
{
	for (int i = 0; i < size; i++)
	{
		if (*(a + i) == x)
			return (a + i);
	}
	return nullptr;
}

int count(int* a, int size, int x) // колчество определенных элементов в массиве
{
	int sum = 0;
	int* p = search(a, size, x);
	int new_size = size - (p - a);
	while (p != nullptr)
	{
		sum++;
		new_size = size - (p - a);
		p = search(p + 1, new_size, x);
	}
	return sum;
}

int* bin_search(int* start, int* end, int x) // бинарный поиск
{
	int* l = start;
	int* r = end;
	int* s = l + (r - l) / 2;
	while (l != r - 1)
	{
		s = l + (r - l) / 2;
		if (x < *s)
			r = s;
		else
			l = s;
	}
	if (*l == x)
		return l;
	else if (*r == x)
		return r;
	else return nullptr;
}

void selection_sort_loop(int* s, int* e) // цикл selection sort
{
	int n = e - s;
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i; j < n - 1; j++)
		{
			if (*(s + j) < *(s + min))
				min = j;
		}
		int c = *(s + i);
		*(s + i) = *(s + min);
		*(s + min) = c;
	}
}

void selection_sort_rec(int* s, int* e) // рекурсия selection sort
{
	int n = e - s;
	int min = 0;
	for (int i = 0; i < n; i++)
	{
		if (*(s + i) < *(s + min))
			min = i;
	}
	int c = *s;
	*s = *(s + min);
	*(s + min) = c;
	if (n != 2)
		selection_sort_rec((s + 1), e);
}

void merge(int* l, int* m, int* r) // слияние 2 отсортированных массивов
{
	int* a = new int[r - l];
	int i = 0;
	int j = m - l;
	int len1 = m - l;
	int len2 = r - l;
	int k = 0;
	while (i < len1 or j < len2)
	{
		if (i < len1 and j < len2 and *(l + i) < *(l + j))
		{
			a[k] = *(l + i);
			k++;
			i++;
		}
		else if (i < len1 and j < len2 and *(l + i) >= *(l + j))
		{
			a[k] = *(l + j);
			k++;
			j++;
		}
		else if (i < len1 and j == len2)
		{
			a[k] = *(l + i);
			k++;
			i++;
		}
		else if (i == len1 and j < len2)
		{
			a[k] = *(l + j);
			k++;
			j++;
		}
	}
	for (int i = 0; i < len2; i++)
	{
		*(l + i) = a[i];
	}
	delete[] a;
}

void merge_sort(int* l, int* r) // сортировка слиянием
{
	if (r - l > 1)
	{
		int* m = l + (r - l) / 2;
		merge_sort(l, m);
		merge_sort(m, r);
		merge(l, m, r);
	}
}

int main()
{
	srand(time(0));
	int n = 100000;
	int* x = generate(n);
	for (int i = 0; i < n; i++)
	{
		std::cout << x[i] << " ";
	}
	std::cout << std::endl;
	/*
	* // куча тестов
	selection_sort_loop(x, x+n);
	selection_sort_rec(x, x+n);
	for (int i = 0; i < n; i++)
	{
		x[i] = (i - 5) * (i - 5);
	}
	selection_sort_rec(x, search(x, 11, 0));
	std::cout << count(x, 11, 25) << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << x[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	merge(x, search(x, 11, 0), x + 11);
	for (int i = 0; i < n; i++)
	{
		std::cout << x[i] << " ";
	}
	//int*a=bin_search(x, x+n, 649);
	//std::cout<<std::endl<<*a;
	*/
	merge_sort(x, x + n);
	for (int i = 0; i < n; i++)
	{
		std::cout << x[i] << " ";
	}
	return 0;
}
