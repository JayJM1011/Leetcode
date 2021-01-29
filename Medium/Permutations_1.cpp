#include <iostream>
#include <unistd.h>
using namespace std;

void disp(string str)
{
    cout<<str<<"\n";
}
void Permute(string a, int s, int e)
{
    if(s==e)
    {
        disp(a);
    }
    else
    {
        char temp= ' ';
        for(int i= s; i<=e; i++)
        {
            temp= a[s];
            a[s]= a[i];
            a[i]= temp;
            s++;
            sleep(1);
            Permute(a, s, e);
            s--;
            temp= a[s];
            a[s]= a[i];
            a[i]= temp;
        }
    }
}

int main()
{
    int No= 0;  int i= 0;
    string str= "";
    cout<<"\nEnter Elements\n";     cin>>str;   cout<<"\n";
    No= str.length();   No--;
    Permute(str, 0, No);
    return 0;
}