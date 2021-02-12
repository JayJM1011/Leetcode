#include <iostream>

bool PowOf2(int Num)
{
    if(Num< 0)
        return false;
    if(Num==1)
        return true;
    unsigned int x= 2;
    while(x<=Num)
    {
        if(Num% x==0 && Num/ (x/ 2)==2)
            return true;
        x= x* 2;
    }
    return false;
}
int main()
{
    int Num= 0;
    std::cout<<"Enter number\t";  std::cin>>Num;
    bool y= PowOf2(Num);
    if(y)
    {
        std::cout<<"Power of 2";
        return 0;
    }
    std::cout<<"Not a Power of 2";
    return 0;
}