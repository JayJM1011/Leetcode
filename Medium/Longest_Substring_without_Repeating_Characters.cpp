#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

int main()
{
    string str= "";
    int arr[256];                               //For all Characters Possible
    int l= 0, r= 0;                             //Left and Right Pointers
    int k= 0, Max= 0;
    cout<<"Enter String\n"; cin>>str;
    int len= str.length();
    while(l< 256)
    {
        arr[l]= 0;
        l++;
    }
    l= 0;
    while(r< len)
    {
        arr[str[r]]++;                          //As char can be taken as ASCII int values, they can be used for indexes
        while (arr[str[r]]> 1)                  //> 1 shows that char has been Repeated
        {
            arr[str[l]]--;                      //re-establishing initial state
            l++;
        }
        k= r- l+ 1;
        Max= max(Max, k);
        k= 0;
        r++;
    }
    cout<<"\n"<<Max;
    return 0;
}