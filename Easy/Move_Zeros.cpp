#include <iostream>
using namespace std;

class MoveZ
{
    public:
    int no= 0, n= 0, arr[100], temp= 0;
    int i= 0, j= 0;
    void in()
    {
        cout<<"Enter No. of Elements\t";
        cin>>no;
        n=no;
    }
    void arrIn()
    {
        while(i<no)
        {
            cin>>arr[i];
            i++;
        }
    }
    void shifter()
    {
        for (i= 0; i< no;i++)
        {
            temp= arr[i];
            if(temp==0)
            {
                for(j=i;j< no-1;j++)
                {
                    temp= arr[j];
                    arr[j]= arr[j+1];
                    arr[j+1]= temp;
                }
                no--;
            }
        }
        i=0;
    }
    void disp()
    {
        while(i<n)
        {
            cout<<arr[i];
            i++;
        }
    }
};

int main()
{
    MoveZ Obj;
    Obj.in();
    Obj.arrIn();
    Obj.shifter();
    Obj.disp();
    return 0;
}