#include <iostream>
#include <string.h>
using namespace std;

int main()                                          //100% Speed and 99% Mem
{
    string s= "";
    cout<<"Enter the Sentence\t";   cin>>s;
    int len= s.length();
    int i= len- 1;
    while(i> 0)
    {
        if(s[len- 1]==' ')
            len--;
        i--;
    }
    for(i= len- 1; i>=0; i--)
    {
        if(s[i]==' ')
        {
            cout<<"\nThe Length of last word is "<<len- 1- i;
            return 0;
        }
    }
    cout<<"\nThe Length of last word is "<<len;
    return 0;
}