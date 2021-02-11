#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str= "";
    int len= 0;
    bool Valid= false;
    int i= 0, j= 0;
    cout<<"Enter String\t"; cin>>str;
    len= str.length();
    for(i= 0; i< len; i++)
    {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
            j++;
        else if(str[i]==')' || str[i]=='}' || str[i]==']')
            j--;
    }
    if(j==0)
        Valid= true;
    if(Valid)
        cout<<"\nValid Parentheses in the Given String";
    else
        cout<<"\nInvalid Parentheses in the Given String";
    return 0;
}