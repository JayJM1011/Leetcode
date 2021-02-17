#include <iostream>

bool PowOf4(int Num)
{
    if(Num<=0)
        return false;
    if(Num==1)
        return true;
    unsigned int x= 4;
    while(x<=Num)
    {
        if(Num% 2==0 && Num/ (x/ 4)==4)
            return true;
        x= x* 4;
    }
    return false;
}
int main()
{
    int Num= 0;
    std::cout<<"Enter number\t";  std::cin>>Num;
    bool y= PowOf4(Num);
    if(y)
    {
        std::cout<<"Power of 4";
        return 0;
    }
    std::cout<<"Not a Power of 4";
    return 0;
}
//1162261466