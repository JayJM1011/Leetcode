#include <iostream>
#include <string.h>
using namespace std;

class Pal
{
    public:
    int y= 0, z= 0, i= 0;
    string str= "";
    bool Ans= false;

    void in()
    {
        cout<<"\nEnter Number to be checked\n";
        cin>>str;
    }
    void digits()
    {
        while(str[i])
            i++;
        y= i;
        z= i/ 2;
    }
    void Pali()
    {
        for(int j= 1; j<=z; j++)
        {
            if(str[j]!=str[y])
            {
                cout<<"\nNot a Palindrome No., never can be";
                break;
            }
            else
            {
                y--;
            }
        }
    }
    void ifPali()
    {
        if(y<=(z- 1))
        {
            cout<<"\nIt is a Palindrome No. my dude";
        }
    }
};
int main()
{
    Pal Obj;
    Obj.in();
    Obj.digits();
    Obj.Pali();
    Obj.ifPali();
    return 0;
}