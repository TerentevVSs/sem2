#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    int i = 2;
    int c = -1;
    while ((i * i) < N)
    {
        if (N % i == 0)
        {
            c = 0;
            break;
        }
        else
            i++;
    }
    if (c == 0)
        std::cout << 0;
    else
        std::cout << 1;
    return 0;
}