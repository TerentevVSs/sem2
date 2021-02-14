#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::string chief = "A999AA";
    int speed = 0;
    int fee = 0;
    std::cin >> speed >> s;
    while (s != chief)
    {   
        if (speed > 60)
        {
            char s1 = s[1];
            char s2 = s[2];
            char s3 = s[3];
            if ((s1 == s2) && (s1 == s3))
                fee += 1000;
            else if (((s1 == s2) && (s1 != s3)) || ((s2 == s3) && (s1 != s3)) || ((s1 == s3) && (s1 != s2)))
                fee += 500;
            else
                fee += 100;
        }
        std::cin >> speed >> s;
    }
    std::cout << fee;
    return 0;
}