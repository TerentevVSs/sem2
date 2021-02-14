#include <iostream>

int checking(int N)
{
    int i = 2;
    while (N != 1)
    {
        if (N % i == 0)
        {
            std::cout << i << std::endl;
            N = N / i;
        }
        else
            i++;
    }
    return N;
}
int main()
{
    int N;
    std::cin >> N;
    int i = 2;
    N = checking(N);
    return 0;
}