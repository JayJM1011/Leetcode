#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int x=0, y=0, i=0;
    cout<<"\n";
    cin>>x;
    bool a=false;
    string str="";
    str=str+to_string(x);
    while(str[i])
        i++;
    y=i-1;
    for(int j=0;j<=(i/2);j++)
    {
        if(str[j]!=str[y])
        {
            a=false;
            break;
        }
        else
        {
            y--;
        }
    }
    if(y<=((i/2)-1))
        a=true;
    cout<<a;
    return 0;
}