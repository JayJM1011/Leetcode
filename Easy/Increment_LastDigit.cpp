#include <iostream>

int main()
{
    int No= 0;
    std::cout<<"Enter length of number\t";      std::cin>>No;
    int arr[No]= {0};
    int i= 0;
    while(i< No)
    {
        std::cin>>arr[i];
        i++;
    }
    arr[No- 1]++;
    for(i= 0; i< No; i++)
        std::cout<<arr[i];
    return 0;
}