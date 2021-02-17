#include <iostream>
#define cout std::cout
#define cin std::cin

int Min(int a, int b)
{
    if(a< b)
        return a;
    return b;       //Cause even if b==a we need to skip a
}