#include <iostream>
int main()
{
	int N;
	std::cin >> N;
	int* mass = new int[N];
	for (int i = 0; i < N; i++)
	{
		std::cin >> mass[i];
	}
	int ind_plus = -1;
	int ind_minus = -1;
	for (int j = 0; j < N; j++)
	{
		for (int i = 0; i < N; i++)
		{
			//std::cout << ind_minus << std::endl;
			if (mass[i] >= 0 and ind_plus >= 0)
			{
				if (mass[i] < mass[ind_plus])
				{
					int c = mass[i];
					mass[i] = mass[ind_plus];
					mass[ind_plus] = c;
					ind_plus = i;
					for (int k = 0; k < N; k++)
					{
						std::cout << mass[k] << " ";
					}
					std::cout << std::endl;
				}
				else
				{
					ind_plus = i;
				}
			}
			else if (mass[i] >= 0 and ind_plus < 0)
			{
				ind_plus = i;
			}
			else if (mass[i] < 0 and ind_minus >= 0)
			{
				if (mass[i] > mass[ind_minus])
				{
					int c = mass[i];
					mass[i] = mass[ind_minus];
					mass[ind_minus] = c;
					ind_minus = i;
					for (int k = 0; k < N; k++)
					{
						std::cout << mass[k] << " ";
					}
					std::cout << std::endl;
				}
				else
				{
					ind_minus = i;
				}
			}
			else if (mass[i] < 0 and ind_minus < 0)
			{
				ind_minus = i;
			}

		}
		ind_plus = -1;
		ind_minus = -1;
	}
	delete[] mass;
	return 0;
}