#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int Number(char Lett, int No)
{
    int a= 0, Ret= 0;
    int i= 0;
    while(i< 1)                         //Letter to Number
    {
        if(Lett=='A')
            a= 1;
        if(Lett=='B')
            a= 2;
        if(Lett=='C')
            a= 3;
        if(Lett=='D')
            a= 4;
        if(Lett=='E')
            a= 5;
        if(Lett=='F')
            a= 6;
        if(Lett=='G')
            a= 7;
        if(Lett=='H')
            a= 8;
        if(Lett=='I')
            a= 9;
        if(Lett=='J')
            a= 10;
        if(Lett=='K')
            a= 11;
        if(Lett=='L')
            a= 12;
        if(Lett=='M')
            a= 13;
        if(Lett=='N')
            a= 14;
        if(Lett=='O')
            a= 15;
        if(Lett=='P')
            a= 16;
        if(Lett=='Q')
            a= 17;
        if(Lett=='R')
            a= 18;
        if(Lett=='S')
            a= 19;
        if(Lett=='T')
            a= 20;
        if(Lett=='U')
            a= 21;
        if(Lett=='V')
            a= 22;
        if(Lett=='W')
            a= 23;
        if(Lett=='X')
            a= 24;
        if(Lett=='Y')
            a= 25;
        if(Lett=='Z')
            a= 26;
        i++;
    }
    Ret= a* pow(26, No);
    return Ret;
}
int main()
{
    string ColName= " ";
    cout<<"Enter Column Name\t";    cin>>ColName;
    int ColNumber= 0, len= ColName.length();
    int i= 0, j= 0;
    for(i= 0; i< len; i++)
    {
        j= len- i- 1;
        ColNumber= ColNumber+ Number(ColName[i], j);
    }
    cout<<"\n"<<ColNumber;
    return 0;
}