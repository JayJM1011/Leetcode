#include <iostream>
#define cout std::cout
#define cin std::cin

int Climb(int a, int n)
{
    if(a> n)
        return 0;
    if(a==n)
        return 1;
    return Climb(a+ 1, n)+ Climb(a+ 2, n);  //Recursion ftw
}
int main()
{
    system("cls");
    int No= 0;
    cout<<"\nEnter No of Stairs\t";     cin>>No;
    cout<<"\n\nNo. of ways in which you can climb\nUsing Either one step or two is\t"<<Climb(0, No);
    return 0
}