#include <iostream>
using namespace std;

int main()
{
    int SizeOfMatrix= 0;
    int i= 0, j= 0;
    cout<<"n x n of the matrix?\t"; cin>>SizeOfMatrix;
    int Initial[SizeOfMatrix][SizeOfMatrix], Rotated[SizeOfMatrix][SizeOfMatrix];
    for(i= 0; i< SizeOfMatrix; i++)
    {
        for(j= 0; j< SizeOfMatrix; j++)
        {
            cin>>Initial[i][j];
            Rotated[i][j]= 0;
        }
    }
    i= 0; j= 0; SizeOfMatrix--;
    for(i= 0; i<=SizeOfMatrix; i++)
    {
        for(j= SizeOfMatrix; j>=0; j--)
        {
            Rotated[i][j]= Initial[j][i];
            if(j==0)
                cout<<Rotated[i][j];
            else
                cout<<Rotated[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}