#include <iostream>
#define cout std::cout
#define cin std::cin

int Min(int a, int b)
{
    if(a< b)
        return a;
    return b;       //Cause even if b==a we need to skip a
}
int main()
{
    system("cls");
    int i= 0;
    int NoOfStairs= 0, Sum= 0, Mini= 0;
    cout<<"\nEnter the Number of Stairs\t";     cin>>NoOfStairs;
    int Stairs[NoOfStairs]= {0};
    system("cls");
    cout<<"\nEnter Elements\n";
    for( ; i< NoOfStairs; i++)
        cin>>Stairs[i];
    for(i= 0; i< NoOfStairs- 1; i++)
    {
        Mini= Min(Stairs[i], Stairs[i+ 1]);
        if(Mini==Stairs[i+ 1])
            i++;
        Sum+= Stairs[i];
    }
    cout<<"\n\n"<<Sum;
    return 0;
}