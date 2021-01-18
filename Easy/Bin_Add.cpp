#include <iostream>
#include <string.h>
using namespace std;

class BinAdd
{
    public:
    int x=0, y=0, z=0, k=0, l=0;
    int p=7, r=0;
    char a='\0', b='\0', c='\0';
    string str="", st="", sr="000000000", s1="00000000", s2="00000000";

    void in()
    {
        cout<<"\nEnter your two Binary Inputs\tStrictly 8-bit or less\n";
        cin>>str>>st;
    }
    void DigAndDisp()
    {
        while(str[x])
            x++;
        while (st[y])
            y++;
        cout<<"\n\nInput 1 has "<<x<<" Digits\nInput 2 has "<<y<<" Digits";
    }
    void ConvTo8Bit()
    {
        if(x!=8)
        {
            r=x-1;
        }
        r=7;
        for(r;r>=0;r--)
        {
            s1[p]=str[r];
            x--; p--;
        }
        p=7; r=7;
        if(y!=8)
        {
            r=y-1;
        }
        for(r;r>=0;r--)
        {
            s2[p]=st[r];
            y--; p--;
        }
    }
    void Disp2InpIn8Bit()
    {
        cout<<"\nInput 1 in 8-bits "<<s1<<"\nInput 2 in 8-bits "<<s2;
    }
    void Calc()
    {
        x=7; y=7; k=8;
        for(int i=0;i<8;i++)
        {
            a=s1[x];
            b=s2[y];
            if(a=='1' && b=='1')
            {
                if(z==0)
                    sr[k]='0';
                else
                    sr[k]='1';
                z=1;
            }
            if((a=='1' && b=='0') || (a=='0' && b=='1'))
            {
                if(z==0)
                {
                    sr[k]='1';
                    z=0;
                }
                else
                {
                    sr[k]='0';
                    z=1;
                }
            }
            if(a=='0' && b=='0')
            {
                if(z==0)
                    sr[k]='0';
                else
                    sr[k]='1';
                z=0;
            }
            x--; y--; k--;
        }
        if(z==1)
            sr[k]='1';
    }
    void DispIn9Bit()
    {
        cout<<"\n\nThe Addition Result in 9-Bits is "<<sr;
    }
    void Rem0()
    {
        for(l;l<=3;l++)
        {
            if(sr[l]=='0')
            {
                sr[l]='\0';
            }
            else
            {
                break;
            }
        }
    }
    void DispRes()
    {
        cout<<"\n\nThe Addition Result in Least No. of Bits is "<<sr<<"\n ";
    }
};
int main()
{
    BinAdd O;
    O.in();
    O.DigAndDisp();
    O.ConvTo8Bit();
    O.Disp2InpIn8Bit();
    O.Calc();
    O.DispIn9Bit();
    O.Rem0();
    O.DispRes();
    return 0;
}