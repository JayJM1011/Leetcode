#include <iostream>
#define cout std::cout
#define cin std::cin

int main()
{
    int No= 0, i= 0, temp= 1, Pro= 1;
    cout<<"Enter No. of Elements\t";    cin>>No;
    for( ; i< No; i++)
    {
        cin>>temp;
        Pro= Pro* temp;
    }
    cout<<"\n"<<Pro;
    return 0;
}
