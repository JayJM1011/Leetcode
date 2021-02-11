#include <iostream>
#include <string.h>
using namespace std;

class RomToInt
{
    public:
    int no= 0, len= 0;                                  //Don't
    int i= 0;
    int x= 0;
    string str= "";
    void in()
    {
        cout<<"\nEnter your Roman Number\t\t";
        cin>>str;
        len= str.length();
    }
    void ToLower()
    {
        for(i= 0; i< len; i++)
            str[i]= towlower(str[i]);
    }
    void NoDetermination()                                      //Logic
    {
        for(i= 0; i< len; i++)
        {
            x= 0;
            if(str[i]=='i')
                x+= 1;
            if(x==1 && str[i+1]=='i')
            {
                x+= 1;
                i++;
            }
            if(x==2 && str[i+1]=='i')
            {
                x+=1;
                i++;
            }
            if(x==1 && str[i+1]=='v')
            {
                x+=3;
                i++;
            }
            if(str[i]=='v' && str[i-1]!='i')
                x+=5;
            if(x==5 && str[i+1]=='i')
            {
                x+=1;
                i++;
            }
            if(x==6 && str[i+1]=='i')
            {
                x+=1;
                i++;
            }
            if(x==7 && str[i+1]=='i')
            {
                x+=1;
                i++;
            }
            if(x==1 && str[i+1]=='x')
            {
                x+=8;
                i++;
            }
            if(str[i]=='x' && str[i-1]!='i')
                x+=10;
            if(x==10 && str[i+1]=='l')
            {
                x+=30;
                i++;
            }
            if(str[i]=='l' && str[i-1]!='x')
                x+=50;
            if(x==50 && str[i+1]=='x')
            {
                x+=10;
                i++;
            }
            if(x==60 && str[i+1]=='x')
            {
                x+=10;
                i++;
            }
            if(x==70 && str[i+1]=='x')
            {
                x+=10;
                i++;
            }
            if(x==10 && str[i+1]=='c')
            {
                x+=80;
                i++;
            }
            if(str[i]=='c' && str[i-1]!='x')
                x+=100;
            if(x==100 && str[i+1]=='x' && str[i+2]!='l')
            {
                x+=10;
                i++;
            }
            if(x==110 && str[i+1]=='x')
            {
                x+=10;
                i++;
            }
            if(x==120 && str[i+1]=='x')
            {
                x+=10;
                i++;
            }
            if(x==100 && str[i+1]=='d')
            {
                x+=300;
                i++;
            }
            if(str[i]=='d' && str[i-1]!='c')
                x+=500;
            if(x==100 && str[i+1]=='m')
            {
                x+=800;
                i++;
            }
            if(str[i]=='m' && str[i-1]!='c')
                x+=1000;
            no=no+x;
        }
    }
    void disp()
    {
        cout<<no;
    }
};
int main()
{
    RomToInt Ob;
    Ob.in();
    Ob.ToLower();
    Ob.NoDetermination();
    Ob.disp();
    return 0;
}