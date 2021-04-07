#include <iostream>
#include <string>
#include <vector>


struct Citizen {
	Citizen(std::string name, bool knight) : name(name), knight(knight)
	{}

	std::string name;
	bool knight;
};

int main() {
	int count;
	bool inf;
	std::cin >> count >> inf;

	std::string name;
	bool type;

	std::vector<Citizen> a;

	for (size_t i = 0; i < count; i++)
	{
		std::cin >> name >> type;
		a.push_back(Citizen(name, type));
	}

	int days;
	std::cin >> days;
	int i = -1;
	for (int day = 0; day < days; day++)
	{
		i++;
		if (a.size() == 1)
		{
			continue;
		}
		if (a[i % a.size()].knight and inf)
		{
		}
		else if (a[i % a.size()].knight and !inf)
		{
			a.erase(a.begin() + i % a.size());
			i--;
		}
		else if (!a[i % a.size()].knight)
		{
			if (!inf)
			{
				a[i % a.size()].knight = true;
			}
			inf = !inf;
		}
	}
	for (size_t i = 0; i < a.size(); i++)
	{
		if (a[i].knight)
		{
			std::cout << a[i].name << ' ' << 1 << '\n';
		}
		else
		{
			std::cout << a[i].name << ' ' << 0 << '\n';
		}
	}
	return 0;
}