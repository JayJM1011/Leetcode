#include <iostream>
using namespace std;

class Ok
{
    public:
    int No= 0, posi1= 0, posi2= 0;
    float tar= 0.0, x= 0.0, y= 0.0, z= 0.0;
    float a[999];
    void inptNo()
    {
        cout<<"No. of Inputs?\n";
        cin>>No;
    }
    void inpt()
    {
        cout<<"\nEnter your inputs\n";
        for(int j= 0; j< No; j++)
        {
            cin>>a[j];
        }
    }
    void tr()
    {
        cout<<"\nEnter your target\n";
        cin>>tar;
    }
    void calc()
    {
        for(int k= 0; k< No; k++)
        {
            for(int l= 0; l< No; l++)
            {
                if(k==l)
                {
                    break;
                }
                x=a[k];
                y=a[l];
                z=x+y;
                if(z==tar)
                {
                    posi1= k;
                    posi2= l;
                    break;
                }
            }
            if(z==tar)
            {
                break;
            }
        }
    }
    void display()
    {
        cout<<"\n["<<posi2<<","<<posi1<<"]\n";
    }
};
int main()
{
    Ok Obj;
    Obj.inptNo();
    Obj.inpt();
    Obj.tr();
    Obj.calc();
    Obj.display();
    return 0;
}