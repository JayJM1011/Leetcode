#include <iostream>
#define cout std::cout
#define cin std::cin

int main()
{
    int no= 0, n= 0, arr[100], temp= 0;
    int i= 0, j= 0;
    cout<<"Enter No. of Elements\t";    cin>>no;    n=no;       //Inputs
    while(i< no)
    {
        cin>>arr[i];
        i++;
    }
    for (i= 0; i< no;i++)                                       //Logic
    {
        for(j= 0; j< no- 1; j++)
        {
            if(arr[j]==0)
            {
                temp= arr[j];
                arr[j]= arr[j+ 1];
                arr[j+ 1]= temp;
            }
        }
    }
    i= 0;
    while(i< n)                                                 //Display
    {
        cout<<arr[i];
        i++;
    }
    return 0;
}