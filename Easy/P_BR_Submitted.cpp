#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int x= 0, y= 0, i= 0;
    cout<<"Enter to check if Palindrome\n";
    cin>>x;
    string str= "";
    str= str+ to_string(x);
    while(str[i])
        i++;
    y= i- 1;
    for(int j= 0; j<=(i/ 2); j++)
    {
        if(str[j]!=str[y])
        {
            cout<<false;
            return 0;
        }    
        y--;
    }
    cout<<true;
    return 0;
}
// class Solution
// {
//     public:
//     bool isPalindrome(int x)
//     {
//         int i= 0;
//         string str= "";
//         str= str+ to_string(x);
//         while(str[i])
//             i++;
//         int y= i- 1;
//         for(int j= 0; j<=(i/ 2); j++)
//         {
//             if(str[j]!=str[y])
//                 return false;
//             y--;
//         }
//         return true;
//     }
// };