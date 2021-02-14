#include <iostream>

int main()
{   
    int N;
    std::cin >> N;
    int c = 0;
    while (N != 0)
    {
        if (N % 2 == 0)
            c++;
        std::cin >> N;
    }
    std::cout << c;
    return 0;
}
