#include <iostream>
#define cout std::cout
#define cin std::cin

int main()
{
    int  i= 0, j= 0, k= 0;
    int n= 0, rem= 0;
    cout<<"Enter the No. of Elements\t\t";      cin>>n;
    int ar[n]= {0};
    cout<<"\nEnter Elements\n";
    for(i= 0; i< n; i++)
        cin>>ar[i];
    cout<<"\nEnter No. you want Removed\n";     cin>>rem;
    for(i= 0; i< n; i++)
    {
        if(ar[i]==rem)
        {
            for(j= i; j< n; j++)
            {
                ar[j]= ar[j+1];
            }
            k++;
        }
    }
    cout<<"\n";
    for(i= 0; i< n- k; i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}