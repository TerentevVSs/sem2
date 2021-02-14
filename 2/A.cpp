#include <iostream>

int euklid(int a, int b)
{
    while (a != 0 && b != 0)
    {
        if (a < b)
            b = b % a;
        else
            a = a % b;
        
    }
    if (a == 0)
        return b;
    else
        return a;
    
}

int main()
{   
    int a;
    int b;
    std::cin >> a;
    std::cin >> b;
    int c = euklid(a, b);
    std::cout << c;;
    return 0;
}
