#include <iostream>
using  namespace std;
//https://upload.wikimedia.org/wikipedia/commons/0/0d/PascalTriangleAnimated2.gif
int Combination(int x, int y)
{
    int a= 0, b= 0, c= 0;
    int n= 1, n_r= 1, r= 1, C= 0;
    for(a= 1; a<=x; a++)
        n= n* a;
    for(b= 1; b<=x- y; b++)
        n_r= n_r* b;
    for(c= 1; c<=y; c++)
        r= r* c;
    C= (n)/ ((n_r)* (r));
    return C;
}

int main()
{
    int m= 0, i= 0, j= 0, k= 0;
    cout<<"Enter No. of Layers\n";  cin>>m;
    cout<<"\n";
    for(i= 0; i< m; i++)                            //For each layer
    {
        for(j= 0; j<=i; j++)
        {
            for(k= m- 1- i+ j; k>=0; k--)
                cout<<" ";
            cout<<Combination(i, j);
        }
        cout<<"\n";
    }
    return 0;
}