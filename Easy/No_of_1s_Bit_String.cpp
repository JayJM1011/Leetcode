#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str= "";
    int i= 0, j= 0;
    cout<<"Enter Binary String\t";    cin>>str;
    int len= str.length();
    for( ; i< len; i++)
    {
        if(str[i]=='1')
            j++;
    }
    cout<<"Given String has "<<j<<" no of 1s";
    return 0;
}