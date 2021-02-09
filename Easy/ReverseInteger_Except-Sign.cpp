#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

class RevInt
{
    public:
    int x= 0, y= 0, z= 0, in= 0, i= 0, j= 0, k= 0, l= 0, temp= 0, sum= 0;
    int a= 0, b= 0;                       //Counter for no. of \0 in string
    string str= "";
    bool c= false;
    char m= '\0';
    void In()
    {
        cin>>in;
    }
    void ConAndNoOfChar()
    {
        str= str+ to_string(in);
        while(str[i])
            i++;
        i--;
        j=i;
    }
    void Rev()
    {
        z= i/ 2;
        if(str[0]=='-')
        {
            x= 1;
            y= 1;
            k= 1;
        }
        for (x; x<=z; x++)
        {
            temp= str[x];
            str[x]= str[j];
            str[j]= temp;
            j--;
        }
        j= 0;
    }
    void RemZero()
    {
        for(k; k<=i; k++)
        {
            if(str[k]=='0')
            {
                str[k]= '\0';
                a++;
            }
            else
                break;
        }
        b= str.length();
        b= b- a- y;
        cout<<"\nDigits after 0s Removed \t"<<b;
        b--;
    }
    void display1()
    {
        cout<<"\nIn String Datatype\t"<<str<<"\n";
    }
    void BackToInt()
    {
        if(y==1)
            c=true;
        for(y; y<=i; y++)
        {
            m= str[y];
            l= m- 48;
            if(l!=-48)
            {
                sum= sum+ (l* pow(10,b));
                b--;
            }
        }
        if(c)
            sum= -sum;
    }
    void display2()
    {
        cout<<"In int Datatype\t\t"<<sum<<"\n";
    }
};

int main()
{
    RevInt Obj;
    Obj.In();
    Obj.ConAndNoOfChar();
    Obj.Rev();
    Obj.RemZero();
    Obj.display1();
    Obj.BackToInt();
    Obj.display2();
    return 0;
}