#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int x= 0, y= 0, z= 0, k= 0, l= 0;
    int p= 7, r= 7;
    char a= '\0', b= '\0';
    string str= "", st= "", sr= "000000000", s1= "00000000", s2= "00000000";            //For Bins
    cout<<"\nEnter your two Binary Inputs\tStrictly 8-bit or less\n";   cin>>str>>st;   //Inputs
    while(str[x])                                                                       //Count
        x++;
    while (st[y])
        y++;
    cout<<"\n\nInput 1 has "<<x<<" Digits\nInput 2 has "<<y<<" Digits";                 //No of bits in Input
    if(x!=8)                                                                            //For the logic to replace in the 8 bit string
        r= x- 1;
    for(r; r>=0; r--)                                                                   //For loop for replacement
    {
        s1[p]= str[r];
        p--;
    }
    p= 7; r= 7;
    if(y!=8)                                                                            //For the logic to replace in the 8 bit string
        r= y- 1;
    for(r; r>=0; r--)                                                                     //For loop for replacement
    {
        s2[p]= st[r];
        p--;
    }
    cout<<"\nInput 1 in 8-bit "<<s1<<"\nInput 2 in 8-bit "<<s2;                         //Re-display input in 8-bit
    x= 7; y= 7; k= 8;                                                                      //Counters
    for(int i= 0;i< 8; i++)                                                                //Logic
    {
        a=s1[x];
        b=s2[y];
        if(a=='1' && b=='1')
        {
            if(z==0)
                sr[k]= '0';
            else
                sr[k]= '1';
            z= 1;
        }
        if((a=='1' && b=='0') || (a=='0' && b=='1'))
        {
            if(z==0)
            {
                sr[k]= '1';
                z= 0;
            }
            else
            {
                sr[k]= '0';
                z= 1;
            }
        }
        if(a=='0' && b=='0')
        {
            if(z==0)
                sr[k]= '0';
            else
                sr[k]= '1';
            z= 0;
        }
        x--; y--; k--;
    }
    if(z==1)
        sr[k]= '1';                                                                      //Logic ends
    cout<<"\n\nThe Addition Result in 9-Bits is "<<sr;                                  //9-bit Display
    for(l; l<=3; l++)                                                                     //Remove Extra 0(s)
    {
        if(sr[l]=='0')
            sr[l]= '\0';
        else
            break;
    }
    cout<<"\n\nThe Addition Result in Least No. of Bits is "<<sr<<"\n ";                //Show Result in least No. of bit
    return 0;
}