#include <iostream>

int main()
{
    int N;
    int max=0;
    std::cin >> N;
    if (N%2==0)
        max = N;
    while (N != 0)
    {
        if ((N > max) && (N % 2 == 0))
            max=N;
        std::cin >> N;
    }
    std::cout << max;
    return 0;
}
