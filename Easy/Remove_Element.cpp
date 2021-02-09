#include <iostream>
using namespace std;

int main()
{
    int  i= 0, j= 0, k= 0, l= 0;
    int n= 0, rem= 0;
    cout<<"Enter the No. of Elements\t\t";      cin>>n;
    int ar[n]= {0};
    cout<<"\nEnter Elements\n";
    for(i= 0; i< n; i++)
        cin>>ar[i];
    cout<<"\nEnter No. you want Removed\n";     cin>>rem;
    for(i= 0; i< n; i++)
    {
        if(ar[j]==rem)
        {
            for(k= j; k< n- i; k++)
            {
                ar[k]= ar[k+1];
            }
            j--;
            l++;
        }
        j++;
    }
    cout<<"\n";
    for(i= 0; i< n- l; i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}