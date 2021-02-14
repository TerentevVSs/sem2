#include <iostream>
#include <cmath>

int max_deg(int N)
{
    int deg = 0;
    while (N >= pow(60, deg + 1))
        deg++;
    return deg;
}

void print60(int number)
{
    int i;
    int ones = number % 10;
    int tens = (number - ones) / 10;

    i = 0;
    while (i < tens)
    {
        std::cout << "<";
        i++;
    }
    i = 0;
    while (i < ones)
    {
        std::cout << "v";
        i++;
    }
}

int main()
{
    int N;
    std::cin >> N;
    int i = 0;
    int deg = max_deg(N);
    int number = 0;
    int ost;
    if (deg == 0)
        print60(N);
    else
    {
        while (deg > 0)
        {
            ost = N % int(pow(60, deg));
            number = (N - ost) / int(pow(60, deg));
            print60(number);
            N = N % int(pow(60, deg));
            deg--;
            std::cout << ".";
        }
        print60(N);
    }
    return 0;
}
