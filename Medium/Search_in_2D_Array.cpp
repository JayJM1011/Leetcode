#include <iostream>
using namespace std;

int main()
{
    int rows= 0, columns= 0, ToBeFound= 0;
    int i= 0, j= 0;                             //Counters
    bool Found= false;
    cout<<"Enter No. of rows\t";
    cin>>rows;
    cout<<"Enter No. of Columns\t";
    cin>>columns;
    int a[rows][columns];

    cout<<"\nEnter your Elements";
    for(i= 0; i< rows; i++)
    {
        cout<<"\nElements of Row"<<i+1<<"\n";
        for(j= 0; j< columns; j++)
            cin>>a[i][j];
    }
    
    cout<<"\nEnter No. to be found\t";
    cin>>ToBeFound;
    for(i= 0; i< rows; i++)
    {
        for(j= 0; j< columns; j++)
        {
            if(a[i][j]==ToBeFound)
            {
                cout<<"\nElement Present at Row No. "<<i+1<<" and Column No. "<<j+1;
                Found= true;
                break;
            }
        }
        if(Found)
            break;
    }
    return 0;
}