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
    return 0
}