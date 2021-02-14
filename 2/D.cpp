#include <iostream>

int main()
{   
    int c = 0;
    int test = 1;
    int N;
    std::cin >> N;
    while (test <= N)
    {
        if (test == N)
        {
            c = 1;
            break;
        }
        else
            test *= 2;
    }
    if (c==1)
        std::cout << "YES";
    else
        std::cout << "NO";
    return 0;
}
