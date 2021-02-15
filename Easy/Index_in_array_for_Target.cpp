#include <iostream>

int main()
{
    int No= 0, Tar= 0;
    int i= 0;
    std::cout<<"Enter length of array:\t";  std::cin>>No;
    int arr[No]= {0};
    std::cout<<"Enter Elements of Sorted Array\n";
    while(i< No)
    {
        std::cin>>arr[i];
        i++;
    }
    std::cout<<"\nEnter Target\n";      std::cin>>Tar;
    int ll= 0, ul= No- 1;
    while(ll<=ul)
    {
        if(arr[(ul+ ll)/ 2]==Tar)
        {
            std::cout<<"\nSimilar Target value at "<<(ul+ ll)/ 2;
            return 0;
        }
        if(arr[(ul+ ll)/ 2]< Tar)
            ll= (ul+ ll)/ 2+ 1;
        if(arr[(ul+ ll)/ 2]> Tar)
            ul= (ul+ ll)/ 2- 1;
    }
    std::cout<<"\nInsert Target value at "<<ll;
    return 0;
}
//For a sorted array