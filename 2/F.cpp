#include <iostream>

int main()
{
    int N;
    int max = 0;
    int count = 0;
    std::cin >> N;
    while (N != 0)
    {
        if (N == max)
            count++;
        if (N > max)
        {
            count = 1;
            max = N;
        }
        std::cin >> N;
    }
    std::cout << count;
    return 0;
}