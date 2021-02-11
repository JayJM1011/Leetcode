#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int No= 0;                                          //<Inputs>
    int i= 0, j= 0;
    cout<<"Enter No. of Elements\t";    cin>>No;
    int arr[No];
    cout<<"\nEnter Elements\n";
    for(i= 0; i< No; i++)
        cin>>arr[i];                                    //</inputs>
    for(i= No- 1; i>=0; i--)
    {
        for(j= 0; j< i; j++)
        {
            if(arr[j]> arr[j+ 1])
                swap(arr[j], arr[j+ 1]);
        }
    }
    for(i= 0; i< No; i++)                               //<Outputs>
    {
        if(i==No-1)
        {
            cout<<arr[i];
            return 0;
        }
        cout<<arr[i]<<", ";
    }                                                   //</Outputs>
    return 0;
}