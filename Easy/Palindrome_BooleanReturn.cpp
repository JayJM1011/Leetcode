#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int y= 0, i= 0;
    string str= "";
    bool Ans= false;
    cout<<"\nEnter Number to be checked\n";
        cin>>str;
    while(str[i])
        i++;
    y= i;
    for(int j= 1; j<=i/ 2; j++)
    {
        if(str[j]!=str[y])
        {
            cout<<"\nNot a Palindrome No., never can be";
            break;            
        }
        else
            y--;
    }
    if(y<=(i/ 2- 1))
        cout<<"\nIt is a Palindrome No. my dude";
    return 0;
}