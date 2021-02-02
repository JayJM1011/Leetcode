#include <iostream>
#include <math.h>
using namespace std;

char Letter(int No)
{
    char a= '0';
    switch (No)
    {
        case 0:
        a= '0';
        break;
        case 1:
        a= 'A';
        break;
        case 2:
        a= 'B';
        break;
        case 3:
        a= 'C';
        break;
        case 4:
        a= 'D';
        break;
        case 5:
        a= 'E';
        break;
        case 6:
        a= 'F';
        break;
        case 7:
        a= 'G';
        break;
        case 8:
        a= 'H';
        break;
        case 9:
        a= 'I';
        break;
        case 10:
        a= 'J';
        break;
        case 11:
        a= 'K';
        break;
        case 12:
        a= 'L';
        break;
        case 13:
        a= 'M';
        break;
        case 14:
        a= 'N';
        break;
        case 15:
        a= 'O';
        break;
        case 16:
        a= 'P';
        break;
        case 17:
        a= 'Q';
        break;
        case 18:
        a= 'R';
        break;
        case 19:
        a= 'S';
        break;
        case 20:
        a= 'T';
        break;
        case 21:
        a= 'U';
        break;
        case 22:
        a= 'V';
        break;
        case 23:
        a= 'W';
        break;
        case 24:
        a= 'X';
        break;
        case 25:
        a= 'Y';
        break;
        case 26:
        a= 'Z';
        break;
        default:
        break;
    }
    return a;
}
int main()
{
    int ColumnNo= 0, temp= 0, ToChar= 0;
    cout<<"Enter Column No.\t"; cin>>ColumnNo;
    string str= "0000000000";
    int i= 0;
    for(i= 9; i>=0; i--)
    {
        temp= pow(26, i);
        if(ColumnNo<=26)
            ToChar= ColumnNo;
        else
        {
            ToChar= ColumnNo/ temp;
            ColumnNo= ColumnNo% temp;
        }
        str[i]= Letter(ToChar);
    }
    cout<<"Column Name is\t\t";
    for(i= 9; i>=0; i--)
    {
        if(str[i]!='0')
            cout<<str[i];
    }
    return 0;
}