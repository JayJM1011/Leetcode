#include <iostream>

bool PowOf3(int Num)
{
    if(Num< 0)
        return false;
    if(Num==1)
        return true;
    unsigned int x= 3;
    while(x<=Num)
    {
        if(Num% x==0 && Num/ (x/ 3)==3)
            return true;
        x= x* 3;
    }
    return false;
}
int main()
{
    int Num= 0;
    std::cout<<"Enter number\t";  std::cin>>Num;
    bool y= PowOf3(Num);
    if(y)
    {
        std::cout<<"Power of 3";
        return 0;
    }
    std::cout<<"Not a Power of 3";
    return 0;
}