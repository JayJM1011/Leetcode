#include <iostream>
#define cout std::cout
#define cin std::cin
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
    cout<<"Enter which Layer is to be Displayed\n"; cin>>m;
    cout<<"\n";
    m--;
    for(j= 0; j<=m; j++)                                   //Only the Layer Specified to be Displayed
    {
        cout<<Combination(m, j)<<" ";
    }
    return 0;
}