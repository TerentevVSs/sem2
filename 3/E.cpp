#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int a;
    int b;
    cin>>a>>b;
    int* a1=&a;
    int* b1=&b;
    int c = do_some_awesome_work(a1, b1);
    cout<<c;
}
